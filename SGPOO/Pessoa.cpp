#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string enderešo, string telefone)
{
	this->nome = nome;
	this->endereco = enderešo;
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
	this->endereco = enderešo;
}

string Pessoa::getEnderešo()
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
	cout << "enderešo: " << endereco << endl;
	cout << "telefone: " << telefone << endl;
}
