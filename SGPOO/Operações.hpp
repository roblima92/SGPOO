#pragma once
#ifndef Operações_hpp
#define Operações_hpp
#include "Fornecedor.hpp"
#include<vector>;
using namespace std;

class Operações
{
public:
	void CadastrarFuncionario();
	void BuscarPessoa(string param);
private:
	vector<Fornecedor> fornecedores;
};
#endif // !Operações_hpp

