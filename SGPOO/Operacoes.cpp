#include "Operacoes.hpp"
#include <iostream>
#include "Fornecedor.hpp"
#include "Empregado.hpp"

void Operacoes::cadastrarFuncionario()
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
    cout << "------------------------------------" << endl;
    string nome;
    string telefone;
    string endereco;
    float salario;
    int codigoSetor;
    cout << "Qual o nome do nosso Funcionario?\n" << endl;
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