# Realizar uma pesquisa e escrever sobre: 
- Árvores Binárias: conceitos. 
São estruturas organizada de forma hierárquica, onde cada elemento é chamado de nó.
- Raiz: Esta sempre no topo e é o primeiro elemento a ser inserido.
- Filhos: são os nós conecatods diretamente a raiz, ou a outros nós.
- Subaŕvores: Cada filho pode ser a raiz de uma nova árvore dentro da principal
- Nós Internos: São nós que possuem pelo menos um fiho
- Folhas: São nós que não possuem filhos.
Os nós são organizados de forma que o valor maior que Raiz vai para a direita, e menores que a raiz para Esquerda.
- Nivel:
- Nó raiz **Nivel 0**
- Nós internos **Nivel 1**
- Folhas **Nivel 2**
- 

## Árvores Binárias: algoritmos de: 
- percurso 
- busca 
- inclusão de novos nós 
- exclusão de nós 

```py
class Node:
  def __init__(self,valor):
    self.valor = valor
    self.esquerda = None
    self.direita = None

class Arvore:
  def __init__(self):
    self.raiz = None
                          # exemplo insirir um 9
  def inserir(self,dado): #   8
    novo = Node(dado)     # 4     10
                          #      9

    if self.raiz == None: # Se não tiver raiz, o primeiro dado que inserimos se torna a raiz. passo 1
      self.raiz = novo
      return
    atual = self.raiz
    while True:
      if dado < atual.valor:        # 9 < atual que por enquanto é 8 não. passo 2
        if atual.esquerda is None:   # agora o atual é dez, 9 < 10 é então ele fica a esquerda de dez. elemento inserido. passo 5.
          atual.esquerda = novo
          return
        atual = atual.esquerda
      else:                        # então vem para o else, if a direita esta vazia? não tem o 10 . passo 3
          if atual.direita is None: # então o 10 vira o atual. passo 4
            atual.direita = novo
            return
          atual = atual.direita

  def remover(self,valor):
    pai = None
    atual = self.raiz
    while atual and atual.valor != valor: # Aqui ele busca o valor
      pai = atual
      if valor < atual.valor: # se o valor e menor que atual
        atual = atual.esquerda ## atual vai pra esquerda e recomeça
      else:
        atual = atual.direita ## se não vai para a direita e recomeça
    if not atual: ## se não achar não existe.
      print("Elemento não encontrado")
      return
    if atual.esquerda and atual.direita:
      pai_suc = atual
      suc = atual.direita
      while suc.esquerda:
        pai_suc = suc
        suc = suc.esquerda
      atual.valor = suc.valor
      pai = pai_suc
      atual = suc
      # Caso 2: 1 filho
      filho = atual.esquerda or atual.direita
      if pai is None:
        self.raiz = filho
      elif pai.esquerda == atual:
        pai.esquerda = filho
      else:
        pai.direita = filho
      return True

  def buscar(self,valor):
    atual = self.raiz
    while atual:
      if valor == atual.valor:
        print("Valor encontrado", valor)
        return True
      if valor < atual.valor:
         atual = atual.esquerda
      else:
        atual = atual.direita
    print("Valor não encontrado")

  def altura(self,no):
    if no is None:
      return 0
    alt_esquerda = self.altura(no.esquerda)
    alt_direita = self.altura(no.direita)
    return max(alt_esquerda, alt_direita)

  def pre_ordem(self,no): # Mostra o no, percorre a esquerda, e percorre a direita
    if no is not None:
      print(no.valor)
      self.pre_ordem(no.esquerda)
      self.pre_ordem(no.direita)

  def em_ordem(self,no): # Em ordem percorre a esquerda, mostra o no e percorre a direita
    if no is not None:
      self.em_ordem(no.esquerda)
      print(no.valor)
      self.em_ordem(no.direita)

def main():
  opcao = 0
  arv = Arvore()

  while opcao != 9:
    print("1 - Inserir elemento")
    print("2 - Excluir elemento")
    print("3 - Buscar elemento")
    print("4 - Altura da árvore")
    print("5 - Pré ordem")
    print("6 - Em ordem")
    print("7 - ")
    print("9 - Sair")
    opcao = int(input("Opcao:"))

    if opcao == 1:
      dado = int(input("Digite o valor para inserir:"))
      arv.inserir(dado)
    elif opcao == 2:
      dado = int(input("Digite o valor para remover:"))
      arv.remover(dado)
    elif opcao == 3:
      dado = int(input("Digite o valor para buscar:"))
      arv.buscar(dado)
    elif opcao == 4:
      print("Altura",arv.altura(arv.raiz))
    elif opcao == 5:
      arv.pre_ordem(arv.raiz)
    elif opcao == 6:
      arv.em_ordem(arv.raiz)

main()

```

- ### Arquivos Indexados: conceitos 
É constituido pela área de índices e pela área de dados.
o acesso aos registro é sempre feito atraves do índices.
- #### Arquivos Indexados: 
- Algoritmos de: 
- busca de registros (busca binaria inicio fim meio.)
- inclusão de novos registros
-  exclusão lógica de registros. 
```py
class Veiculo:
  def __init__(self,codigo,modelo):
    self.codigo = codigo
    self.modelo = modelo


dados = []
indice = []


def inserir(codigo,modelo):
  posicao = len(dados) # Posição é gerada pelo tamanho do array dados
  veiculo = Veiculo(codigo,modelo) # Cadastro o veiculo
  dados.append(veiculo) # Coloco o veiculo no array
  indice.append((codigo,posicao))
  indice.sort() # organiza o index, pela ordem crescente


def buscar(codigo):
  inicio = 0
  fim = len(indice) - 1 # pega o tamanho do array de indice

  while inicio <= fim:
    meio = (inicio + fim) // 2

    if indice[meio][0] == codigo:
      posicao = indice[meio][1]
      return dados[posicao]

    elif indice[meio][0] < codigo:
      inicio = meio + 1

    else:
      fim = meio - 1

  return None


def remover(codigo):
  for i in range(len(indice)):
    if indice[i][0] == codigo:
      posicao = indice[i][1]

      dados[posicao] = None
      indice.pop(i)

      print("Veiculo removido")
      return

  print("Veiculo não encontrado")


def main():
    inserir(101, "Gol")
    inserir(205, "Onix")
    inserir(150, "Corolla")

    print("Índice:")
    print(indice)

    veiculo = buscar(150)

    if veiculo:
        print(veiculo.codigo, veiculo.modelo)
    else:
        print("Veículo não encontrado")

    remover(150)

    print("Índice depois da remoção:")
    print(indice)


main()
```
