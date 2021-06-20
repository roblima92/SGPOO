#pragma once
#ifndef Vendedor_hpp
#define Vendedor_hpp
#include "Empregado.hpp"

class Vendedor : public Empregado
{
public:
	Vendedor(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorvendas, float comissao);
	float calculaSalario();
	void imprimirDetalhes();
	void registrarVenda(float valorvenda);
	void setComissao(float comissao);

private:
	float valorVendas;
	float comissao;
	float getComissao();
};
#endif //!Vendedor_hpp
