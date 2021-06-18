#include <iostream>
#pragma once
#ifndef Opera��es_hpp
#define Opera��es_hpp
#include "Fornecedor.hpp"
#include<vector>;
#include "operario.hpp"
#include "vendedor.hpp"
using namespace std;

class Operacoes
{

public:
	void Iniciar();
	void CadastrarFornecedor();
	void BuscarFornecedor();
	void cadastrarEmpregado();
	void cadastraroperario();
	void buscaroperario();
	void cadastrarvendedor();
	void registrarvenda();
	void buscavendedor();

private:
	vector<Fornecedor> fornecedores;
	vector<operario> operarios;
	vector<vendedor> vendedores;
};
#endif // !Opera��es_hpp

