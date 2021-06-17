#include "Operacoes.hpp"
#include <iostream>
#include "Fornecedor.hpp"

void Operacoes::CadastrarFuncionario()
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
