#include "Fornecedor.hpp"

Fornecedor::Fornecedor()
{
}

void Fornecedor::SetValorCredito(int credito)
{
	this->credito = credito;
}

void Fornecedor::SetValorDivida(int divida)
{
	this->divida = divida;
}

int Fornecedor::GetValorDivida()
{
	return divida;
}

int Fornecedor::GetValorCredito()
{
	return credito;
}

int Fornecedor::obtersaldo()
{
	return credito - divida;
}


