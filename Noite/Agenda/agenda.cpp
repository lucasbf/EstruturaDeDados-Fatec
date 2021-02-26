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
    int i, j;
    for (i = j = 0; j < ag.qtd; ++i) {
        if(ag.aniversariantes[i].ativo) {
            imprimePessoa(ag.aniversariantes[i]);
            cout << "--------------------" << endl;
            ++j;
        }
    }
}

int removePessoaPeloNome(Agenda *ag,string nome) {
    for (int i = 0; i < MAX_AG; ++i) {
        if(nome == ag->aniversariantes[i].nome) {
            ag->aniversariantes[i].ativo = 0;
            ag->qtd--;
            return 1;
        }   
    }
    return 0;
}

void imprimePessoa(Pessoa ps) {
    cout << "Nome....: " << ps.nome << endl;
    cout << "Email...: " << ps.email << endl;
    cout << "Nasc....: " << formataData(ps.nascimento) << endl;
}

string formataData(Data dt) {
    return to_string(dt.dia) + "/" + to_string(dt.mes) + "/" + to_string(dt.ano);
}

void consultaAgendaPeloMes(Agenda ag,int mes,int idx[MAX_AG], int *n) {
    *n = 0;
    for (int i = 0; i < MAX_AG; ++i) {
        if (ag.aniversariantes[i].ativo && ag.aniversariantes[i].nascimento.mes == mes) {
            idx[*n] = i;
            (*n)++;
        }
    }
}






















