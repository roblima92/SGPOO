#pragma once
#ifndef Fornecedor_hpp
#define Fornecedor_hpp
#include "Pessoa.hpp"

class Fornecedor : public Pessoa
{
public:
	Fornecedor();
	void SetValorCredito(int credito);
	void SetValorDivida(int divida);
	int GetValorDivida();
	int GetValorCredito();
	int obtersaldo();
private:
	int credito;
	int divida;
};
#endif // !Fornecedor_hpp

