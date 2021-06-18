#pragma once
#ifndef Empregado_hpp
#define Empregado_hpp
#include "Pessoa.hpp"

class Empregado : public Pessoa
{
public:
	Empregado();
	Empregado(string nome, string endereço, string telefone, int codigoSetor, float salario);
	void setCodigoSetor(int credito);
	void setSalarioBase(float salario);
	virtual float calculaSalario();
	void imprimirdetalhes();
protected:
	int codigoSetor;
	float salario;
};
#endif

