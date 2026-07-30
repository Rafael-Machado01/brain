export default function Input(props) {
   return(
      <>
      <div className="flex flex-col m-2">
 <label className="p-2 mb-2">{props.title}</label>
         <input className="bg-gray-50 shadow p-2 w-full rounded-br-lg "placeholder={props.placeholder}/>
      </div>
     
      </>
)}