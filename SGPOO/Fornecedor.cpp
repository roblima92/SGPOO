#include "Fornecedor.hpp"

Fornecedor::Fornecedor()
{
	this->credito = 0;
	this->divida = 0;
}

Fornecedor::Fornecedor(string nome, string endereço, string telefone, int credito)
{
	Pessoa::setNome(nome);
	Pessoa::setEndereço(endereço);
	Pessoa::setTelefone(telefone);
	this->credito = credito;
	this->divida = 0;
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

void Fornecedor::GerarDetalhes()
{
	cout << "O fornecedor: " << Pessoa::getNome() << endl;
	cout << "Esta situado em: " << Pessoa::getEndereço() << endl;
	cout << "Telefone: " << Pessoa::getTelefone() << endl;
	cout << "Tem o saldo de: " << this->obtersaldo() << endl;
}

void Fornecedor::imprimirdetalhes()
{
	Pessoa::imprimirdetalhes();
	cout << "Tem saldo de:" << obtersaldo() << endl;
}



