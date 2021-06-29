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
        cout << "***Bem vindo ao SGPOO: Sistema de Gestao de Pessoas Orientado a Objeto***\n\n";
        cout << "Selecione a opcao que deseja:" << endl;
        cout << "\n-Cadastrar um Fornecedor, digite --> 1 " << endl;
        cout << "-Cadastrar um Funcionario, digite --> 2 " << endl;
        cout << "\n-Editar pessoa, digite --> 3 " << endl;
        cout << "\n-Listar todas as pessoas do sistema, digite --> 4 " << endl;
        cout << "-Listar todos Empregados e seu salario total do sistema, digite --> 5 " << endl;
        cout << "-Listar todos Fornecedores do sistema, digite --> 6 " << endl;
        cout << "-Listar todos Administradores do sistema, digite --> 7 " << endl;
        cout << "-Listar todos Operarios do sistema, digite --> 8 " << endl;
        cout << "-Listar todos Vendedores do sistema, digite --> 9 " << endl;
        cout << "\n-Finalizar a execucao, digite --> 0 " << endl;
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
            system("cls");
            cout << "-----------------------------------------" << endl;
            cout << "-Cadastrar um Adminstrador, digite --> 1 " << endl;
            cout << "-Cadastrar um Operario, digite --> 2 " << endl;
            cout << "-Cadastrar um Vendedor, digite --> 3 " << endl;
            cout << "-----------------------------------------" << endl;
            cin >> switch_on;
            switch (switch_on) 
            {
            case 1:
                op.cadastrarAdministrador();
                break;
            case 2:
                op.cadastrarOperario();
                break;
            case 3:
                op.cadastrarVendedor();
                break;
            default:
                cout << "Nao consegui compreender, reinicie o processo por favor" << endl;
                break;
                system("pause");
            }
            break;
        case 3:
            op.editarPessoa();
            break;
        case 4:
            op.listarPessoas();
            break;
        case 5:
            op.listarEmpregados();
            break;
        case 6:
            op.listarFornecedores();
            break;
        case 7:
            op.listarAdministradores();
            break;
        case 8:
            op.listarOperarios();
            break;
        case 9:
            op.listarVendedores();
            break;
        default:
            cout << "Nao consegui compreender, pode informar novamente?" << endl;
            break;
            system("pause");
        }
    }
}