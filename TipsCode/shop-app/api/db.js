import mysql from 'mysql2';

export const db = mysql.createConnection( {
   host: 'localhost',
   user: 'root',
   password: 'juju',
   database: 'loja-tipscode'
}) // Estamos exportando a função Db, que recebe a conexão com o banco de Dados.