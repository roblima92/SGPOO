#include "Vendedor.hpp"

Vendedor::Vendedor(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorVendas, float comissao)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->codigoSetor = codigoSetor;
	this->salario = salario;
	this->comissao = comissao;
	this->valorVendas = valorVendas;
}

float Vendedor::calculaSalario()
{
	return (salario - Empregado::descontoImposto()) + getComissao(); //VALOR DE COMISSÃO NÃO TRIBUTAVEL PARA CALCULO DO SALARIO.
}

/// <summary>
/// editado para ser um set simples
/// </summary>
/// <param name="valorVenda">novo valor da venda</param>
void Vendedor::registrarVenda(float valorVenda)
{
	//editado para ser um set simples
	this->valorVendas = valorVenda;
}

void Vendedor::setComissao(float comissao)
{
	this->comissao = comissao;
}

float Vendedor::getComissao()
{
	return valorVendas * (comissao / 100);
}

void Vendedor::imprimirDetalhes()
{
	Empregado::imprimirDetalhes();
	cout << "Vendeu:" << this->valorVendas << endl;
	cout << "Tem comissao de: " << this->comissao << endl;
	cout << "Totalizando um salario de: " << calculaSalario() << endl;
}