#include "Operacoes.hpp"
#include <iostream>
#include "Fornecedor.hpp"
#include <string>
#include "Empregado.hpp"


void Operacoes::Iniciar()
{
    fornecedores.push_back(Fornecedor("gabriel", "rua", "00000-000000", 100));
    fornecedores.push_back(Fornecedor("ronaldo", "ladera", "10000-000000", 100));
    fornecedores.push_back(Fornecedor("maicon", "rua", "20000-000000", 100));
    operarios.push_back(Operario("ruan", "maua", "34546-4654", 1, 4500, 6000, 5));
}

void Operacoes::cadastrarFornecedor()
{
    cout << "------------------------------------" << endl;
    string nome;
    string telefone;
    string endereco;
    int credito;
    cout << "Qual o nome do nosso Fornecedor?\n" << endl;
    cin >> nome;
    cout << "Onde mora nosso Fornecedor?\n" << endl;
    cin >> endereco;
    cout << "Qual o telefone do nosso Fornecedor?\n" << endl;
    cin >> telefone;
    cout << "Quanto de credito tem nosso Fornecedor?\n" << endl;
    cin >> credito;
    Fornecedor forn(nome, endereco, telefone, credito);
}

void Operacoes::cadastrarEmpregado() 
{
    string nome;
    string telefone;
    string endereco;
    float salario;
    int codigoSetor;
    cout << "Qual o nome do nosso Fornecedor?\n" << endl;
    cin >> nome;
    cout << "Onde mora nosso Funcionario?\n" << endl;
    cin >> endereco;
    cout << "Qual o telefone do nosso Funcionario?\n" << endl;
    cin >> telefone;
    cout << "Qual o salario base do funcionario?\n" << endl;
    cin >> salario;
    cout << "Qual o codigo do setor do funcionario?\n" << endl;
    cin >> codigoSetor;
    Empregado forn(nome, endereco, telefone, codigoSetor, salario);
    

}
void Operacoes::cadastrarOperario()
{
    string nome;
    string telefone;
    string endereco;
    float salario;
    int codigoSetor;
    float valorproducao;
    float comissao;
    cout << "Qual o nome do nosso Fornecedor?\n" << endl;
    cin >> nome;
    cout << "Onde mora nosso Funcionario?\n" << endl;
    cin >> endereco;
    cout << "Qual o telefone do nosso Funcionario?\n" << endl;
    cin >> telefone;
    cout << "Qual o salario base do funcionario?\n" << endl;
    cin >> salario;
    cout << "Qual o codigo do setor do funcionario?\n" << endl;
    cin >> codigoSetor;
    cout << "Qual o valor produzido pelo funcionario?\n" << endl;
    cin >> valorproducao;
    cout << "Qual a comissao do funcionario?\n" << endl;
    cin >> comissao;

    operarios.push_back(Operario(nome, endereco, telefone, codigoSetor, salario, valorproducao, comissao));
}
void Operacoes::buscarOperario()
{
    string nome;
    cout << "Digite o nome ou id do operario" << endl;
    cin >> nome;

    for (size_t i = 0; i < operarios.size(); i++)
    {
        if (operarios[i].getNome() == nome || to_string(i) == nome)
        {
            operarios[i].imprimirDetalhes();
        }
    }
}
void Operacoes::cadastrarVendedor()
{
    string nome;
    string telefone;
    string endereco;
    float salario;
    int codigoSetor;
    float valorvendido;
    float comissao;
    cout << "Qual o nome do nosso vendedor?\n" << endl;
    cin >> nome;
    cout << "Onde mora nosso vendedor?\n" << endl;
    cin >> endereco;
    cout << "Qual o telefone do nosso vendedor?\n" << endl;
    cin >> telefone;
    cout << "Qual o salario base do vendedor?\n" << endl;
    cin >> salario;
    cout << "Qual o codigo do setor do vendedor?\n" << endl;
    cin >> codigoSetor;
    cout << "Qual o valor vendido pelo vendedor?\n" << endl;
    cin >> valorvendido;
    cout << "Qual a comissao do vendedor?\n" << endl;
    cin >> comissao;

    vendedores.push_back(Vendedor(nome, endereco, telefone, codigoSetor, salario, valorvendido, comissao));
}

void Operacoes::buscarVendedor()
{
    string nome;
    cout << "Digite o nome ou id do vendedor" << endl;
    cin >> nome;

    for (size_t i = 0; i < vendedores.size(); i++)
    {
        if (vendedores[i].getNome() == nome || to_string(i) == nome)
        {
            vendedores[i].imprimirDetalhes();
        }
    }
}

void Operacoes::buscarFornecedor()
{
    string nome;
    cout << "Digite o nome ou id do funcionario" << endl;
    cin >> nome;

    for (size_t i = 0; i < fornecedores.size(); i++)
    {
        if (fornecedores[i].getNome() == nome || to_string(i) == nome)
        {
            fornecedores[i].imprimirDetalhes();
        }
    }
}

