def quick_sort(lista):
    if(len(lista) <= 1):
        return lista
    pivo = lista[0]
    resto = lista[1:]
    menor = []
    maior = []
    for x in resto:
        if x < pivo:
            menor.append(x)
        else:
            maior.append(x)
    return quick_sort(menor) + [pivo] + quick_sort(maior)

print(quick_sort([5, 3, 4, 1, 2, 2]))

    