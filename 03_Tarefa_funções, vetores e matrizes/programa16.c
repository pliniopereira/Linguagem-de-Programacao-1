#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
    int i, j, l;
    char str1[20], str2[20];

    printf("Entre com a palavra : ");
    scanf("%s", str1);

    l = strlen(str1);
    j = 0;

    for(i = l - 1; i >= 0; i-- )
        str2[j++] = str1[i];
    str2[j] = '\0';

    if(strcmp(str1, str2) == 0)
        printf("A palavra e palindrome.\n");
    else
        printf("A palavra nao e palindrome.\n");

    return 0;

    system("pause");

    getch();

    return 0;

}
