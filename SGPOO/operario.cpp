#include "Operario.hpp"

Operario::Operario(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorProducao, float comissao)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->codigoSetor = codigoSetor;
	this->salario = salario;
	this->valorProducao = valorProducao;
	this->comissao = comissao;
}

Operario::Operario()
{
	this->valorProducao = 0;
	this->comissao = 0;
}

float Operario::calculaSalario()
{
	return (salario - Empregado::descontoImposto()) + getCommisaoValorProducao();  //VALOR DE COMISSÃO NÃO TRIBUTAVEL PARA CALCULO DO SALARIO.
}

void Operario::setProducao(float producao)
{
	this->valorProducao = producao;
}

void Operario::setComissao(float comissao)
{
	this->comissao = comissao;
}

float Operario::getCommisaoValorProducao()
{
	return valorProducao * (comissao / 100);
}

void Operario::imprimirDetalhes()
{
	Empregado::imprimirDetalhes();
	cout << "Produziu: R$" << valorProducao << endl;
	cout << "Recebe " << comissao << "% de comissao" << endl;
	cout << "Totalizando um salario de: R$" << calculaSalario() << endl;
}