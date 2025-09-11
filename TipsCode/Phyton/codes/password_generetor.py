import random
letters = ['A','B','C','D','E','F','G','H','I','J',
           'K','L','M','N','O','P','Q','R','S','T',
           'U','V','W','X','Y','Z']

numbers = ['0','1','2','3','4','5','6','7','8','9']

symbols = ['!','#','$','%','&','(',')','*','+']

num_letters = input('Quantas Letras você deseja?')
num_numbers = input('Quantos numeros você deseja?')
num_symbols = input('Quantos simbolos você deseja?')
password = 0
for char in range(0,num_letters):
    password = random.choice(letters)
for number in range(0,num_numbers):
    password = random.choice(numbers)
for symbo in range(0,num_symbols):
    password += random.choice(symbols)
print(password)