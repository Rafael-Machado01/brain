'use client'
import styled from 'styled-components'
export default function Styled(){
    const MyStyledButton = styled.button`
    background-color: #4ac;
        color: white;
        border: none;
        padding: 15px 32px;
    text-decoration: none;
        
    `
    return(
        <MyStyledButton>Styled Components</MyStyledButton>
    )
}