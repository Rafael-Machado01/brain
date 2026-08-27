class Veiculo:
    def __init__(self, codigo, modelo):
        self.codigo = codigo
        self.modelo = modelo


dados = []
indice = []


def inserir(codigo, modelo):
    posicao = len(dados)

    veiculo = Veiculo(codigo, modelo)

    dados.append(veiculo)

    indice.append((codigo, posicao))
    indice.sort()


def buscar(codigo):
    inicio = 0
    fim = len(indice) - 1

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
