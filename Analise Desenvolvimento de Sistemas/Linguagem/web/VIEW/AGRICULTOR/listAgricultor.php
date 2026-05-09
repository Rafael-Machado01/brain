<?php
include_once $_SERVER['DOCUMENT_ROOT'] . "/DAL/agricultor.php";
include_once $_SERVER['DOCUMENT_ROOT'] . "/MODEL/agricultor.php";

use DAL\Agricultor;

$dalAgricultor = new DAL\Agricultor();
$lstAgricultor = $dalAgricultor->Select();
?>