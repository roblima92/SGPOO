#pragma once
#ifndef operario_hpp
#define operario_hpp
#include "operario.hpp"
#include "Empregado.hpp"

class operario : public Empregado
{
public:
	operario(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorprod, float comissao);
	operario();
	float calculaSalario();
	void imprimirdetalhes();
private:
	float valorproducao;
	float comissao;
};
#endif

