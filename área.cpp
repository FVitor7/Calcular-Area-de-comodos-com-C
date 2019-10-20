#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){ //Programa para calcular a area de comodos
    
    float altura,base,result,area; //definindo as entradas
    char op;
    do{ // inicio da estrutura de repeticao (while)
        op='n'; //opcao = n (nao)
        printf("\nInforme a altura: "); //entrada do valor altura
        scanf("%f",&altura); //ler dados formatados do stdin
        printf("\nInforme a base: ");
        // Entra com a base da area
        scanf("%f",&base); //valor base com dados formatados 
        result=base*altura; //Calculo da area
        printf("\nA area desse retangulo é: %.2f.m^2\n", result); //Resultado da area
        area+=result; //Soma a area do comodo encontrado com a variavel 'area' para se calcular o proximo comodo
        printf("\nQuer Incluir Outro Comodo  S/N "); 
        fflush(stdin); //Limpar o buffer do teclado
        scanf("%c",&op); //scanf verifica se oque está sendo impresso ê uma variavel '%c'
    }while(op == 's'); //inicia um loop caso deseje calcular mais areas
    printf("\nTotal Da Area --> %.2fm^2\n",area); //valor total encontrado
    getch(); // leitura de dados do teclado
    return 0; //retorna o resultado obtido verificando se ocorreu tudo bem
}
