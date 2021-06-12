#include "Fornecedor.hpp"

Fornecedor::Fornecedor()
{
	this->credito = 0;
	this->divida = 0;
}

Fornecedor::Fornecedor(string nome, string endere�o, string telefone, int credito)
{
	Pessoa::setNome(nome);
	Pessoa::setEndere�o(endere�o);
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
	cout << "Esta situado em: " << Pessoa::getEndere�o() << endl;
	cout << "Telefone: " << Pessoa::getTelefone() << endl;
	cout << "Tem o saldp de: " << this->obtersaldo() << endl;
}


