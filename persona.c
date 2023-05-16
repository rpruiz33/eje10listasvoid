#include "persona.h"
#include "motivos.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct PersonaE{

char nombre[20];
MotivoP m[3];
};



PersonaP constructorPersona(char nombre[20] ){
 char nombre2[20];
 PersonaP p=malloc(sizeof(struct PersonaE));
 strcpy(p->nombre,nombre);
 for(int i=0;i<3;i++){
 printf("persona %s ingrese un motivo %d\n",p->nombre,i+1);
 fflush(stdin);
 gets(nombre2);
 p->m[i]=constructorMotivo(nombre2);
 }






 return p;
}

void DesrtructorPersona(PersonaP a){
free(a);

};


/*
char*  getNombre(PersonaP a){
return a->nombre;
}
/*
};
float getPromedio(AlumnoP a){
return a->promedio;

};
int getDni(AlumnoP a){
return a->dni;

};

void setNombre(AlumnoP a, char nombre[20]){
strcpy(a->nombre,nombre);
}
void setDni(AlumnoP a, int dni){
a->dni=dni;
}
void setPromedio(AlumnoP a, float promedio){
a->promedio=promedio;
}*/
/*Lista* listaBubbleSort(Lista *list, int (*canSwap)(void *data1, void *data2)) {
    if (!list)
        return NULL;
    for (int i = 0; i < list->size - 1; ++i) {
        bool quit = true;
        for (int j = 0; j < list->size - 1; ++j) {
            if (canSwap(listaGet(list, j), listaGet(list, j+1)) < 0) {
                listaSwap(list, j, j+1);
                quit = false;
            }
        }
        if (quit)
            break;
    }
	return list;
}


bool listaSwap (Lista *list, int pos1, int pos2) {
    if (!list || pos1 < 0 || pos2 < 0 || pos1 >= list->size || pos2 >= list->size || pos1 == pos2)
        return false;

    void *temp = malloc(list->tamDelDatoEnBytes);
    if (!temp)
        return false;

    memcpy(temp, listaGet(list, pos1), list->tamDelDatoEnBytes);

    memcpy(listaGet(list, pos1), listaGet(list, pos2), list->tamDelDatoEnBytes);
    memcpy(listaGet(list, pos2), temp, list->tamDelDatoEnBytes);

    free(temp);
    return true;
}
*/
void* listaGet ( Lista *list, int pos) {
    if (!list || pos < 0 || list->size <= 0 || pos >= list->size)//sino exista la lista , ai la pos es negativa, si el tamaño de la lista es negativo
        return NULL;                                                    //y si la pos es mayor al tamaño retorna un null

    if (pos == 0)// si la pos es igual a 0 retorn el  primer nodo con  el dato
        return list->primero->data;

    if (pos == list->size - 1)// si  la pos es la ultima retorna el nodo  con el ultimo dato
        return list->ultimo->data;

    Nodo *f = NULL;//nodo *f es nulo
    for ( int i = 0; i < pos; i++) {//bucle de i=0 hasta pos
        if (i == 0)//si es 0  quiere decir es el primer nodo
            f = list->primero;
        else
            f = f->proximo;//que sea el proximo
    }

    return f->proximo->data;//retorna el proximo nodo con la data
}
/*
int DecSort (void *x, void *y) {
    PerosnaP a = *((PerosnaP*) x);
    PerosnaP b = *((PerosnaP*) y);

	if (getDni(a) > getDni(b))
		return -1;
	else if (getDni(a) < getDni(b))
		return 1;
	else
		return 0;
}*/
void mostrarLista (Lista *list) {
    for ( int i = 0; i < listaGetSize(list); ++i) {
        PersonaP x = *( (PersonaP*) listaGet(list, i) );
		printf("\n %s  \n ",x->nombre);
		mostrarMotivos(x);
    }
   printf("\n");
}
void mostrarMotivos(PersonaP x){
    for(int i=0;i<3;i++){

printf("[%s]", x->m[i]);
    }
}


