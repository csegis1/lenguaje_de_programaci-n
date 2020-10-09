#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1;
    int n;
    printf("Escribe el valor de n: ");
    scanf("%d",&n);


    while(cont<=n)
    {
        if((cont%2)==0)
        {
         printf("%d ",-1*cont);
        }
        else{
            printf("%d ",cont);
        }


        cont=cont+1;

    }
printf("\nFin: salio del ciclo");
return 0;
}
