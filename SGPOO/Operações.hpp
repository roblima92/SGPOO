#pragma once
#ifndef Opera��es_hpp
#define Opera��es_hpp
#include "Fornecedor.hpp"
#include<vector>;
using namespace std;

class Opera��es
{
public:
	void CadastrarFuncionario();
	void BuscarPessoa(string param);
private:
	vector<Fornecedor> fornecedores;
};
#endif // !Opera��es_hpp

