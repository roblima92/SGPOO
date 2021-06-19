#include "Operario.hpp"

Operario::Operario(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorProd, float comissao)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->codigoSetor = codigoSetor;
	this->salario = salario;
	this->valorProducao = valorProd;
	this->comissao = comissao;
}

Operario::Operario()
{
	this->valorProducao = 0;
	this->comissao = 0;
}

float Operario::calculaSalario()
{
	return Empregado::calculaSalario() + (valorProducao * ((comissao / 100)));
}

void Operario::imprimirDetalhes()
{
	Empregado::imprimirDetalhes();
	cout << "Recebe " << comissao << "de comissao";
	cout << "Totalizando um salario de: " << calculaSalario();
}