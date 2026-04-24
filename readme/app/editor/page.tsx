'use client'
import Markdown from "react-markdown";
import { useEffect, useState } from "react";
export default function Editor() {
 const [content,setContent] = useState(``);
 const [savedContent, setSavedContent] = useState(``);
 const [tutor,setTutor] = useState(false);
 
 useEffect( () => {
  const saved = localStorage.getItem('save');
  if(saved) {
    const parsed = JSON.parse(saved);
    
    const now = Date.now();
    const expire = (24 * 60 * 60 * 1000);
    console.log(parsed);
    console.log(now);
    console.log(expire);
    if(now - parsed.saveAt < expire) {
      setContent(parsed.content);
      setSavedContent(parsed.content);
    }else {
      localStorage.removeItem('save')
    }
  }
 },[]);
 
 function handleChange(event: React.ChangeEvent<HTMLTextAreaElement>) {
  setContent(event.currentTarget.value);
  if(tutor = true) {
     const firstLetter = content.slice(0,1);
  if(firstLetter == "#") {
    alert("O # no Markdown serve para criar titulos");
  }
  }
 }
 function handleClick() {
  localStorage.setItem('save',JSON.stringify({content:content,saveAt: Date.now()}));
  setSavedContent(content);
  alert('Este editor foi salvo por 24hrs')
 }
 function handleTutor() {
  setTutor(true);
 }


  return (
    <>
    

    <h1>Voce está editando</h1> 
    {content !== savedContent && <span>*</span>} 
    <textarea value={content} onChange={handleChange}></textarea>
    <Markdown>{content}</Markdown>
    <button onClick={handleClick}>salvar</button>
    <button onClick={handleTutor}>Ativar modo tutor</button>
    <p>tutor está:  {tutor}</p>
    </>
  )
}