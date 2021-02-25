#include <iostream>
#include "agenda.h"

using namespace std;

int main(int argc, char *argv[])
{
    Agenda agenda_niver;
    int op = 0;
    Pessoa p;

    inicializaAgenda(&agenda_niver);    
   
    do {
        cout << "1 - Cadastrar " << endl;
        cout << "2 - Excluir " << endl;
        cout << "3 - Atualizar Nascimento " << endl;
        cout << "4 - Consulta - Data " << endl; 
        cout << "5 - Consulta - Mes " << endl; 
        cout << "6 - Consulta - Nome " << endl; 
        cout << "7 - Mostrar - Nome " << endl; 
        cout << "8 - Mostrar - Mes " << endl; 
        cout << "9 - Sair " << endl; 
        cout << "Digite uma opção: " << endl;
        cin >> op;

        switch (op) {
            case 1:
                cout << "Cadastrar Nova Pessoa" << endl;
                cout << "Nome: ";
                cin >> p.nome;
                cout << "Email: ";
                cin >> p.email;
                cout << "Nascimento: ";
                cin >> p.nascimento.dia >> p.nascimento.mes >> p.nascimento.ano;
                inserePessoa(&agenda_niver,p);
                break;
            case 9:
                cout << "Adeus!!!" << endl;
                break;
            case 0:
                imprimeAgenda(agenda_niver);
            default:
                cout << "Opção Inválida" << endl;
        }

    }while(op != 9);
 
    return 0;
}
