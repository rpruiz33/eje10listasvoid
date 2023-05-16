#include "lista.h"
#include "persona.h"
#include <stdio.h>
#include <stdlib.h>



int main() {

    Lista list;

    //Inicia la lista

    listaInit(&list, sizeof(PersonaP));




    printf("-- persona --\n");
    PersonaP d= constructorPersona("ROBERTO");

    listaPushBack(&list, &d);
    printf("-- persona --\n");
    PersonaP d1=constructorPersona("MARCIA");
    listaPushBack(&list, &d1);
    printf("-- persona --\n");
    PersonaP d2=constructorPersona("CARLOS");
    listaPushBack(&list, &d2);
    mostrarLista(&list);











    return 0;
}
