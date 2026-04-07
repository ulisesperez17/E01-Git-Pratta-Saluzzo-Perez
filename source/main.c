//rama 2 deberá comparar los números y llamar a la función correspondiente
#include <stdio.h>

void primero();
void segundo();
void iguales();

int main() {
    int a, b;

    return 0;

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
}
