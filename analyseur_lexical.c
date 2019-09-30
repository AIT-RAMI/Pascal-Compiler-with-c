#include <stdio.h>
#include <string.h>
//Declaration des classes lexicales
typedef enum {
    ID_TOKEN, PROGRAM_TOKEN,
    CONST_TOKEN,VAR_TOKEN,
    BEGIN_TOKEN, END_TOKEN,
    IF_TOKEN, THEN_TOKEN,
    WHILE_TOKEN, DO_TOKEN,
    READ_TOKEN, WRITE_TOKEN,
    PV_TOKEN, PT_TOKEN,
    PLUS_TOKEN, MOINS_TOKEN,
    MULT_TOKEN, DIV_TOKEN,
    VIR_TOKEN, AFF_TOKEN,
    INF_TOKEN, INFEG_TOKEN,
    SUP_TOKEN, SUPED_TOKEN,
    DIFF_TOKEN, PO_TOKEN,
    PF_TOKEN, FIN_TOKEN,
    NUM_TOKEN, ERREUR_TOKEN
} CODE_LEX;

FILE* Fichier;

char Car_Cour;
void Lire_Car(){
    Car_Cour=fgetc(Fichier);
}

typedef struct {
    CODE_LEX CODE;
    char NOM[20];
} TSym_Cour;

TSym_Cour SYM_COUR;

void Sym_Suiv(){
    while ()
}

int main() {
    Fichier = fopen("code.p", "r");
    Lire_Car();
    while(Car_Cour!=EOF){
        Sym_Suiv();
    }
    return 0;
}


















//
void getKeyWord(char* word, int token){
    if (strcmp("program", word) == 0) token = PROGRAM_TOKEN;
    else if (strcmp("const", word) == 0) token = VAR_TOKEN;
    else if (strcmp("const", word) == 0) token = VAR_TOKEN;
}

