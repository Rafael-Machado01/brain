"use client";

import { useState } from "react";
import Popup from "../ui/Popup";
import Modal from "../ui/Modal";
import { addComment } from "@/app/actions";
import { tailwindData } from "@/app/constants/tailwindData";

import type { Post as PostType } from "@/app/types/Post";
import Button from "../ui/Button";
import TextArea from "../ui/TextArea";

interface CommentModalProps {
  post: PostType;
  currentUserId?: string;
  isOpen: boolean;
  onRequestClose: () => void;
}

export default function CommentModal({
  post,
  currentUserId,
  isOpen,
  onRequestClose,
}: CommentModalProps) {
  const [content, setContent] = useState("");
  const [toggle, setToggle] = useState(true);
  const handleClickComment = () => {
    setToggle(!toggle);
  };
  const [flashPopup, setFlashPopup] = useState<{
    message: string;
    type: "error" | "success";
  } | null>(null);
  const handleAddComment = async () => {
    if (!currentUserId) {
      return null;
    }
    if (!content.trim()) {
      setFlashPopup({
        message: "O comentário não pode estar vazio.",
        type: "error",
      });
    }
    await addComment(post.id, content);
    setFlashPopup({
      message: "Comentário adicionado",
      type: "success",
    });
    setContent("");
  };
  return (
    <>
      {flashPopup && (
        <Popup message={flashPopup.message} type={flashPopup.type} />
      )}
      {isOpen && (
        <div>
          {currentUserId && (
            <Modal
              isOpen
              onClose={onRequestClose}
              className="p-2 gap-2"
              title="Adicione Comentário"
            >
              <TextArea
                value={content}
                onChange={(e) => setContent(e.target.value)}
                placeholder="Faça um comentário"
              ></TextArea>
              <br />
              <br />
              <Button
                type="submit"
                className={
                  content.length >= 5
                    ? tailwindData.saveButton
                    : tailwindData.disabledButton
                }
                onClick={handleAddComment}
              >
                Comentar
              </Button>
            </Modal>
          )}
        </div>
      )}
    </>
  );
}
