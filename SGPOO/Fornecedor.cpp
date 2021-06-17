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

void Fornecedor::setValorCredito(int credito)
{
	this->credito = credito;
}

void Fornecedor::setValorDivida(int divida)
{
	this->divida = divida;
}

int Fornecedor::getValorDivida()
{
	return divida;
}

int Fornecedor::getValorCredito()
{
	return credito;
}

int Fornecedor::obterSaldo()
{
	return credito - divida;
}

void Fornecedor::gerarDetalhes()
{
	cout << "O fornecedor: " << Pessoa::getNome() << endl;
	cout << "Esta situado em: " << Pessoa::getEndere�o() << endl;
	cout << "Telefone: " << Pessoa::getTelefone() << endl;
	cout << "Tem o saldo de: " << this->obterSaldo() << endl;
}