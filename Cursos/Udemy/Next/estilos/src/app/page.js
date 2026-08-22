import styles from './page.module.css'
import Tail from "@/app/components/Tail";
import Sass from "@/app/components/Sass"
import Scss from "@/app/components/Sccs";
import Styled from "@/app/components/Styled";
export default function Home() {
  return(
      <main className="flex-row gap-3 m-2">
        <div className={styles.heading}>
          <h1>Hello World!</h1>
        </div>
        <Tail/>
        <Sass/>
          <Scss/>
          <Styled/>
      </main>

  )
}