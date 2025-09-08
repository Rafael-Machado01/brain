import random
papel = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''
tesoura = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
pedra = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___
'''
arts = [pedra,papel,tesoura]
userChoice = int(input('Qual opção você deseja? (0) Pedra (1)Papel (2)Tesoura'))
iaChoice = random.randint(0,2)

print('Você escolheu ' + arts[userChoice])
print('A IA escolheu ' + arts[iaChoice])

if userChoice == 0 and iaChoice == 2 or userChoice == 1 and iaChoice == 0 or userChoice == 2 and iaChoice == 1:
   result = 'Você ganhou!'
elif userChoice == iaChoice:
   result = 'Empatou!'
else:
   result = 'Você perdeu'

print(result)
