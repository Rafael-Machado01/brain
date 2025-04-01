Faça um array com objetos que tenha o conteúdo de varias notas e que sejam renderizado com o map

```
{data.map((note,index) => {
return 
<Note key={index} 
title={note.title} content={note.content} 
/>
})}
````
![[Pasted image 20250115074703.png]]
