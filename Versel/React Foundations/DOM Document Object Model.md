Quando um usuário visita uma pagina, o servidor retorna o arquivo HTML para o navegador.
![[Pasted image 20250720182044.png]]
O navegador então lê o HTML e constrói o Document Object Model (DOM).

É a representação de objetos dos elementos HTML. Ele atua como uma ponte entre o código e o [[UI]]. Ele possui uma estrutura de árvore com relacionamentos entre pais e filhos.

![[Pasted image 20250720182635.png]]
Você pode usar métodos DOM e Javascript, para ouvir eventos do usuários e manipular o DOM, Selecionando, adicionando, atualizando e excluindo elementos específicos do [[UI]].

Olhe o [Código de exemplo de atualizar a pagina com o DOM](DOMupdate.html)

![[Pasted image 20250721202938.png]]

Atualizar o DOM com JavaScript é muito poderoso porém verboso.

Escrevemos tudo isso para adicionar um H1 com algum texto.

````
<script type="text/javascript">
  const app = document.getElementById('app');
  const header = document.createElement('h1');
  const text = 'Develop. Preview. Ship.';
  const headerContent = document.createTextNode(text);
  header.appendChild(headerContent);
  app.appendChild(header);
</script>
`````
