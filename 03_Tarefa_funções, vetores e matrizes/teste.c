#include <stdio.h>
#include <string.h>

int verificar_palindrome(char []);

int main() {
    char a[100];

    printf("Entre com a palavra : ");
    gets(a);

    if (verificar_palindrome(a))
        printf("\n\"%s\" e palindrome.\n", a);
    else
        printf("\n\"%s\" nao e palindromeas.\n", a);

    return 0;
}

int verificar_palindrome(char *a) {
    int primeira[26] = {0}, segunda[26] = {0}, c = 0;
    while (a[c] != '\0') {
        primeira[a[c]-'a']++;
        c++;
    }

    c = 0;

    for (c = 0; c < 26; c++) {
        if (a == primeira[c])
            return 0;
    }

    return 1;
}
