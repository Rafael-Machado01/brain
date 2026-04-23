'use client'
import Markdown from "react-markdown";
import { useEffect, useState } from "react";
export default function Editor() {
 const [content,setContent] = useState(``);
 
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
    }else {
      localStorage.removeItem('save')
    }
  }
 },[]);
 
 function handleChange(event: React.ChangeEvent<HTMLTextAreaElement>) {
  setContent(event.currentTarget.value);
 }
 function handleClick() {
  localStorage.setItem('save',JSON.stringify({content:content,saveAt: Date.now()}));
 }


  return (
    <>
    

    <h1>Voce está editando</h1>
    <textarea value={content} onChange={handleChange}></textarea>
    <Markdown>{content}</Markdown>
    <button onClick={handleClick}>salvar</button>
    </>
  )
}