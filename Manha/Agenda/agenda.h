#ifndef __AGENDA_H_
#define __AGENDA_H_

#include <iostream>

#define MAX_AG 1000

using namespace std;

// Tipo de Dados - Data
// Elemento que representa uma data e será usado em Pessoa
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;
// Tipo de Dados - Pessoa
// Elemento a ser armazenado na agenda
typedef struct {
    string nome;
    string email;
    Data nascimento;
} Pessoa;
// Tipo de Dados - Agenda
// Repositório de aniversariantes
typedef struct {
    Pessoa aniversariantes[MAX_AG];
    int qtd;
} Agenda;
// Operacoes - Agenda
void inicializaAgenda(Agenda*);
int inserePessoa(Agenda*,Pessoa);
bool removePessoa(Agenda*,string);

void imprimeAgenda(Agenda);
void imprimePessoa(Pessoa);
string formataData(Data);
#endif // __AGENDA_H_
