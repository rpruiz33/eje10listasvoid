#include "motivos.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct MotivoE{
char nombreMotivo[20];
};;


MotivoP constructorMotivo(char nombreMotivo[20]){
    MotivoP m=malloc(sizeof(struct MotivoE));
    strcpy(m->nombreMotivo,nombreMotivo);
    return m;



};

void DesrtructorMotivo(MotivoP m){
free(m);


};
char *getMotivo(MotivoP m){

return m->nombreMotivo;

}
