#pragma once
#ifndef Operações_hpp
#define Operações_hpp
#include "Fornecedor.hpp"
#include<vector>;
using namespace std;

class Operacoes
{
public:
	void Iniciar();
	void CadastrarFornecedor();
	void BuscarFornecedor();
private:
	vector<Fornecedor> fornecedores;
};
#endif // !Operações_hpp

