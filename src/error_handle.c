#include "push_swap.h"

void error_handle(int index)
{
    if (index == 1)
        printf("Error - incorrect arguments");
    exit(1);
    //else if (index == 2)
        //printf("Error - incorrect operation")
    //exit(1);
}

/*

cuidado com:
- sinal solto (tipo um menos)
- 0000001 1 (argumentos do tipo string e repetidos - o atoi resolve)
- verificar se todos os argumentos sao digitos
- verificar se todos os numeros ja estao ordenados (is sorted)
*/