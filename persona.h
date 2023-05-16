#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include "lista.h"
struct PersonaE;

typedef struct PersonaE *PersonaP;
PersonaP constructorPersona(char nombre[20] );

void DesrtructorPersona(PersonaP p);

void Mostrar(PersonaP p);

void mostrarMotivos(PersonaP x);
void mostrarLista (Lista *list);


#endif // PERSONA_H_INCLUDED
