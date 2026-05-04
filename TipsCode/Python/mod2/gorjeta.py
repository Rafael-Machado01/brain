# Calculadora de contas com gorjetas
# Opções 10% 12% ou 15%

conta = float(input("Qual o valor da conta"))

porcent = float(input("Qual a porcentagem de gorjeta voce gostaria de dar? -  10% 12% ou 15% "))

pessoas = int(input("Quantas pessoas vão pagar a conta?"))

result = ((porcent / 100) * conta + conta) / pessoas
print(f'Cada pessoa vai pagar{result}')