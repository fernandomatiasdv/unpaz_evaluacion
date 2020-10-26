/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    // Declaración de variables
    char tipoDeAnimal;
    int i, peso, masaCorporal, contadorAves = 0, acumuladorPesoDeAves = 0, contadorMamiferos = 0, contadorReptiles = 0;
    float promedioDePesosDeLasAves;

    //Titulo
    printf("###############################");
    printf("\nIngrese los datos del zoologico");
    printf("\n###############################");    
    
    //Inserción de datos
    for(i=0; i<20; i++){
        
        printf("\n Vuelta : %d" , i);
  
        do{
            fflush(stdin);
            printf("\nIngrese un tipo de animal (A, M, R) ");
            scanf("%c", &tipoDeAnimal);
            if(tipoDeAnimal!='A' && tipoDeAnimal!='M' && tipoDeAnimal!='R'){
                printf("Error: Las opciones son A, M o R");
            }
        }
        while(tipoDeAnimal!='A' && tipoDeAnimal!='M' && tipoDeAnimal!='R');     

        printf("\nIngrese su peso");
        scanf("%d" , &peso);
        
        printf("\nIngrese la masa corporal");
        scanf("%d" , &masaCorporal);

        if(tipoDeAnimal == 'A' || tipoDeAnimal == 'a'){
            acumuladorPesoDeAves = acumuladorPesoDeAves + peso;
            contadorAves++;
        }
        
        if(tipoDeAnimal=='M'||tipoDeAnimal=='m'){
            contadorMamiferos++;
        }

        if(tipoDeAnimal=='R'||tipoDeAnimal=='r'){
            contadorReptiles++;
        }

    }
    
    //Sacamos el promedio de pesos de las aves
    promedioDePesosDeLasAves = acumuladorPesoDeAves / contadorAves;
    printf("\nEl promedio de los pesos de las aves es %f ", promedioDePesosDeLasAves );   

    //Contador de reptiles
    printf("\nLa cantidad de reptiles es %d", contadorReptiles);

    return 0;
}
