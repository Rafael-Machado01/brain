print('Bem vindo a TipsPizzaria')
tam = input('Qual tamanho da Pizza você deseja? Pequena(p) Media (m) Grande(g)')
pepe = input('Você deseja o adicional de Peperoni?s/n')
queijo = input('Voce Deseja o adicional de Queijo?s/n')
amount = 0

if tam == 'p':
   amount = 15
elif tam == 'm':
   amount = 20
elif tam == 'g':
   amount = 25
if pepe == 's' and tam == 'm' or tam == 'g':
   amount +=3
elif pepe == 's':
   amount += 2
if queijo == 's':
   amount += 1;
   print('A pizza vai custar ', amount)
else:
   print('A pizza vai custar', amount)
