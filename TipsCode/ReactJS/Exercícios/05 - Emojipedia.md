O app está sendo renderizado em puro html e temos um array, já sabe oq fazer.

Novamente temos 4 compoentes App Title Cotent Emojipedia

```
App 
import React from "react";
import Title from "./Title";
import Content from './Content';
import emojipedia from '../emojipedia'
function App() {
return (
<div>
<Title/>
{emojipedia.map( (item, index) => {
return <div key={index}>
<Content
emoji={item.emoji}
name={item.name}
description={item.meaning}/>
</div>
} )}
</div>
);
}
export default App;
````

```
Title 
function Title() {
return (
<h1>
<span>emojipedia</span>
</h1>
)}
export default Title;
````

```
Content
function Content(props) {
return (
<dl className="dictionary">
<div className="term">
<dt>
<span className="emoji" role="img" aria-label="Tense Biceps">
{props.emoji}
</span>
<span>{props.name}</span>
</dt>
<dd>
{props.description}
</dd>
</div>
</dl>
)}
export default Content;
````

```
Emojipedia
const emojipedia = [
{
id: 1,
emoji: "💪",
name: "Tense Biceps",
meaning:
"“You can do that!” or “I feel strong!” Arm with tense biceps. Also used in connection with doing sports, e.g. at the gym."
},
{
id: 2,
emoji: "🙏",
name: "Person With Folded Hands",
meaning:
"Two hands pressed together. Is currently very introverted, saying a prayer, or hoping for enlightenment. Is also used as a “high five” or to say thank you."
},
{
id: 3,
emoji: "🤣",
name: "Rolling On The Floor, Laughing",
meaning:
"This is funny! A smiley face, rolling on the floor, laughing. The face is laughing boundlessly. The emoji version of “rofl“. Stands for „rolling on the floor, laughing“."
}];
export default emojipedia;
````

Se não entendeu é burro

[[Props]]
[[04 - Praticando props]]
