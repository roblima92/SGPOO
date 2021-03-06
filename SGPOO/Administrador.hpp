#pragma once
#ifndef Administrador_hpp
#define Administrador_hpp
#include "Empregado.hpp"

class Administrador : public Empregado
{
public:
	Administrador(string nome, string endereco, string telefone, int codigoSetor, float salario, float ajudaDeCusto);
	Administrador();
	float calculaSalario();
	void imprimirDetalhes();
	void setAjudaDeCusto(float ajuda);
	float getAjudaDeCusto();

private:
	float ajudaDeCusto;
};
#endif //!Administrador_hpp