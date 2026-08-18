---
tags: [aula, banco-de-dados, sql]
disciplina: "Banco de Dados"
tipo: aula
---

# INSERT

Comando [[SQL DML]] usado para incluir linhas

````
INSERT INTO tabela [coluna]
VALUES (valor)
````

- Tabela é o nome da tabela que vamos editar
- Coluna é o nome da coluna que vamos editar
- Valor é o valor que vamos colocar na linha da coluna.
*Podemos usar null para dados que ainda não sabemos.

Exemplos:

````
Exemplo padrão
INSERT INTO PROFESSOR (CODIGO,NOME,NASCIMENTO,SALARIO,CARGO,DEPTO)
VALUES (30,'Rafael Machado','18/04/2007',3000,3,2);
Declarando nome de colunas.
````


``` 
Exemplo sem colunas
INSERT INTO PROFESSOR
VALUES (18,'Ana Julia','12/10/2006',5000,1,1);
Isso deve ser usado quando já se sabe a ordem das colunas.
````

```
Exemplo null
INSERT INTO PROFESSOR
VALUES (31,'Ana Julia',null,5000,1,1);
Dados como Primary Key e Foreing Key não podem ser null.
````

# Resultado

![[Pasted image 20250804200504.png]]
