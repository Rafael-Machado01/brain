export default function Item(props) {
  
   return (
      <div className="p-4 text-base grid grid-cols-5 text-center  shadow m-2">
         <p>{props.name}</p>
         <p>{props.price}</p>
         <p>{props.storage}</p>
      </div>
      )}
