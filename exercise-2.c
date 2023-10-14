#include <stdio.h>
#include <string.h>

int main() {
    char cadena [100], caracter;
    int i, cont =0;

printf("Digite una cadena: ");
gets(cadena);
printf("Digite una caracter: ");
scanf("%c" , &caracter);

for (i = 0; i < strlen(cadena); i++) {
    if (cadena[i] == caracter) {
     cont++;

    }
}

if(cont > 0) {
 printf("El caracter %c esta en la cadena %s\n", caracter, cadena);
} else {
  printf("El carater %c no esta en la cadena %s\n", caracter, cadena);
    }
}