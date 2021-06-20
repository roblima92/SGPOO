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

void Pessoa::setEndereço(string endereco)
{
	this->endereco = endereco;
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


void Pessoa::imprimirDetalhes()
{
	imprimirDetalhesPessoas();
}

void Pessoa::imprimirDetalhesPessoas()
{
	cout << "Nome: " << nome << endl;
	cout << "Endereco: " << endereco << endl;
	cout << "Telefone: " << telefone << endl;
}
