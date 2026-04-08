//rama 3: deberá escribir cada función.
#include <stdio.h>

void primero();
void segundo();
void iguales();

int main() {
    int a, b;

printf("PROGRAMA QUE COMPARA DOS NÚMEROS.");
    
printf("Ingrese el primer numero: ");
scanf("%d", &a);

printf("Ingrese el segundo numero: ");
scanf("%d", &b);

if (a > b)
    primero();
else if (b > a)
    segundo();
else
    iguales();

    return 0;
}

void primero(){
    printf ("El primer numero es mayor");
}
void segundo(){
    printf ("El segundo numero es mayor");
}
void iguales(){
    printf ("Ambos numeros son iguales");
}




