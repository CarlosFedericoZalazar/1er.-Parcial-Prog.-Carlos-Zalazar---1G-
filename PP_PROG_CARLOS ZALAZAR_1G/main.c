/*1. Crear una funci�n llamada aplicarAumento que reciba como par�metro
el precio de un producto y devuelva el valor del producto con un aumento del 5%
. Realizar la llamada desde el main.

2. Crear una funci�n que se llame reemplazarCaracteres que reciba una cadena
 de caracteres como primer par�metro, un car�cter como segundo y otro car�cter
como tercero,  la misma deber� reemplazar cada ocurrencia del segundo par�metro
por el tercero y devolver la cantidad de veces que se reemplazo ese car�cter  en la cadena


3. Dada la siguiente estructura generar una funci�n que permita ordenar un array
 de dicha estructura por tipo. Ante igualdad de tipo deber� ordenarse por efectividad
 creciente. Hardcodear datos y mostrarlos desde el main.

 NO LLEGUE CON EL TIEMPO CON EL ULTIMO PUNTO PROFESOR.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
int id;
char nombre[20];
char tipo;
float efectividad;
}eVacuna;



float aplicarAumento(float price);

int reemplazarCaracteres(char cadena[], char a, char b);



int main()
{
    float precio;
    float resultado;

    printf("INGRESE PRECIO: ");
    scanf("%f", &precio);

    resultado = aplicarAumento(precio);
    printf("RESULTADO: %.2f ", resultado);

    //printf()

    return 0;
}

float aplicarAumento(float precio)
{

    float resultado=0;
    float aumento;
    char palabra[20];
    int cambios;
    char caracterA;
    char caracterB;

    aumento = (precio *5)/100;
    resultado = precio + aumento;

    printf("\nResultado: %.2f", resultado);

    fflush(stdin);
    printf("\nINGRESE UNA PALABRA: ");
    gets(palabra);
    fflush(stdin);
    printf("\n\n\n\nINGRESE CARACTER A: ");
    scanf("%c", &caracterA);
    fflush(stdin);
    printf("\nINGRESE CARACTER B: ");
    scanf("%c", &caracterB);
    cambios = reemplazarCaracteres(palabra, caracterA, caracterB);

    printf("LA PALABRA INGRESADA: %s, CANTIDAD DE CAMBIOS %d\n",palabra, cambios);

    return resultado;
}

int reemplazarCaracteres(char cadena[], char a, char b)
{

    int i=0;
    int contador=0;

    while(cadena[i]!='\0')
    {
        if(cadena[i]==a)
        {
            cadena[i]=b;
            contador++;

        }
        i++;
    }
    return contador;

}

int harcodeoDatos(eVacuna vacunas, int tamVacunas){

    eVacuna auxVacunas[3]={{1,Phayser,'A', 10},



                        }







}
