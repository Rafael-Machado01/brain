import GlobalStyle from "./style" ;
import styled from 'style-components';

const Container = styled.div`
  width: 100%;
  max-width: 800px;
  margin-top: 20px;
  display: flex;
  align-items: center;
  gap: 10px;

`
function App() {
  return (
  <>
  <Container>
    Cadrastro de Produtos
  </Container>
  <GlobalStyle/>
  </>
  );
}

export default App;
