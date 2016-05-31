#include <stdio.h>
#include <locale.h>
#include <string.h>

char* digiteLetra() {
    char letras[10000];
    printf("Digite as letras para ordenar: ");
    scanf("%s", &letras);
    return &letras;
}

void insertionSort(char v[], int qtd) {
    int i, j, eleito;
    printf("Ordenando usando Insertion Sort\n");
    for (i = 1; i < qtd; ++i) {
        eleito = v[i];
        j = i - 1;
        while ((j >= 0) && (eleito < v[j])) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = eleito;
    }
    imprime(v, qtd);
}
void selectionSort(char v[], int qtd) {
    int i, j, min, aux;
    for (i = 0; i < (qtd-1); ++i) {
        min = i;
        for (j = (i+1); j < qtd; ++j) {
            if(v[j] < v[min]) min = j;
        }
        if (i != min) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
    imprime(v, qtd);
}
void bubbleSort(char v[], int qtd) {
    int i, j, aux, k = qtd - 1 ;
    printf("Ordenando usando bubble sort\n");
    for(i = 0; i < qtd; ++i) {
        for(j = 0; j < k; ++j) {
            if(v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
        k--;
    }
    imprime(v, qtd);
}
void combSort(char v[], int qtd) {
    printf("Ordenando usando Comb Sort\n");
    float shrink_factor = 1.247330950103979;
    int gap = qtd, swapped = 1, swap, i;
    while ((gap > 1) || swapped) {
        if (gap > 1)
            gap = gap / shrink_factor;
        swapped = 0;
        i = 0;
        while ((gap + i) < qtd) {
            if (v [i] - v [i + gap] > 0) {
                swap = v [i];
                v [i] = v [i + gap];
                v [i + gap] = swap;
                swapped = 1;
            }
            ++i;
        }
    }
    imprime(v, qtd);
}
void merge(char v [], int qtd) {
    int mid, i, j, k;
    int* tmp;
    tmp = (int*) malloc(qtd * sizeof(int));
    mid = qtd / 2;
    i = 0;
    j = mid;
    k = 0;
    while (i < mid && j < qtd) {
        if (v [i] <= v [j]) {
            tmp[k] = v [i++];
        } else {
            tmp[k] = v [j++];
        }
        ++k;
    }

    if (i == mid) {
        while (j < qtd) {
            tmp[k++] = v [j++];
        }
    } else {
        while (i < mid) {
            tmp[k++] = v [i++];

        }
    }

    for (i = 0; i < qtd; ++i) {
        v [i] = tmp[i];
    }

    free(tmp);
}
void mergeSort(char v [], int qtd) {
    int mid;

    if (qtd > 1) {
        mid = qtd / 2;
        mergeSort(v, mid);
        mergeSort(v  + mid, qtd - mid);
        merge(v, qtd);
    }
}
void fazMergeSort(char v[], int qtd) {
    printf("Ordenando usando Merge Sort\n");
    mergeSort(v, qtd);
    imprime(v,qtd);
}
void imprime(char v[], int qtd) {
    int i;
    for(i=0; i<qtd; i++) {
        printf("Pos %d: %c\n", i, v[i]);
    }
}

void main() {
    char op = 's', l;
    int x, tam;
    char *letras;

    do {
        letras = digiteLetra();
        tam = strlen(letras);

        printf("Digite a opção desejada:\n1. Insertion Sort\n2. Selection sort\n3. Bubble sort\n4. Comb sort\n5. Merge sort\nSua escolha: ");
        scanf("%d", &x);
        switch(x) {
        case 1:
            insertionSort(letras, tam);
            break;
        case 2:
            selectionSort(letras, tam);
            break;
        case 3:
            bubbleSort(letras,tam);
            break;
        case 4:
            combSort(letras, tam);
            break;
        case 5:
            fazMergeSort(letras, tam);
            break;
        };
        printf("Deseja continuar? [s/n]: ");
        scanf("%s", &op);
    } while (op == 's');

    system("pause");

}
