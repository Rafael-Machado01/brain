peso = int(input("Qual o seu peso?"))
altura = float(input("Qual a sua altura?"))
imc = round(peso / (altura * altura))

if imc <= 18.5:
   print('Abaixo do peso')
elif imc >= 18.5 & imc <= 25:
   print('Peso Normal')
else:
   print('Acima do peso')
