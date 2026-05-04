weight = float(input("Qual é o seu peso?"))
height = float(input("Qual é a sua altura?"))

imc = weight / (height ** 2)

if imc < 18.5:
    print('Abaixo do peso!')
elif imc > 18.5 and imc < 25:
    print("Peso ideal!")
else:
    print("Acima do peso!")