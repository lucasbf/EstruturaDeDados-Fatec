#include "agenda.h"
#include <string>

// Agenda é passada como referência
void inicializaAgenda(Agenda *ag) {
    ag->qtd = 0; //(*ag).qtd = 0;
}

int inserePessoa(Agenda *ag, Pessoa pss) {
    ag->aniversariantes[ag->qtd] = pss;
    ag->qtd++;
    return 1;
}

bool removePessoa(Agenda *ag, string nome) {
    for (int i = 0; i < ag->qtd; ++i) {
        if (ag->aniversariantes[i].nome == nome) {
            for (int j = i; j < ag->qtd-1; j++)
                ag->aniversariantes[j] = ag->aniversariantes[j+1];
            ag->qtd--;
            return true;
        }
    }
    return false;
}

void imprimeAgenda(Agenda ag) {
    for (int i = 0; i < ag.qtd; ++i) {
        cout << "-------------" << endl;
        imprimePessoa(ag.aniversariantes[i]);
    }
    cout << "-------------" << endl;
}

void imprimePessoa(Pessoa ps) {
        cout << "Nome...:" << ps.nome << endl;    
        cout << "E-mail.:" << ps.email << endl;    
        cout << "Nasc...:" << formataData(ps.nascimento) << endl;
}

string formataData(Data dt) {
    return to_string(dt.dia) + "/" + to_string(dt.mes)
            + "/" + to_string(dt.ano);
}
