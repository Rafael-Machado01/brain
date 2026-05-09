<?php
namespace DAL;
include_once $_SERVER['DOCUMENT_ROOT'] . "/DAL/conexao.php";
include_once $_SERVER['DOCUMENT_ROOT'] . "/MODEL/agricultor.php";

class Agricultor
{
  public function Select()
  {
    $sql = "Select * from agricultor;";
    $con = Conexao::conectar();
    $registros = $con->query($sql);
    $con = Conexao::desconectar();

    foreach ($registros as $linha) {
      $agricultor = new \MODEL\Agricultor();
      $agricultor->setId($linha['id']);
      $agricultor->setNome($linha['nome']);
      $agricultor->setCidade($linha['cidade']);
      $agricultor->setBairro($linha['bairro']);
      $agricultor->setIdade($linha['idade']);

      $lstAgricultor[] = $agricultor;
    }
    return $lstAgricultor;
  }
}
?>