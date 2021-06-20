// SGPOO.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <stdlib.h>
#include <iostream>
#include "Operacoes.hpp"
using namespace std;

int main()
{
    bool continuar = true;
    int switch_on;
    Operacoes op;

    op.Iniciar();

    while (continuar)
    {
        system("cls");
        cout << "\n\n\nBem vindo ao SGPOO: Sistema de Gestao de Pessoas Orientado ao Objeto\n\n";
        cout << "Selecione a opcao que deseja:" << endl;
        cout << "\nCadastrar um Fornecedor, digite --> 1 " << endl;
        cout << "Cadastrar um Funcionario--Adminstrador, digite --> 2 " << endl;
        cout << "Cadastrar um Funcionario--Operario, digite --> 3 " << endl;
        cout << "Cadastrar um Funcionario--Vendedor, digite --> 4 " << endl;
        cout << "\nEditar pessoa, digite --> 5 " << endl;
        cout << "\nListar todas as pessoas do sistema, digite --> 6 " << endl;
        cout << "Listar todas empregados e seu salario total do sistema, digite --> 7 " << endl;
        cout << "Listar todas os fornecedores do sistema, digite --> 8 " << endl;
        cout << "Listar todas os administradores do sistema, digite --> 9 " << endl;
        cout << "Listar todas os operarios do sistema, digite --> 10 " << endl;
        cout << "Listar todas os vendedores do sistema, digite --> 11 " << endl;
        cout << "\nFinalizar a execucao, digite --> 0 " << endl;
        cin >> switch_on;
        switch (switch_on)
        {
        case 0:
            cout << "Obrigado por usa nosso sistema" << endl;
            continuar = false;
            break;
        case 1:
            op.cadastrarFornecedor();
            break;
        case 2:
            op.cadastrarAdministrador();
            break;
        case 3:
            op.cadastrarOperario();
            break;
        case 4:
            op.cadastrarVendedor();
            break;
        case 5:
            op.editarPessoa();
            break;
        case 6:
            op.listarPessoas();
            break;
        case 7:
            op.listarEmpregados();
            break;
        case 8:
            op.listarFornecedores();
            break;
        case 9:
            op.listarAdministradores();
            break;
        case 10:
            op.listarOperarios();
            break;
        case 11:
            op.listarVendedores();
            break;
        default:
            cout << "Nao consegui compreender, pode informar novamente?" << endl;
            break;
            system("pause");
        }
    }
}
