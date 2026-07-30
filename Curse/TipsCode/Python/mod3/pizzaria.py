print("Bem vindo a pizzaria TipsCode")

tam = input("Qual será o tamanho da pizza? Pequena (P), Média (M), Grande (G) ?")
ifPep = input("Voce quer Pepperoni? Sim (s) ou Não (n) ?" )
ifChesse = input("Voce quer extra de queijo? Sim (s) ou Não (n)")

conta = 0;

if tam == "p":
    conta = 15
elif tam == "m":
    conta = 20
else:
    conta = 25
if ifPep == 's' and tam == 'p':
        conta += 2
if ifPep == 's' and tam == 'm' or tam == 'g':
        conta += 3
if ifChesse == 's':
    conta += 1;

print(f"A pizza custou: {conta}")

