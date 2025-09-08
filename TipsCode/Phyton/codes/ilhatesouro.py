print('Bem vindo ao jogo Ilha do Tesouro')
direction = input('Escolha ir para a Direita(d) ou Esquerda(e)')
if direction == 'e':
   step = input('Escolha Andar(a) ou Nadar(n)');
   if step == 'a':
      door = input('Escolha a porta Vermelha(v) Amarela(a) Verde(v)')
      if door == 'a':print('Vitoria')
      else:print('Game Over')
   else:print('Game Over')
else:print('Game Over')
