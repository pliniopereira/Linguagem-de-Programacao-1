#include<stdio.h>
#include<locale.h>

int notas[5]={100,50,10,5,1};

void calcNota(int quantia){
    int i;
    for (i=0;i<5;i++){
        int quo=quantia/notas[i];
        quantia=quantia%notas[i];
        if (quo>0) printf("%d cédula(s) de %d\n",quo,notas[i]);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Quantia: R$");
    int quantia;
    scanf("%d", &quantia);
    calcNota(quantia);  

    system("pause");

    getch();

    return 0;
}
