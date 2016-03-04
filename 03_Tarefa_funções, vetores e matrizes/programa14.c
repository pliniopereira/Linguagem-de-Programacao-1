#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char vogais[]= {'a','e','i','o','u','A','E','I','O','U'};
    char frase[100];
    int cont = 0, i, j;

    printf("Entre com a frase: ");
    scanf("%s", frase);

    for (i = 0; i <= strlen(frase); i++) {
        for (j = 0; j < strlen(vogais); j++)
            if (frase[i]==vogais[j]) cont++;
    }

    printf("\nExistem %d vogais dentro da frase!", cont);

    return 0;

    system("pause");

    getch();
}


