def pausar():
    input("   [ENTER para continuar]")


def mostrar(arr, left, i=None, j=None, esp=""):
    """Desenha o array com marcadores: P = pivô, i = fronteira, j = elemento sendo analisado."""
    indices = "  ".join(f"{k:>3}" for k in range(len(arr)))
    valores = "  ".join(f"{v:>3}" for v in arr)
    marcas = []
    for k in range(len(arr)):
        m = ""
        if k == left:
            m += "P"
        if k == i:
            m += "i"
        if k == j:
            m += "j"
        marcas.append(f"{m:>3}")
    print(f"{esp}   indice: {indices}")
    print(f"{esp}   valor:  {valores}")
    print(f"{esp}   marca:  {'  '.join(marcas)}")


def quick(arr, left, right, nivel=0):
    esp = "    " * nivel
    print(f"\n{esp}{'=' * 55}")
    print(f"{esp}CHAMADA quick(left={left}, right={right})")

    if left < right:
        print(f"{esp}Trecho a ordenar: {arr[left:right + 1]}")
        print(f"{esp}left < right, então tem 2 ou mais elementos: precisa ordenar.")
        pausar()

        pivot = partition(arr, left, right, nivel)

        print(f"\n{esp}RESULTADO DA PARTIÇÃO:")
        print(f"{esp}  O pivô {arr[pivot]} está na posição {pivot}, que é a posição FINAL dele.")
        print(f"{esp}  Esquerda (menores ou iguais): {arr[left:pivot]}")
        print(f"{esp}  Direita (maiores):            {arr[pivot + 1:right + 1]}")
        print(f"{esp}  Lista completa agora: {arr}")
        pausar()

        print(f"\n{esp}Agora ordena o lado ESQUERDO: quick(left={left}, right={pivot - 1})")
        quick(arr, left, pivot - 1, nivel + 1)

        print(f"\n{esp}Agora ordena o lado DIREITO: quick(left={pivot + 1}, right={right})")
        quick(arr, pivot + 1, right, nivel + 1)
    else:
        print(f"{esp}CASO BASE: left={left} não é menor que right={right}.")
        print(f"{esp}O trecho tem 0 ou 1 elemento, já está ordenado. Volta da recursão.")
        pausar()


def partition(arr, left, right, nivel=0):
    esp = "    " * nivel
    pivot = arr[left]

    print(f"\n{esp}--- PARTITION ---")
    print(f"{esp}Pivô = primeiro elemento do trecho = {pivot} (posição {left})")
    print(f"{esp}i começa em {left} (mesma posição do pivô, ainda não há menores)")
    print(f"{esp}j vai percorrer da posição {left + 1} até {right}")
    i = left
    mostrar(arr, left, i, None, esp)
    pausar()

    for j in range(left + 1, right + 1):
        print(f"\n{esp}j={j}: comparando arr[{j}]={arr[j]} com o pivô {pivot}")
        mostrar(arr, left, i, j, esp)

        if arr[j] <= pivot:
            print(f"{esp}   {arr[j]} <= {pivot}: é menor ou igual, entra no bloco dos menores.")
            i += 1
            print(f"{esp}   i avança para {i}")
            print(f"{esp}   troca arr[{i}]={arr[i]} com arr[{j}]={arr[j]}")
            arr[i], arr[j] = arr[j], arr[i]
            mostrar(arr, left, i, j, esp)
        else:
            print(f"{esp}   {arr[j]} > {pivot}: é maior, fica onde está (i não muda).")
        pausar()

    print(f"\n{esp}Fim do laço. Todos os elementos foram comparados.")
    print(f"{esp}Troca final: pivô (posição {left}) com arr[{i}]={arr[i]}")
    arr[left], arr[i] = arr[i], arr[left]
    mostrar(arr, i, None, None, esp)
    print(f"{esp}Retorna i={i}: a posição definitiva do pivô.")
    return i


# ---------- Programa principal ----------
entrada = input("Digite números separados por espaço (ENTER usa o exemplo 5 2 9 1 7): ")
if entrada.strip():
    lista = [int(x) for x in entrada.split()]
else:
    lista = [5, 2, 9, 1, 7]

print(f"\nLista inicial: {lista}")
pausar()

quick(lista, 0, len(lista) - 1)

print(f"\n{'=' * 55}")
print(f"LISTA FINAL ORDENADA: {lista}")