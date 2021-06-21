#pragma once
#ifndef Operario_hpp
#define Operario_hpp
#include "Empregado.hpp"

class Operario : public Empregado
{
public:
	Operario(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorProducao, float comissao);
	Operario();
	float calculaSalario();
	void imprimirDetalhes();
	void setProducao(float producao);
	void setComissao(float comissao);
	float getCommisaoValorProducao();

private:
	float valorProducao;
	float comissao;
};
#endif //!Operario_hpp