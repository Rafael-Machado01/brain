---
tags: [aula, banco-de-dados, modelagem]
disciplina: "Banco de Dados"
tipo: aula
---

# 1:1 - Um para Um
Por exemplo um único CPF para cada pessoa.
```
Tabela pessoa    Tabela Documentos
Nome             Rg
Idade            Cpf
Sexo             CNH
````

Agora para ligarmos o CPF na tabela pessoa usamos

```
FOREIGN KEY (pessoa_id) REFERENCES Pessoa(Id);
````

Por exemplo nas aulas do Alex usamos muito Cidade recebe o id do UF que era algo único. Ou 1:1 Para uma cidade vai existir apenas uma UF.

# 1:N - Um para muitos
Por exemplo Uma pessoa pode fazer muitos pedidos.
````
Tabela Pessoa    Tabela Pedidos
Nome ID         Numero do pedido
Idade            Cliente ID
Sexo
````

```
FOREIGN KEY (pessoa_id) REFERENCES Cliente(ID)
````

