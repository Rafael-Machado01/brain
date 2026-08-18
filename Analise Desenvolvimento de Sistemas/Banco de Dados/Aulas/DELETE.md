---
tags: [aula, banco-de-dados, sql]
disciplina: "Banco de Dados"
tipo: aula
---

# DELETE

Comando [[SQL DML]] para fazer remoções de linhas.

````
DELETE FROM PROFESSOR 
WHERE CODIGO=33; 
````

> [!warning] Atenção
> Caso usemos `DELETE` sem `WHERE`, **todos os registros da tabela serão deletados**. Sempre confirme a condição antes de executar.

Caso usemos sem Where vai deletar tudo.

