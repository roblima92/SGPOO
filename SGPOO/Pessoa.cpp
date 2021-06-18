#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endereço, string telefone)
{
	this->nome = nome;
	this->endereco = endereço;
	this->telefone = telefone;
}

Pessoa::Pessoa()
{
}

void Pessoa::setNome(string nome)
{
	this->nome = nome;
}

string Pessoa::getNome()
{
	return nome;
}

void Pessoa::setEndereço(string endereço)
{
	this->endereco = endereço;
}

string Pessoa::getEndereço()
{
	return endereco;
}

void Pessoa::setTelefone(string telefone)
{
	this->telefone = telefone;
}

string Pessoa::getTelefone()
{
	return telefone;
}

void Pessoa::imprimirdetalhes()
{
	cout << "Nome: " << nome << endl;
	cout << "endereço: " << endereco << endl;
	cout << "telefone: " << telefone << endl;
}
