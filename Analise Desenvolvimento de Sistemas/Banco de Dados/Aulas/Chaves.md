# Primary Key
É o identificador de cada linha da tabela, ela não pode ser repetida e não pode ser vazia.
```
id int PRIMARY KEY;
````

# Foreign Key
É a chave estrangeira usada para ligar uma tabela a outra para criar [[Relacionamentos]]
Ela aponta a chave primaria de outra tabela.

````
FOREIGN KEY (cliente_id) REFERENCES Clientes(id)
````

