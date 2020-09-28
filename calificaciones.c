#include <stdio.h>

int main ()
{
    char calif; //calificacion en letra
    puts("Escibe tu calificacion en letra: ");
    scanf("%c",&calif);

    if((calif=='A') || (calif=='a'))
    {
        printf("Tienes 10 de calificacion");
        calif=10
    }
    else if(calif=='B'|| calif=='b')
    {
        printf("Tienes 9 de calificacion");
    }
    else if(calif=='C'|| calif=='c')
    {
        printf("Tienes 8 de calificacion");
    }
    else if(calif=='D'|| calif=='d')
    {
        printf("Tienes 7 de calificacion");
    }
    else if(calif=='E'|| calif=='e')
    {
        printf("Tienes 6 de calificacion");
    }
    else{ //condición default
        printf("Tienes calificacion menor de 6");
    }





    return 0;
}
