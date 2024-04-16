#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Fun��es com passagem de par�metros e retorno
calculadora
*/
float Somar (float num1, float num2){
return num1+num2;}
float Subtrair (float num1, float num2){
return num1-num2;}
float Multiplicar (float num1, float num2){
return num1*num2;}
float Dividir (float num1, float num2){
return num1/num2;}
float Porcentagem (float num1, float num2){
return (num1/num2)*100;}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int opcao;
    float num1,num2,resultado;
    printf("Calculadora\n");
    printf("Digite o valor do primeiro n�mero:");
    scanf("%f",&num1);
     printf("Digite o valor do segundo n�mero:");
    scanf("%f",&num2);
    printf("---------------------------------\n");
    printf("1.Somar\n");
    printf("2.Subtrair\n");
    printf("3.Multiplicar\n");
    printf("4.Dividir\n");
    printf("5.Porcentagem\n");
    printf("\n");
    printf("Digite a op��o desejada:\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
    case 1:
        resultado = Somar(num1, num2);
        printf("Resultado: %.2f\n",resultado);
        break;
    case 2:
        resultado = Subtrair(num1, num2);
        printf("Resultado: %.2f\n",resultado);
        break;
    case 3:
        resultado = Multiplicar(num1, num2);
        printf("Resultado: %.2f\n",resultado);
        break;
    case 4:
        if (num2==0)
        {
            printf("N�o � poss�vel dividir por 0\n");
        }
        else
        {
            resultado = Dividir(num1, num2);
            printf("Resultado: %.2f\n",resultado);
        }
        break;
    case 5:
        if (num2==0)
        {
            printf("Imposs�vel\n");
        }
        else
        {
            resultado = Porcentagem(num1, num2);
        printf("Resultado: %.2f\n",resultado);
        }

        break;
    default:
        printf("Op��o inv�lida\n");
        break;
        }
    printf("---------------------------------\n");

    printf("\n");
    system("pause");
    return 0;
}
