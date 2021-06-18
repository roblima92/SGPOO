#pragma once
#ifndef vendedor_hpp
#define vendedor_hpp
#include "Empregado.hpp"
class vendedor : public Empregado
{
public:
	vendedor(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorvendas, float comissao);
	float calculaSalario();
	void imprimirdetalhes();
	void registrarvenda(float valorvenda);
private:
	float valorvendas;
	float comissao;
	float getcomissao();
};
#endif // !vendedor_hpp

