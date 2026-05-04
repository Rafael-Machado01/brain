<?php
  include_once "conexao.php";

  $sql = "SELECT * FROM tipoinsumo;";
  $con = Conexao::conectar();

  $registro = $con->query($sql);
  $dados = $registro->fetchAll(PDO::FETCH_ASSOC);

  Conexao::desconectar();
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

  <table border="1">
    <tr>
      <td>ID</td>
      <td>Descrição</td>
    </tr>

    <?php foreach($dados as $linha) { ?>
      <tr> 
        <td><?php echo $linha['id']; ?></td>
        <td><?php echo $linha['descricao']; ?></td>
      </tr>
    <?php } ?>

  </table>

</body>
</html>