'use client'
import {usePathname} from "next/navigation";

export default function Navbar() {
    const pathname = usePathname()
    return (
        <nav>
            <ul>
                <li className={`link ${pathname === "/" ? 'active' : ''}`}>Home</li>
                <li className={`link ${pathname === "/sobre" ? 'active' : ''}`}>Home</li>
            </ul>
        </nav>
    )
}