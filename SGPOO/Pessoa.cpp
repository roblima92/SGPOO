#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endere�o, string telefone)
{
	this->nome = nome;
	this->endere�o = endere�o;
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

void Pessoa::setEndere�o(string endere�o)
{
	this->endere�o = endere�o;
}

string Pessoa::getEndere�o()
{
	return endere�o;
}

void Pessoa::setTelefone(string telefone)
{
	this->telefone = telefone;
}

string Pessoa::getTelefone()
{
	return telefone;
}
