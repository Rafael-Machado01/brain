class Competicao
{
protected:
  int id;
  string descricao;
  string local;
  string dataInicio;
  string dataFim;

public:
  Competicao() : id(0), descricao("Padrao"), local("Assis"), dataInicio("2025"), dataFim("2026") {};
  Competicao(int id, string descricao, string local, string dataInicio, string dataFim) : id(0), descricao(descricao), local(local), dataInicio(dataInicio), dataFim(dataFim) {};
};