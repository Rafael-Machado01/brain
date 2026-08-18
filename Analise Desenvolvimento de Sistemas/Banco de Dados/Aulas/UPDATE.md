---
tags: [aula, banco-de-dados, sql]
disciplina: "Banco de Dados"
tipo: aula
---

# UPDATE

Comando [[SQL DML]] para fazer atualizações nas linhas.

````
UPDATE tabela
SET coluna = valor [coluna = valor]
WHERE CONDIÇÃO
`````


- Tabela é o nome da tabela que vamos editar
- Coluna é o nome da coluna que vamos editar
- Valor é o valor que vamos escrever.
- Condição seria o nosso filtro.
*Podemos utilizar o case para fazer updates condicionais.

```
Exemplo padrão
UPDATE PROFESSOR 
SET SALARIO=10000;
WHERE CODIGO=33
Atualizando o salário do professor do código 33 para 10000
````

```
Exemplo sem condição
UPDATE PROFESSOR 
SET SALARIO= SALARIO *1.055
Aqui todos as linhas de salario da tabela Professor receberam 5.5% de aumento.
````

````
Exemplo com condição e operação
UPDATE PROFESSOR 
SET SALARIO = SALARIO *0.03
WHERE CARGO=4 AND DEPTO=1;
Aqui apenas linhas do cargo 4 e departamento 1 ganharam um aumento de 3%
````

```
Exemplo com Case
UPDATE PROFESSOR 
SET SALARIO = 
CASE 
    WHEN salario <=1600 THEN salario *1.30
    WHEN salario > 1600 AND salario <=2000 THEN salario*1.20
ElSE salario *1.10
END;
````





