#include "operario.hpp"

operario::operario(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorprod, float comissao)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->codigoSetor = codigoSetor;
	this->salario = salario;
	this->valorproducao = valorprod;
	this->comissao = comissao;
}

operario::operario()
{
	this->valorproducao = 0;
	this->comissao = 0;
}

float operario::calculaSalario()
{
	return Empregado::calculaSalario() + (valorproducao * ((comissao / 100)));
}

void operario::imprimirdetalhes()
{
	Empregado::imprimirdetalhes();
	cout << "recebe " << comissao << "de comissao";
	cout << "totalizando um salario de: " << calculaSalario();
}
