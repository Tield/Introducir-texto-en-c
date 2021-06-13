#include <iostream>
#include "stdlib.h"
#include "stdio.h"
using namespace std;

int main()
{
struct define{
char nom[15];
char claveanimal[10];
int precio;
int edad;
char sexo[2];
}animal[10];
char opc1[2];
        for(int i=0;i<2;i++){
    fflush(stdin);
    printf("Ingrese el nombre del animal: "); scanf("%s",animal[i].nom); printf("\n");
    fflush(stdin);
    printf("Ingrese la clave del animal: "); scanf("%s",animal[i].claveanimal);printf("\n");
    fflush(stdin);
    printf("Ingrese el precio del animal: "); scanf("%d",animal[i].precio);printf("\n");
    fflush(stdin);
    printf("Ingrese la edad del animal: "); scanf("%d",animal[i].precio);printf("\n");
    fflush(stdin);
    printf("Ingrese el sexo del animal: "); scanf("%s",animal[i].precio);printf("\n");
    fflush(stdin);
        }
        for(int i=0;i<2;i++){
        printf("Nombre: %s",animal[i].nom);printf("\n");
        printf("Clave: %s",animal[i].claveanimal);printf("\n");
        printf("Precio: %d",animal[i].precio);printf("\n");
        printf("Edad: %d",animal[i].edad);printf("\n");
        printf("Sexo: %s",animal[i].sexo);printf("\n");


        }
    cin>>opc1;
system("pause");
}
