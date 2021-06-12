#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string enderešo, string telefone)
{
	this->nome = nome;
	this->enderešo = enderešo;
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

void Pessoa::setEnderešo(string enderešo)
{
	this->enderešo = enderešo;
}

string Pessoa::getEnderešo()
{
	return enderešo;
}

void Pessoa::setTelefone(string telefone)
{
	this->telefone = telefone;
}

string Pessoa::getTelefone()
{
	return telefone;
}
