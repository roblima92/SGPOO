// SGPOO.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <stdlib.h>
#include <iostream>
#include "Operacoes.hpp"
using namespace std;

int main()
{
    bool continuar = true;
    Operacoes op;

    op.Iniciar();

    while (continuar)
    {
        cout << "Bem vindo ao SGPOO: Sistema de Gestão de Pessoas Orientado ao Objeto\n";
        int switch_on;
        cout << "Para finalizar a execucao digite --> 0 " << endl;
        cout << "Para cadastrar um fornecedor digite --> 1 " << endl;
        cout << "Para cadastrar um empregado digite --> 2 " << endl;
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
            op.cadastrarEmpregado();
            break;
        default:
            cout << "Nao consegui compreender, pode informar novamente?" << endl;
            break;




            system("cls");
        }
    }
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
