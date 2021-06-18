#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endere�o, string telefone)
{
	this->nome = nome;
	this->endereco = endere�o;
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
	this->endereco = endere�o;
}

string Pessoa::getEndere�o()
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
	cout << "endere�o: " << endereco << endl;
	cout << "telefone: " << telefone << endl;
}
