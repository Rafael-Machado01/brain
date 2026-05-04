print("Bem vindo ao tipsPark!")

height = float(input("Qual é a sua altura: "))


if height >= 1.20:
    age = int(input("Qual é a sua idade:"))
    if age >= 18:
        print("O ingresso custa R$24")
    elif age > 12 and age <= 18:
        print("O ingresso custa R$12")
    else:
        print("O ingresso custa R$5")
    photo = input("Deseja tirar foto? (s) (n)")
    if photo == 's':
        print("Adicionado +R$3 por foto!")
else:
    print("Entrada não permitida")
