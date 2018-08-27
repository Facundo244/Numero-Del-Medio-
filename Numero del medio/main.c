#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;
    int numeroDelMedio;

    printf("Ingrese un numero:");
    scanf("%d" , & numeroUno);

    maximo = numeroUno;
    minimo = numeroUno;

    printf("Ingrese otro numero:");
    scanf("%d" , & numeroDos);

    if(numeroDos < minimo)
    {
        minimo = numeroDos;
    }
    else{
        if(numeroDos > maximo)
        {
            maximo = numeroDos;
        }
    }

    printf("Ingrese otro numero:");
    scanf("%d" , & numeroTres);

    if(numeroTres < maximo)
    {
        minimo < numeroTres;
    }
    else{
        if(numeroTres > maximo)
        {
            maximo = numeroTres;
        }
    }

    printf("el minimo es: %d\n" , minimo);
    printf("el maximo es: %d\n" , maximo);

   return 0;
}
