#include <iostream>

#define MAX_AG 1000

using namespace std;

// Tipo Pessoa 
// O que será armazenado na agenda
typedef struct {
    string nome;
    string email;
    int dia;
    int mes;
    int ano;
    // Flags Uteis
    int ativo;
} Pessoa;

// Tipo Agenda
// Estrutura que armazenará as pessoas
typedef struct {
    Pessoa aniversariantes[MAX_AG];
    int qtd;
} Agenda;

// Operacoes sobre Agenda e Pessoa
void inicializaAgenda(Agenda*);
int inserePessoa(Agenda*,Pessoa);
void imprimeAgenda(Agenda);
int removePessoaPeloNome(Agenda*,string);










