def quicksort(v, inicio=0, fim=None):
    if fim is None:
        fim = len(v) - 1

    if inicio < fim:
        p = partition(v, inicio, fim)
        quicksort(v, inicio, p - 1)   
        quicksort(v, p + 1, fim)
        
def partition(v, inicio, fim): 
    pivot = v[inicio] 
    i = inicio + 1             
    j = fim

    while True: 
        while i <= j and v[i] <= pivot: 
            i += 1
        while i <= j and v[j] > pivot:
            j -= 1
        if i > j:
            break
        v[i], v[j] = v[j], v[i]

    v[inicio], v[j] = v[j], v[inicio]  
    return j

# 9,7,1,9,6,3,4,8,2,5
