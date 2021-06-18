#include "vendedor.hpp"

vendedor::vendedor(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorvendas, float comissao)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->codigoSetor = codigoSetor;
	this->salario = salario;
	this->comissao = comissao;
	this->valorvendas = valorvendas;
}

float vendedor::calculaSalario()
{
    return Empregado::calculaSalario() + getcomissao();
}

void vendedor::imprimirdetalhes()
{
	cout << "vendeu:" << this->valorvendas << endl;
	cout << "tem comissao = " << this->comissao << endl;
	cout << "salario total = " << calculaSalario() << endl;
}

void vendedor::registrarvenda(float valorvenda)
{
	this->valorvendas += valorvenda;
}

float vendedor::getcomissao()
{
	return valorvendas * (comissao / 100);
}
