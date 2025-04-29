import mysql from 'mysql';

export const db = mysql.createConnection({
   host: 'localhost',
   user: 'root',
   password: 'jujuzinha',
   database: 'SHOP'
});

// Arquivo de conexão com o DB, usando a função do mysql createConection ele recebe os dados de login
// Por meio de um objeto por isso usamos chaves, e colocamos as infos, host que é o nome da conexão
// User seria usuário por padrão root. 
// Password é a senha do db.
// Database seria o nome do db ou schema.
// Usamos export para usarmos em todo o lugar do código.
