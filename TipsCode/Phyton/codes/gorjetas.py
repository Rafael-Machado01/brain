print('Seja bem vindo a calculadora de Gorjetas')
valor = float(input('Qual o valor total da conta?'))
por = float(input('Digite a porcentagem que você quer dar de gorjeta'))
pessoas = int(input('Quantas pessoas vão pagar a conta?'))
gorjeta = valor * (por / 100)
result = (valor + gorjeta) / pessoas
print('Cada pessoa deve pagar ', result)
   