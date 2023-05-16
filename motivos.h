#ifndef MOTIVOS_H_INCLUDED
#define MOTIVOS_H_INCLUDED

struct MotivoE;

typedef struct MotivoE *MotivoP;
MotivoP constructorMotivo(char nombreMotivo[20]);

void DesrtructorMotivo(MotivoP p);
#endif // MOTIVOS_H_INCLUDED
