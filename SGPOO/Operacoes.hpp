#include <iostream>
#pragma once
#ifndef Opera��es_hpp
#define Opera��es_hpp
#include "Fornecedor.hpp"
#include<vector>;
using namespace std;

class Operacoes
{

public:
	void Iniciar();
	void CadastrarFornecedor();
	void BuscarFornecedor();
	void cadastrarEmpregado();
private:
	vector<Fornecedor> fornecedores;
};
#endif // !Opera��es_hpp

