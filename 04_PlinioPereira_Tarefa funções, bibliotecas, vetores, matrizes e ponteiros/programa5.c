/*5- Observe o trecho do código a seguir.*/
char *dia_semana(int n) {
    char *d[] = {
        "erro",
        "domingo",
        "segunda-feira",
        "terça-feira",
        "quarta-feira",
        "quinta-feira",
        "sexta-feira",
        "sábado"
    };
    return d[1 <= n && n <= 7 ? n : 0];
}

/*
a) Explique o que será retornado pela função.
R: return d[1<=n && n<=7 ? n : 0];
"Se 1 <= n E n <= 7 ENTÃO n SENÃO 0".

b) Existem ponteiros neste trecho de código? Explique.
Sim, em char *d[], temos um ponteiro de vetor do tipo char para armazenarmos os dias da semana.
*/
