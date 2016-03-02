#include <stdio.h>
#include <string.h>

int verificar_anagrama(char [], char []);

int main() {
    char a[100], b[100];

    printf("Entre com a primeira palavra : ");
    gets(a);

    printf("\nEntre com a segunda palavra: ");
    gets(b);

    if (verificar_anagrama(a, b))
        printf("\n\"%s\" e \"%s\" sao anagramas.\n", a, b);
    else
        printf("\n\"%s\" e \"%s\" nao sao anagramas.\n", a, b);

    system("pause");

    getch();

    return 0;
}

int verificar_anagrama(char *a, char *b) {
    int primeira[26] = {0}, segunda[26] = {0}, c = 0;
    while (a[c] != '\0') {
        primeira[a[c]-'a']++;
        c++;
    }

    c = 0;

    while (b[c] != '\0') {
        segunda[b[c]-'a']++;
        c++;
    }

    for (c = 0; c < 26; c++) {
        if (primeira[c] != segunda[c])
            return 0;
    }

    return 1;
}
