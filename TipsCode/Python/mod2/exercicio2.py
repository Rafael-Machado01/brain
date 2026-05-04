# Calcular em média quantas semanas de vida lhe resta aqui na terra.
#Exemplo alguem de 15 anos, e vai viver até os 90.
# Quantas semanas de vida restam?

idade = int(input('Qual a sua idade?'))

restante = (90 * 52) - (idade * 52)
print(f'Le resta  {restante}, semanas de vida. Vivendo até os 90')
