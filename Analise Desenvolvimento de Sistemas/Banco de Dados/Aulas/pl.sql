-- Exemplo de procedure
CREATE OR REPLACE PROCEDURE venda (
    -- Aqui são parametros de entrada
    idProduto IN NUMBER,
    qtdeVendido IN NUMBER
)
IS
-- Declaração de varivel local
estoqueAtualizado NUMBER;
BEGIN
SELECT estoque INTO estoqueAtualizado -- Pega o estoque e passa o valor para a variavel
FROM loja WHERE id = idProduto; -- Seleciona o estoque do produto com o id informado

-- Se tiver estoque realizar a venda e o update.
if (estoqueAtualizado >=S qtdeVendido) then
   UPDATE loja SET estoque = estoqueAtualizado - qtdeVendido WHERE id = idProduto;
   COMMIT;
else
    DBMS_OUTPUT.PUT_LINE('Estoque insuficiente');
END IF;
END venda;

-- Exemplo de função
CREATE OR REPLACE FUNCTION aumento (
-- Parametros de entrada
 idFuncionario IN NUMBER
 aumentoSalario IN NUMBER
)RETURN NUMBER -- Diz que vai retornar um numero
IS
 -- Declaração de variaveis
 salarioAtual NUMBER;
BEGIN
-- Pega o salario atual do funcionario
SELECT salario INTO salarioAtual
FROM funcionarios WHERE id = idFuncionario;
-- Atualiza o salario
UPDATE funcionarios SET salario = salarioAtual + aumentoSalario
WHERE id = idFuncionario;

RETURN salarioAtual + aumentoSalario;
END aumento;

-- Exemplo de Trigger
CREATE OR REPLACE TRIGGER logEstoque (
  AFTER UPDATE OF estoque ON loja -- Quando a linha estoque for atualizada na tabela loja.
  FOR EACH ROW -- Para cada linha atualizada, executa o trigger.
BEGIN
INSERT INTO logEstoque (
       produto_id,
       estoque_anterior,
       estoque_novo,
       data_alteracao
   ) VALUES (
       :OLD.id,             -- valor da coluna id ANTES (não muda, mas é referência da linha)
       :OLD.estoque,        -- valor do estoque ANTES da alteração
       :NEW.estoque,        -- valor do estoque DEPOIS da alteração
       SYSDATE               -- data/hora atual da alteração
   );
END;

CREATE OR REPLACE PACKAGE pkg_empresa AS

    -- Vende um produto
    PROCEDURE venda(
        idProduto IN NUMBER,
        qtdeVendido IN NUMBER
    );

    -- Aumenta o salário de um funcionário
    FUNCTION aumento(
        idFuncionario IN NUMBER,
        aumentoSalario IN NUMBER
    ) RETURN NUMBER;

END pkg_empresa;

CREATE OR REPLACE PACKAGE BODY pkg_empresa AS

    ------------------------------------------------------------------
    -- PROCEDURE VENDA
    ------------------------------------------------------------------
    PROCEDURE venda(
        idProduto IN NUMBER,
        qtdeVendido IN NUMBER
    )
    IS
        estoqueAtual NUMBER;
    BEGIN

        SELECT estoque
        INTO estoqueAtual
        FROM loja
        WHERE id = idProduto;

        IF estoqueAtual >= qtdeVendido THEN

            UPDATE loja
            SET estoque = estoque - qtdeVendido
            WHERE id = idProduto;

            COMMIT;

            DBMS_OUTPUT.PUT_LINE('Venda realizada.');

        ELSE

            DBMS_OUTPUT.PUT_LINE('Estoque insuficiente.');

        END IF;

    END venda;

    ------------------------------------------------------------------
    -- FUNCTION AUMENTO
    ------------------------------------------------------------------
    FUNCTION aumento(
        idFuncionario IN NUMBER,
        aumentoSalario IN NUMBER
    )
    RETURN NUMBER
    IS
        salarioAtual NUMBER;
    BEGIN

        SELECT salario
        INTO salarioAtual
        FROM funcionarios
        WHERE id = idFuncionario;

        UPDATE funcionarios
        SET salario = salario + aumentoSalario
        WHERE id = idFuncionario;

        COMMIT;

        RETURN salarioAtual + aumentoSalario;

    END aumento;

END pkg_empresa;
