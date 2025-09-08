print('Bem vindo ao parque')
altura = float(input('Qual a sua Altura?'))
ingresso = 0;
if altura >= 1.20 : 
   idade = int(input('Qual a sua idade?'))
   if idade >= 12:
      ingresso = 24
   elif idade > 18:
         ingresso = 18;
   elif idade >=45 and idade <= 55:
       ingresso = 0;
   else :
      ingresso = 12
   photo = input('Deseja tirar foto? Se sim (s) Se não (n)')
   if photo == 's':
      ingresso += 3
      print('O ingresso vai custar ', ingresso )
   else: 
       print('O ingresso vai custar ', ingresso)
else: 
   print('Não possui altura suficiente para entrar.')