#pragma once
#ifndef Fornecedor_hpp
#define Fornecedor_hpp
#include "Pessoa.hpp"

class Fornecedor : public Pessoa
{
public:
	Fornecedor(string nome, string endereço, string telefone, float valorCredito, float valorDivida);
	Fornecedor();
	void setValorCredito(float credito);
	void setValorDivida(float divida);
	float getValorDivida();
	float getValorCredito();
	float obterSaldo();
	void gerarDetalhes();
	void imprimirDetalhes();

private:
	float valorCredito;
	float valorDivida;
};
#endif //!Fornecedor_hpp

