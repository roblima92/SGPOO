#include "Fornecedor.hpp"

Fornecedor::Fornecedor(string nome, string endereço, string telefone, float valorCredito, float valorDivida)
{
	this->nome = nome;
	this->endereco = endereço;
	this->telefone = telefone;
	this->valorCredito = valorCredito;
	this->valorDivida = valorDivida;
}

Fornecedor::Fornecedor()
{
	this->valorCredito = 0;
	this->valorDivida = 0;
}

void Fornecedor::setValorCredito(float valorCredito)
{
	this->valorCredito = valorCredito;
}

void Fornecedor::setValorDivida(float valorDivida)
{
	this->valorDivida = valorDivida;
}

float Fornecedor::getValorDivida()
{
	return valorDivida;
}

float Fornecedor::getValorCredito()
{
	return valorCredito;
}

float Fornecedor::obterSaldo()
{
	return valorCredito - valorDivida;
}

void Fornecedor::gerarDetalhes()
{
	cout << "O fornecedor: " << Pessoa::getNome() << endl;
	cout << "Esta situado em: " << Pessoa::getEndereço() << endl;
	cout << "Telefone: " << Pessoa::getTelefone() << endl;
	cout << "Tem o saldo de: R$" << this->obterSaldo() << endl;
}

void Fornecedor::imprimirDetalhes()
{
	Pessoa::imprimirDetalhes();
	cout << "Tem saldo de: R$" << obterSaldo() << endl;
}