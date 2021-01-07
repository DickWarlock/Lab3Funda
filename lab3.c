#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
No sé si dejar las funciones como poly o int, puedo ir mostranto la seciencia de Fib
haciendo un prinf en cuanto se llega al nuevo j
Olvidenlo
*/
int Fibonacci_Recursivo(int n);
int Fibonacci_Iterativo (int n);
int Fibonacci_Surprise (int n);

clock_t start, end, total;
int main()
{
    //clock_t start, end, total;  //Para visualizar los tiempos de ejecución
    int op,n;

    do
    {
        system("cls");
        printf("Secuencia de Fibonacci: \n");
        printf("Por favor escoja que complejidad de Algoritmo desea visualizar: \n");
        printf("1.Fibonacci Recursivo \n");
        printf("2.Fibonacci Iterativo \n");
        printf("3.Fibonacci Surprise \n");
        printf("4.Salir \n");
        scanf("%d",&op);  //Recibe lo que escoge el usuario

        double t_cpu;

        switch (op)
        {
            case (1):                
                printf("Ingrese el n-esimo numero POSITIVO que quiere que llegue la secuencia: \n");
                scanf("%d",&n);
                start = clock();
                printf("%d",Fibonacci_Recursivo(n));
                end = clock();
                total = (end-start);
                t_cpu = ((double) (end - start)) / CLOCKS_PER_SEC;
                printf("Tiempo total de ejecucion de %f segundos.",t_cpu);
                printf("\n\n");
                system("pause");
                break;
            case (2):
                printf("Ingrese el n-esimo numero POSITIVO que quiere que llegue la secuencia: \n");
                scanf("%d",&n);
                Fibonacci_Iterativo(n);
                printf("\n\n");
                system("pause");
                break;
            case (3):
                printf("Ingrese el n-esimo numero POSITIVO que quiere que llegue la secuencia: \n");
                scanf("%d",&n);
                Fibonacci_Surprise(n);
                printf("\n\n");
                system("pause");
                break;
        }
    }while(op!=4);

}
int Fibonacci_Recursivo(int n)
{
    int j=0;
    
    if(n<2){
        return n;
    }
    else{
        return Fibonacci_Recursivo(n-1) + Fibonacci_Recursivo(n-2);
    }
    
}
int Fibonacci_Iterativo (int n)
{

    double t_cpu;
    int i=1,j=0;
    int k;
    start = clock();

    for(k=1 ; k<=n ; k++)
    {
        j = i + j;
        i = j - i;

    }
    printf("%d \t",j);
    end = clock();
    total = (end-start);
    t_cpu = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTiempo total de ejecucion de %f segundos.",t_cpu);

    return 0;
}
int Fibonacci_Surprise (int n)
{
    printf("Has escogido el camino de la homosexualidad \n");
    printf("%d",n);

    return 0;
}
