Usamos quando precisamos estilizar condicionalmente um elemento.

Suponha que quero criar um [[Components]] de status. O status pode ser pendente ou ativo. No nosso exemplo pendente é verde e ativo é verde.

Vamos usar esta função
````
import clsx from 'clsx';
 
export default function InvoiceStatus({ status }: { status: string }) {
  return (
    <span
      className={clsx(
        'inline-flex items-center rounded-full px-2 py-1 text-sm',
        {
          'bg-gray-100 text-gray-500': status === 'pending',
          'bg-green-500 text-white': status === 'paid',
        },
      )}
    >
    // ...
)}
`````
