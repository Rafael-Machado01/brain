import os
def quick_sort(lista):
    print("Lista informada para ordenação:", lista)
    if(len(lista) <= 1):
        return lista

    pivo = lista[0]
    print("Pivo definido. Primeiro item da lista informada: ", pivo)
    input("Pressione Enter para continuar...")
    resto = lista[1:]
    print("Lista restante sem o pivo:", resto)
    input("Pressione Enter para continuar...")
    menor = []
    maior = []

    for x in resto:
        if x < pivo:
            print("Adicionando ", x, " à lista de elementos menores que o pivo.")
            menor.append(x)
            print("Lista de elementos menores que o pivo:", menor)
            input("Pressione Enter para continuar...")
            os.system('clear')
        else:
            print("Adicionando ", x, " à lista de elementos maiores que o pivo.")
            maior.append(x)
            print("Lista de elementos maiores que o pivo:", maior)
            input("Pressione Enter para continuar...")
            os.system('clear')
    print("Lista menor:", menor, "Pivo:", pivo, "Lista maior:", maior)
    return quick_sort(menor) + [pivo] + quick_sort(maior)

data = [3,4,5,6,4,2,1,0]
quick_sort(data)
    