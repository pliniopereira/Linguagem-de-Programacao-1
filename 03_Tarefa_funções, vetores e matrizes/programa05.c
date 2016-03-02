#include <stdio.h>

main() {
    int Dia, Mes, Ano, DiasDoAno, Dias31, AnosBiss;
    long int Anos, NumDias;

    printf ( "Digite dia, mes e ano: \n" );
    scanf ( "%d %d %d", &Dia, &Mes, &Ano );
    Anos = Ano - 1600;
    if ( Mes < 9 )
        Dias31 = Mes / 2;
    else
        Dias31 = ( Mes + 1 ) / 2;

    DiasDoAno = 30 * ( Mes - 1 ) + Dia + Dias31;

    if ( Mes >= 2 )
        if ( ( Ano % 4 != 0 ) || ( ( Ano % 100 == 0 ) && ( Ano % 400 != 0 ) ) )
            DiasDoAno = DiasDoAno - 2;
        else
            DiasDoAno = DiasDoAno - 1;

    AnosBiss = Ano / 4 - 400 - ( Ano / 100 - 16 ) + ( Ano / 400 - 4 ) + 1;

    if ( Ano == 1600 )
        NumDias = DiasDoAno;
    else
        NumDias = Anos * 365 + DiasDoAno + AnosBiss;

    switch ( NumDias % 7 ) {
    case 1 :
        printf ( "\n Sábado." );
        break;
    case 2 :
        printf ( "\n Domingo." );
        break;
    case 3 :
        printf ( "\n Segunda." );
        break;
    case 4 :
        printf ( "\n Terça." );
        break;
    case 5 :
        printf ( "\n Quarta." );
        break;
    case 6 :
        printf ( "\n Quinta." );
        break;
    case 7 :
        printf ( "\n Sexta." );
        break;
    }
    system("pause");

    getch();
}
