#pragma once
#ifndef Fornecedor_hpp
#define Fornecedor_hpp
#include "Pessoa.hpp"

class Fornecedor : public Pessoa
{
public:
	Fornecedor();
	Fornecedor(string nome, string endereço,string telefone, int credito);
	void setValorCredito(int credito);
	void setValorDivida(int divida);
	int getValorDivida();
	int getValorCredito();
	int obterSaldo();
	void gerarDetalhes();
private:
	int credito;
	int divida;
};
#endif // !Fornecedor_hpp

