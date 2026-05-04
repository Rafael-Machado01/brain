'use client'
import Markdown from "react-markdown";
import { useEffect, useState } from "react";
export default function Editor() {
 const [content,setContent] = useState(``);
 const [savedContent, setSavedContent] = useState(``);
 
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
  const saved = localStorage.getItem('save');
 useEffect( () => {
  const contentSave = JSON.parse(saved);
 const autosave =  setInterval( () => {
     if(content !== contentSave.content) {
   localStorage.setItem('save',JSON.stringify({content:content,saveAt: Date.now()}));
  setSavedContent(content);
  alert('Este editor foi salvo por 24hrs')
  }
 },60000);
   clearInterval(autosave)
 })
 
 function handleChange(event: React.ChangeEvent<HTMLTextAreaElement>) {
  setContent(event.currentTarget.value);
  }
  return (
    <>
    <h1>Voce está editando</h1> 
    {content !== savedContent && <span>*</span>} 
    <textarea value={content} onChange={handleChange}></textarea>
    <Markdown>{content}</Markdown>
    </>
  )
}