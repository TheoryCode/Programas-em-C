#include <stdio.h>
#include <stdlib.h>
//char s�o caracteres (vari�veis)armazenados em c�digos asc
int main(int argc, char *argv[])
{
    char nome[50];//delimita o tamanho m�ximo de caracteres que ser� aceito
    int idade;

    printf("Digite o seu nome\n");
    gets(nome);
    system("cls");
    printf("Bem vindo %s\n",nome);//o %s se refere a variavel nome, o %s avisa a mem�ria que o tipo de var�vel � caractere
    system("Pause");

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);//scanf � uma fun��o para ler e guardar a mem�ria num�rica na vari�vel idade
    system ("cls");
    printf("Boa Sorte, %s",nome);
    printf(" de %d anos!",idade);

    return 0;
}
