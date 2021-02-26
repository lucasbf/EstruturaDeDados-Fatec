#include <iostream>
#include "agenda.h"

using namespace std;

int main(int argc, char *argv[]) {
    
    Agenda minhaAgenda;
    int op, mes, idConsulta[MAX_AG], idc;
    Pessoa p1;
    string nome;

    inicializaAgenda(&minhaAgenda);

    do {
        system("clear");
        cout << " --- Agenda --- " << endl;
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
                cin >> p1.nascimento.dia >> p1.nascimento.mes >> p1.nascimento.ano;
                inserePessoa(&minhaAgenda,p1);
                cout << "Pessoa inserida com sucesso!!" << endl; 
                break;
            case 2:
                cout << "Excluir pessoa " << endl;
                cout << "Digite o nome da pessoa: ";
                cin >> nome;
                if (removePessoaPeloNome(&minhaAgenda,nome))
                    cout << "Pessoa removida com sucesso!!" << endl;
                else
                    cout << "Pessoa não encontrada!" << endl;
                break;
            case 5:
                cout << "Consulta por Mês" << endl;
                cout << "Digite o número do mês: ";
                cin >> mes;
                consultaAgendaPeloMes(minhaAgenda,mes,idConsulta,&idc);
                if (idc > 0) {
                    cout << "Aniversariantes do mês " << mes << endl;
                    for (int i = 0; i < idc; ++i) {
                        imprimePessoa(minhaAgenda.aniversariantes[idConsulta[i]]);
                        cout << "-----------------" << endl;
                    }
                }
                else
                    cout << "Aniversariantes não encontrados!" << endl;
                break;
            case 9:
                cout << "Adeus !!!" << endl;
                break;
            case 0:
                imprimeAgenda(minhaAgenda);
                break;
            default:
                cout << "Opção Inválida!" << endl;
        }
        cout << "Aperte ENTER para continuar ..." << endl;
        system("read");
    } while (op != 9);


    return 0;
}
