---
tags: [aula, banco-de-dados, sql]
disciplina: "Banco de Dados"
tipo: aula
---

# SELECT

```
SELECT *FROM PROFESSOR
````

## Pegando apenas colunas desejadas

````
SELECT NOME,NASCIMENTO FROM PROFESSOR; // Somente o nome e nascimento
````

# Pegando colunas e mostrando mensagens

````
SELECT NOME ||' Faz aniversário no mês de ' || TO_CHAR(NASCIMENTO,'MONTH')
|| 'E no dia ' || TO_CHAR(NASCIMENTO,'DD')
|| 'E no ano' || TO_CHAR(NASCIMENTO,'YYYY')
FROM PROFESSOR;

````

Vendo quantos dias de vida a pessoa tem por calculo no select

````
SELECT NOME,ROUND((SYSDATE-NASCIMENTO),0)/365 FROM PROFESSOR; // Quantos dias de vida tem
````

# Ordenando o select

```
SELECT NOME,NASCIMENTO
FROM PROFESSOR
ORDER BY NASCIMENTO; // Ordem da mais velha para a mais nova

````

## Agrupando e calculando
````
SELECT DEPTO,CARGO,
COUNT(NOME) QTDE,
SUM(SALARIO) SOMA, 
MAX(SALARIO) MAIOR, 
MIN(SALARIO) MENOR,
ROUND(AVG(SALARIO),2) MEDIA
FROM PROFESSOR
GROUP BY DEPTO,CARGO
ORDER BY DEPTO,CARGO;
`````

# Usando where
````
SELECT NOME,SALARIO
FROM PROFESSOR
WHERE NOME LIKE '%F'; // Mostrando todas as linhas que terminam com F

````

## Usando Where com Exists
````
SELECT CODIGO,DESCRICAO
FROM CARGO
WHERE EXISTS
(SELECT NOME FROM PROFESSOR WHERE CARGO=CARGO.CODIGO); // Algum professor em algum cargo

````

## Decode usando o código de cargo para editar o salario

```
DECODE(CARGO,1,SALARIO*1.10,
2,SALARIO*1.15,
3,SALARIO*1.20,
4,SALARIO*1.40) SIMULADO
FROM PROFESSOR
ORDER BY CARGO; // Aplicando aumento por código de cargo


````


