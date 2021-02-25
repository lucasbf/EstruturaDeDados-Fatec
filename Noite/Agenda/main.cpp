#include <iostream>
#include "agenda.h"

using namespace std;

int main(int argc, char *argv[]) {
    
    Agenda minhaAgenda;
    int op;
    Pessoa p1;

    inicializaAgenda(&minhaAgenda);

    do {
        cout << " --- Agenda --- ";
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Excluir" << endl;
        cout << "3 - Alterar Dia, Mes, Ano" << endl;
        cout << "4 - Consulta por Data" << endl;
        cout << "5 - Consulta por Mes" << endl;
        cout << "6 - Consulta por Letra Inicial" << endl;
        cout << "7 - Mostrar Ordenada pelo Nome" << endl;
        cout << "8 - Mostrar Ordenada pelo Mes" << endl;
        cout << "9 - Sair" << endl;
        cout << "Digite uma opção: ";
        cin >> op;

        switch (op) {
            case 1:
                cout << "Nova pessoa" << endl;
                cout << "Nome: ";
                cin >> p1.nome;
                cout << "Email: ";
                cin >> p1.email;
                cout << "Nascimento: ";
                cin >> p1.dia >> p1.mes >> p1.ano;
                inserePessoa(&minhaAgenda,p1); 
                break;
            case 9:
                cout << "Adeus !!!" << endl;
                break;
            default:
                cout << "Opção Inválida!" << endl;
        }
        imprimeAgenda(minhaAgenda);
    } while (op != 9);


    return 0;
}
