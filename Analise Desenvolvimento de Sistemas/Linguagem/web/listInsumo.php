<?php
  include_once "conexao.php";
  $sql = "SELECT * FROM tipoinsumo;";
  $con = Conexao::conectar();
  $registros = con->query($sql);
  $con = Conexao::desconetar();
?>
<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Listar tipo de insumos</title>
</head>
<body>
  <h1>Listar tipos de Insumos</h1>
  <table>
    <tr>
      <td>ID</td>
      <td>Descrição</td>
      <?php foreach($registro as $linha) {?>
      <tr> 
        <td></td>
        <td></td>
    </tr>
      <?php } ?>
     
      
    </tr>
  </table>
</body>
</html>