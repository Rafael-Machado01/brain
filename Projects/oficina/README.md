# Racing Fema - Sistema de Gerenciamento de Oficina Mecânica

Sistema em C++ para gerenciamento de uma oficina mecânica, desenvolvido como projeto bimestral.

## Funcionalidades

### Cadastros
- **Cidades**: código, nome e UF
- **Clientes**: código, nome, endereço, telefone e código da cidade
- **Veículos**: placa, modelo, marca, ano e código do cliente
- **Serviços**: código, descrição e valor da mão de obra
- **Peças**: código, descrição, quantidade em estoque, estoque mínimo/máximo e preço unitário
- **Mecânicos**: código, nome, especialidade e telefone
- **Ordens de Serviço**: código, placa do veículo, código do mecânico, data, código do serviço, código da peça e quantidade

### Operações
- Inclusão de novos Clientes, Veículos e Mecânicos com validação de duplicidade
- Abertura de Ordens de Serviço com verificação automática de estoque
- Consulta de peças com cálculo do valor total em estoque
- Relatório de peças com estoque abaixo do mínimo
- Cálculo do valor total arrecadado com ordens de serviço

### Algoritmos
- **Busca Binária**: utilizada para todas as consultas nas tabelas
- **Merge**: utilizado para manter os dados ordenados após inclusões

## Estrutura do Projeto

```
oficina/
├── main.cpp      # Código-fonte principal
├── LICENSE       # Licença MIT
└── README.md     # Este arquivo
```

## Pré-requisitos

- Compilador C++ (g++, clang++ ou equivalente)
- Suporte a C++11 ou superior

## Compilação e Execução

```bash
# Compilar
g++ -o oficina main.cpp

# Executar
./oficina
```

## Observações

- As buscas são realizadas de forma binária (ordenada)
- Não utiliza variáveis globais
- Dados iniciais são pré-cadastro no programa para demonstração
- Capacidade máxima: 5 registros por tabela (constante `T`)

## Licença

MIT License - veja [LICENSE](LICENSE) para mais detalhes.
