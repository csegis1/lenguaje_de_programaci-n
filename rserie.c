// 22-09-2020
//Ralizado por mi
#include <stdio.h>

int main()
{
    float Vs;
    int R1,R2,R3,RT;
    float I;
    printf("Escribe el valor de la fuente Vs: ");
    scanf("%f",&Vs); //recibe valores tecleados
    /*
    printf("Restencia 1: ");
    scanf("%d",&R1);
    printf("Resistencia 2: ");
    scanf("%d",&R2);
    printf("Resistencia 3: ");
    scanf("%d",&R3);
    */
    printf("Escribe el valor de R1,R2 y R3, separados por comas: ");
    scanf("%d,%d,%d",&R1,&R2,&R3);


    RT=R1+R2+R3; //Resistencia total
    I=Vs/RT; //Corriente
    printf("La corriente I es %.2fA\n",I);
    printf("El voltaje en R1 (%d ohms) es %0.2fV\n",R1,I*R1);
    printf("El voltaje en R2 (%d ohms) es %0.2fV\n",R2,I*R2);
    printf("El voltaje en R3 (%d ohms) es %0.2fV\n",R3,I*R3);
return 0;

}
