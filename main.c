
//essas linhas "include" s�o as "Bibliotecas"
//Bibliotecas s�o conjuntos de subprogramas que cont�m c�digos, fun��es pr�-definidas prontas para uso
#include <stdio.h> // essa Biblioteca define entrada e sa�da
#include <stdlib.h> // essa � uma Biblioteca de fun��es b�sicas do sistema
/*coment�rio em bloco (n�o s�o processados) */
//coment�rio em linha
#include <locale.h> //biblioteca de idiomas (corrigir acentua��o)
int main(int argc, char *argv[])
//main � o ponto de partida

//argc se refere ao n�mero de linhas do c�digo
//argv se refere ao conte�do das linhas
//char tipo de vari�vel que aceita qualquer coisa
{

    //a linha abaixo configura o idioma
    setlocale(LC_ALL,"Portuguese");
    system("Color F0");//a linha abixo muda a cor do texto
    //C�digo das cores: 0=preto,1=azul,2=verde,3=verde �gua,4=vermelho
    //5=roxo,6=amarelo,7=branco,8=cinza,9=azul claro
    //A=verde claro,B=verde-�gua claro,C=vermelho claro
    //D=lil�s,E=amarelo claro,F=branco brilhante


     printf("OL� MUNDO!\n");
 system("PAUSE");//O programa "espera" vc iniciar apertando uma tecla

 //a linha abaixo limpa a tela
 system("cls");
 system("color 0F");
 printf("Massa de Manobra\n");




     return 0;//return 0 � uma fun��o de retorno ligada ao main, o 0 significa que o aplicativo encerrou sem nenhum erro
}
