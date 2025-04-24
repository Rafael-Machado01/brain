# Create

```

CREATE TABLE PRODUTOS(
  ID INT NOT NULL,
  NOME STRING,
  PRECO FLOAT
  PRIMARY KEY (ID)
  );

```
Not Null é um atributo para que o dado seja registrado ele não pode ser nulo. Algo igual os input required no HTML.

Ao criar precisamos definir a PrimaryKey, igual estamos vendo na facul.

# Select
```
SELECT * FROM PRODUTOS
```
Ver todas as colunas da tabela PRODUTOS.
Apenas para visualizar tabelas de dados.

# Where
```
SELECT * FROM PRODUTOS
WHERE PRECO=2000
````
Where é um filtro para o select, como acima ele vai mostrar só os produtos que tenha 2000K

# Insert

```
INSERT INTO PRODUTOS
VALUES (1, 'Celular', 2000)
```
Strings são declarados em aspas simples.

# Update

```
UPDATE PRODUTOS
SET PRECO = 5.0
WHERE ID=2
````
Use Where para espesifico.

# Alter

````
ALTER TABLE PRODUTOS 
ADD ESTOQUE INT 
````
Adicionar uma coluna na tabela.

# Delete

````
DELETE FROM PRODUTOS
WHERE ID=2;
````
Deleta com condição where.

# Drop

````
DROP TABLE PRODUTOS
````
Deleta a tabela 
