'use client'
import Markdown from "react-markdown";
import { useState } from "react";
export default function Editor() {
 const [content,setContent] = useState(``);

  if(localStorage.getItem('saved') != null) {
    localStorage.getItem('saved');
    setContent(saved);
  }
 function handleChange(event: React.ChangeEvent<HTMLTextAreaElement>) {
  setContent(event.currentTarget.value);
 }
 function handleClick() {
  localStorage.setItem('saved',content);
 }


  return (
    <>
    

    <h1>Voce está editando</h1>
    <textarea onChange={handleChange}></textarea>
    <Markdown>{content}</Markdown>
    <button onClick={handleClick}>salvar</button>
    </>
  )
}