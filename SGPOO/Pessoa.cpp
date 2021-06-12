#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endereço, string telefone)
{
	this->nome = nome;
	this->endereço = endereço;
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
	this->endereço = endereço;
}

string Pessoa::getEndereço()
{
	return endereço;
}

void Pessoa::setTelefone(string telefone)
{
	this->telefone = telefone;
}

string Pessoa::getTelefone()
{
	return telefone;
}
