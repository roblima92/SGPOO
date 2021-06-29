#pragma once
#ifndef Vendedor_hpp
#define Vendedor_hpp
#include "Empregado.hpp"

class Vendedor : public Empregado
{
public:
	Vendedor(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorvendas, float comissao);
	Vendedor();
	float calculaSalario();
	void imprimirDetalhes();
	void registrarVenda(float valorvenda);
	void setComissao(float comissao);
	float getComissao();

private:
	float valorVendas;
	float comissao;
};
#endif //!Vendedor_hpp