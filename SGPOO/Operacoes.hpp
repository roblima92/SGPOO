#pragma once
#include <iostream>
#ifndef Operações_hpp
#define Operações_hpp
#include "Fornecedor.hpp"
#include<vector>;
#include "Operario.hpp"
#include "vendedor.hpp"
using namespace std;

class Operacoes {

public:
	void Iniciar();
	void cadastrarFornecedor();
	void cadastrarEmpregado();
	void cadastrarOperario();
	void cadastrarVendedor();
	void buscarFornecedor();
	void buscarOperario();
	void buscarVendedor();
	void registrarVenda();

private:
	vector<Fornecedor> fornecedores;
	vector<Operario> operarios;
	vector<Vendedor> vendedores;
};
#endif //!Operações_hpp

