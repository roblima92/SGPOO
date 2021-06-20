#pragma once
#ifndef Operario_hpp
#define Operario_hpp
#include "Empregado.hpp"

class Operario : public Empregado
{
public:
	Operario(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorProd, float comissao);
	Operario();
	float calculaSalario();
	void imprimirDetalhes();
	void setproducao(float producao);
	void setcomissao(float comissao);

private:
	float valorProducao;
	float comissao;
};
#endif //!Operario_hpp