import { ComponentProps } from "react";

interface LabelProps extends ComponentProps<"label"> {
  text: string;
}
export default function Label({ text, ...props }: LabelProps) {
  return (
    <label className="block text-xs font-bold mb-1.5" {...props}>
      {text}
    </label>
  );
}
