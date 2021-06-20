#include "Operario.hpp"

Operario::Operario()
{
	this->valorProducao = 0;
	this->comissao = 0;
}

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

float Operario::calculaSalario()
{
	return (salario - Empregado::descontoImposto()) + (valorProducao * ((comissao / 100)));  //VALOR DE COMISSÃO NÃO TRIBUTAVEL PARA CALCULO DO SALARIO.
}

void Operario::imprimirDetalhes()
{
	Empregado::imprimirDetalhes();
	cout << "Recebe " << comissao << "de comissao";
	cout << "Totalizando um salario de: " << calculaSalario();
}

void Operario::setProducao(float producao)
{
	this->valorProducao = producao;
}

void Operario::setComissao(float comissao)
{
	this->comissao = comissao;
}