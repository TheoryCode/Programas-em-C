#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int numero;//essa vari�vel se tornou uma vari�vel global
int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("Sistemas\n\n");
    printf("1-Windows\n");
    printf("2-Linux\n");
    printf("\nEscolha a op��o desejada\n");
    scanf("%d", &numero);
    switch(numero) //estrutura Switch case
    {
    case 1:
        system("cls");
        printf("iniciando o Windows...\n");
        break; //termina o case 1
    case 2:
         system("cls");
        printf("iniciando o Linux...\n");
        break; //termina o case 2

    default:// para tudo que for diferente de case 1 e 2
        printf("Op��o inv�lida");
    }
    return 0;
}
