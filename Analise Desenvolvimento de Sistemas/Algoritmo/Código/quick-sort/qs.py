def quick(lista,inicio = 0,fim = None):
    if fim is None: 
        fim = len(lista) - 1 
                        
    if inicio < fim: 
        pivo = partition(lista,inicio,fim)
        quick(lista,inicio, pivo - 1) 
        quick(lista, pivo + 1, fim) 

def partition(lista, inicio, fim):
    pivo = lista[inicio] 
    i = inicio + 1 

    for j in range(inicio + 1, fim + 1): 
        if lista[j] <= pivo: 
            lista[j], lista[i] = lista[i], lista[j] 
            i += 1 

    lista[inicio], lista[i - 1] = lista[i - 1], lista[inicio] 
    return i - 1