//La primera versión de la rama main debe contener el archivo main.c con los #include correspondientes, 
//la función main y los prototipos de funciones primero(); segundo(); e iguales()
//rama 1: debe solicitar al usuario que ingrese dos números y guardarlos en dos variables.
//rama 2 deberá comparar los números y llamar a la función correspondiente
#include <stdio.h>
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

}





#include <stdio.h>

void primero();
void segundo();
void iguales();

int main() {
    int a, b;

    return 0;
if (a > b)
    primero();
else if (b > a)
    segundo();
else
    iguales();
}
