#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endereco, string telefone)
{
	this->nome = nome;
	this->endereco = endereco;
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
	this->endereco = endereco;
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


void Pessoa::imprimirDetalhes()
{
	cout << "Nome: " << nome << endl;
	cout << "Endere�o: " << endereco << endl;
	cout << "Telefone: " << telefone << endl;
}

void Pessoa::imprimedetalhespessoa()
{
	cout << "Nome: " << nome << endl;
	cout << "Endere�o: " << endereco << endl;
	cout << "Telefone: " << telefone << endl;
}
