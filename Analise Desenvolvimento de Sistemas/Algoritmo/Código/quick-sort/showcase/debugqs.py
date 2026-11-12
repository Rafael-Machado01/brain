def partition(v, inicio, fim): 
    pivot = v[inicio] # Defimos o pivo sendo o primeiro elemento
    i = inicio + 1              # O ponteiro i começa no index 1 segundo elemento
    j = fim # J começa no ultimo index.

    while True: 
        while i <= j and v[i] <= pivot: # Enquanto o i for menor ou igual a j 
                                        # E o elemento de i for menor ou igual a pivo
            i += 1 # O ponteiro i avança index
        while i <= j and v[j] > pivot: # Enquanto o elemento de j for maior que pivo
            j -= 1  # O ponteiro j volta um index
        if i > j: # Se o i for maior que o J a função para.
            break
        v[i], v[j] = v[j], v[i] # Após isso fazemos a troca do elemento i com o elemento que esta no j

    v[inicio], v[j] = v[j], v[inicio]   # Sendo assim o trocamos o lugar de que o j parou pelo pivo
    return j # Retorna o index do pivo

def quicksort(v, inicio=0, fim=None):
    if fim is None: # Se não passarmos o valor de fim, ele é a qtde de index da lista
        fim = len(v) - 1

    if inicio < fim:
        p = partition(v, inicio, fim)
        quicksort(v, inicio, p - 1)     # Sendo já feito a primeira passagem chamos a função novamente e 
                                        # Agora pedimos para ela ordernar os elementos que estão a esquerda do pivo
        quicksort(v, p + 1, fim) #  Direita do pivo

