#include "agenda.h"

void inicializaAgenda(Agenda *ag) {
    ag->qtd = 0; // (*ag).qtd = 0;
    for (int i = 0; i < MAX_AG; ++i) {
        ag->aniversariantes[i].ativo = 0;
    }
}

int inserePessoa(Agenda *ag,Pessoa p) {
    if (ag->qtd < MAX_AG-1) {
        for (int i = 0; i < MAX_AG; ++i) {
            if(!ag->aniversariantes[i].ativo) {    
                ag->aniversariantes[i] = p;
                ag->aniversariantes[i].ativo = 1;
                ag->qtd++;
                break;
            }
        }
        return 1;
    }
    return 0;
}

void imprimeAgenda(Agenda ag) {
    cout << "--- Agenda --- " << endl;
    for (int i = 0; i < ag.qtd; ++i) {
        if(ag.aniversariantes[i].ativo == 0)
            continue;
        cout << "Nome: " << ag.aniversariantes[i].nome << endl;
        cout << "Email: " << ag.aniversariantes[i].email << endl;
        cout << "Nasc: ";
        cout << ag.aniversariantes[i].dia << "/";
        cout << ag.aniversariantes[i].mes << "/";
        cout << ag.aniversariantes[i].ano << endl;
        cout << "--------------------" << endl;   
    }
}

int removePessoaPeloNome(Agenda *ag,string nome) {
    for (int i = 0; i < MAX_AG; ++i) {
        if(nome == ag->aniversariantes[i].nome) {
            ag->aniversariantes[i].ativo = 0;
            ag->qtd--;
        }   
    }
    return 0;
}
