# IMC
# Calculo peso / altura²

peso = input("Qual o seu peso?")
altura = input("Qual a sua altura?")

new_altura = float(altura)
imc = float(peso) / new_altura ** 2
print(imc)