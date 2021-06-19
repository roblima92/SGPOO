#pragma once
#include <iostream>
#include <vector>
#ifndef Opera��es_hpp
#define Opera��es_hpp
#include "Administrador.hpp"
#include "Fornecedor.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"

using namespace std;

class Operacoes 
{
public:
	void Iniciar();
	void cadastrarAdministrador();
	void cadastrarFornecedor();
	void cadastrarOperario();
	void cadastrarVendedor();
	void buscarAdministrador();
	void buscarFornecedor();
	void buscarOperario();
	void buscarVendedor();
	void registrarVenda();

private:
	vector<Fornecedor> fornecedores;
	vector<Operario> operarios;
	vector<Vendedor> vendedores;
	vector<Administrador> administradores;
};
#endif //!Opera��es_hpp

