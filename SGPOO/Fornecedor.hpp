#pragma once
#ifndef Fornecedor_hpp
#define Fornecedor_hpp
#include "Pessoa.hpp"

class Fornecedor : public Pessoa
{
public:
	Fornecedor();
	Fornecedor(string nome, string endereço,string telefone, int credito);
	void SetValorCredito(int credito);
	void SetValorDivida(int divida);
	int GetValorDivida();
	int GetValorCredito();
	int obtersaldo();
	void GerarDetalhes();
private:
	int credito;
	int divida;
};
#endif // !Fornecedor_hpp

