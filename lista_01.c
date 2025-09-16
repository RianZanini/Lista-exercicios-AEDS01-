/**
    Aluno: Rian Zanini Lascasas de Gouvêia
*/

#include<stdio.h>   // Para entrada e saidas
#include<string.h>  //Para trabalhar cadeia de caracteres
#include<ctype.h>   //Para trabalhar aspectos das strings
#include<stdbool.h> //Para trabalhar condicoes
#include<stdlib.h>
#include<time.h>
#include "io.h"     //Uso opcional de leitura de dados

//----------------------------------------------//

/*
    1) Leia um número inteiro n e mostre todos os números pares entre 1 e n,
    bem como a soma deles.

*/

void metodo_01(){
    int n, soma = 0, pares;
    printf("\nDigite o valor: \n");
    scanf("%d", &n);

    if(n > 1){
        for(int i = 0; i <= n; i++){
            if(i % 2 == 0){
                printf("\n%d", i);
                soma += i;
            }
        }

        printf("\nA soma dos valores pares entre 1 e %d eh: %d\n", n, soma);

    }
    printf("\nO valor deve ser maior que 1\n");
}



/*
    2) Leia uma sequência de números terminada por zero. Mostre:
    - a quantidade de números digitados
    - o maior número
    - a média dos valores

*/
void metodo_02(){
    
    int n = 1, maior = 0, soma = 0, i = 0;
    double media;

    while(n != 0){
        
        printf("\nDigite um valor: \n");
        scanf("%d", &n);

        if(n > maior){
            maior = n;
        }

        i++;
        soma += n;

    }

    media = soma / i;

    printf("\nForam digitados %d numeros\n", i);
    printf("\nO maior valor digitado foi %d\n", maior);
    printf("\nA media dos valores foi: %.2lf\n", media);


}



/*
    3) Calcule a soma dos n primeiros termos da série:  
   S = 1/2 + 2/3 + 3/4 + ... + n/(n+1)
*/
void metodo_03(){
    
    int n;
    double soma = 0;

    printf("\nDigite o indice limite a ser somado: \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += (double)i / (i + 1);
    }

    printf("\nA soma dos %d termos eh: %.2lf\n", n, soma);
}



/*
    4) Leia um número inteiro e verifique se ele é palíndromo 
//    (lido da esquerda para direita é igual ao contrário). Exemplo: 12321

*/

int contDig(int n){
    if(n == 0) return 1; 
    if(n < 0) n = -n;    
    if(n == 0) return 0;
    return 1 + contDig(n/10);
}

void metodo_04(){
    int n, original, invertido = 0, resto;

    printf("\nDigite o valor: ");
    scanf("%d", &n);

    original = n;

    while(n > 0){
        resto = n % 10;
        invertido = invertido * 10 + resto;
        n /= 10;
    }

    if(original == invertido){
        printf("\nEh palindromo\n");
    } else {
        printf("\nNao eh palindromo\n");
    }
}



/*
    5) Leia um número inteiro positivo e mostre todos os seus divisores.
//    Em seguida, diga se ele é perfeito (soma dos divisores próprios = número).

*/
void metodo_05(){

}



/*
    6) Um caixa eletrônico deve fornecer cédulas de R$100, R$50, R$20, R$10, R$5 e R$2.
//    Leia um valor int
*/
void metodo_06(){

}



/*
    7) Escreva um programa que leia uma data no formato dd/mm/aaaa
//    e verifique se a data é válida.

*/
void metodo_07(){

}



/*
    8) Leia três valores inteiros que representam os lados de um triângulo.
//    Verifique se os lados formam um triângulo e classifique como:
//    equilátero, isósceles ou escaleno.

*/
void metodo_08(){

}



/*
    9) Leia uma nota (0 a 10) e o número de faltas (0 a 60). A situação do aluno será:
//    - Reprovado por falta (faltas > 25%)
//    - Reprovado por nota (nota < 6)
//    - Aprovado

*/
void metodo_09(){

}


/*
    10) Leia um número inteiro e diga se ele é um número Armstrong.
//     (Exemplo: 153 → 1³ + 5³ + 3³ = 153)

*/
void metodo_10(){

}



/*
    11) Implemente uma função recursiva que calcule o MDC 
//     (máximo divisor comum) de dois números inteiros.

*/
int mdc(int x, int y){
    if(y == 0){
        return x;
    }

    return mdc(y, x % y);
}
void metodo_11(){
    int x, y;
    printf("\nDigite o valor de x: \n");
    scanf("%d", &x);

    printf("\nDigite o valor de y: \n");
    scanf("%d", &y);

    printf("\nMDC entre %d e %d eh: %d", x, y, mdc(x, y));

}



/*
    12) Escreva uma função recursiva que calcule a soma de todos 
//     os números inteiros de 1 até n.

*/
int soma(int n){
    if(n == 0){
        return 0;
    }

    return n + soma(n - 1);
}
void metodo_12(){
    int n;

    printf("\nDigite o valor n: \n");
    scanf("%d", &n);

    printf("\nA soma de 1 a %d eh: %d\n", n, soma(n));

}



/*
    13) Faça uma função recursiva que calcule a potência de um número a^b.

*/
int pot(int a, int b){
    if(b == 1){
        return 1;
    }
    return a * pot(a, b-1);
}
void metodo_13(){
    int a, b;

    printf("\nDigite o valor a: \n");
    scanf("%d", &a);

    printf("\nDigite o valor b: \n");
    scanf("%d", &b);

    printf("\nA potencia de %d elevado a %d eh: %d\n", a, b, pot(a, b));
}



/*
   14) Implemente uma função recursiva que conte quantas vezes 
//     um determinado caractere aparece em uma string.

*/
int contChar(char *str, char c){
    
    if(*str == '\0'){
        return 0;
    }else{
        if(*str == c){
            return 1 + contChar(str + 1, c);
        }else{
            return contChar(str + 1, c);
        }
    }
    
}
    
void metodo_14(){
    char str[100], c;

    printf("\nDigite a string: \n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\nDigite o caracter: \n");
    scanf("%c", &c);

    printf("\nO caracter %c aparece %d vezes na string\n", c, contChar(str, c));

}



/*
    15) Implemente uma função recursiva que converta um número decimal 
//     em binário e mostre o resultado.

*/
void binario(int n){
    if(n < 2){
        printf("%d", n);
        return;
    }
    binario(n / 2);
    printf("%d", n % 2);
}
void metodo_15(){
    int n;

    printf("\nDigite o valor em base decimal: \n");
    scanf("%d", &n);

    binario(n);
}



/*
    16) Escreva um programa que leia o termo n da sequencia e retorne a soma dela
        S = 1/2 - 1/4 + 1/8 - 1/16...

*/
void metodo_16(){
    int n;
    double s = 0.0;

    printf("\nDigite o termo: \n");
    scanf("%d", &n);

    if(n == 0){
        printf("\nSoma eh 0.5\n");
    }else{

        int denominador = 2;

        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                s += 1 / (2 * i);
            }else{
                s-= 1 / (2 * i);
            }
        }

        printf("\nA soma eh: %d\n", s);
    }
}



/*
    17) Faça um programa que leia uma matriz 4x4 e conte quantos valores 
//     estão acima da média de todos os elementos.

*/
void metodo_17(){
    int matriz[4][4];
    int i, j, soma = 0, cont = 0;
    float media;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    media = soma / 16.0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] > media) {
                cont++;
            }
        }
    }

    printf("%d\n", cont);
}



/*
    18) Leia uma string e diga se ela é um anagrama de outra string dada.

*/
int ehAnagrama(char s1[], char s2[]) {
    int cont1[256] = {0}, cont2[256] = {0};
    int i;

    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++) {
        cont1[(unsigned char)tolower(s1[i])]++;
        cont2[(unsigned char)tolower(s2[i])]++;
    }

    for (i = 0; i < 256; i++) {
        if (cont1[i] != cont2[i]) {
            return 0;
        }
    }

    return 1;
}
void metodo_18(){
    char str1[100], str2[100];

    printf("\nDigite a primeira string: \n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("\nDigite a segunda string: \n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (ehAnagrama(str1, str2)) {
        printf("\nSao anagramas\n");
    } else {
        printf("\nNao sao anagramas\n");
    }
}



/*
    19) Crie um programa que leia uma frase e conte:
//     - a quantidade de vogais
//     - a quantidade de consoantes
//     - a quantidade de dígitos
//     - a quantidade de símbolos

*/
void metodo_19(){
    char frase[200];
    int vogais = 0, consoantes = 0, digitos = 0, simbolos = 0;
    int i;

    printf("\nDigite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    for(i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        if(isalpha(c)) {
            c = tolower(c);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
                vogais++;
            } else {
                consoantes++;
            }
        } else if(isdigit(c)) {
            digitos++;
        } else if(!isspace(c)) {
            simbolos++;
        }
    }

    printf("\nVogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Digitos: %d\n", digitos);
    printf("Simbolos: %d\n", simbolos);
}


/*
   20) Escreva um programa que gere os primeiros n números da sequência de Fibonacci,
//     usando recursão e também usando laço de repetição para comparação.

*/
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
void metodo_20(){
    int n, i;

    printf("\nDigite a quantidade de termos: \n");
    scanf("%d", &n);

    printf("\nSequencia de Fibonacci (recursiva):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}



/*
    21) Faça um programa que simule um "caixinha eletrônico".  
// O usuário deve digitar um valor inteiro (em reais).  
// O programa deve calcular e mostrar quantas cédulas de cada tipo  
// (100, 50, 20, 10, 5, 2 e 1) são necessárias para fornecer o valor,  
// utilizando o menor número possível de cédulas.  
//
// Exemplo:
// Entrada: 289
// Saída:
// 2 nota(s) de R$100
// 1 nota(s) de R$50
// 1 nota(s) de R$20
// 1 nota(s) de R$10
// 1 nota(s) de R$5
// 2 nota(s) de R$2

*/
void metodo_21(){
    
    int valor;

    printf("Insira o valor inteiro: ");
    scanf("%d", &valor);

    int rest, cem, cinquenta, vinte, dez, cinco, dois, um;

    cem = valor / 100;
    rest = valor % 100;
    cinquenta = rest / 50;
    rest = rest % 50;
    vinte = rest / 20;
    rest = rest % 20;
    dez = rest / 10;
    rest = rest % 10;
    cinco = rest / 5;
    rest = rest % 5;
    dois = rest / 2;
    rest = rest % 2;
    um = rest / 1;
    rest = rest % 1;

    printf("\nO valor %d e:\n%d nota(s) de R$100\n%d nota(s) de R$50\n%d nota(s) de R$20\n%d nota(s) de R$10\n%d nota(s) de R$5\n%d nota(s) de R$2\n%d nota(s) de R$1\n", valor, cem, cinquenta, vinte, dez, cinco, dois, um);

}






int main (){

    int opcao = 1;

    do{

        printf("\nDigite a opcao ou '0' para encerrar:\n");
        printf("\n\t[1] [2] [3] [4]... [20]\n\n");
        scanf("%d", &opcao);
        getchar();


        switch(opcao){

        case 0:
            printf("\nEncerrar . . . ");
            break;

        case 1:
            metodo_01();
            break;

        case 2:
            metodo_02();
            break;

        case 3:
            metodo_03();
            break;

        case 4:
            metodo_04();
            break;

        case 5:
            metodo_05();
            break;

        case 6:
            metodo_06();
            break;

        case 7:
            metodo_07();
            break;

        case 8:
            metodo_08();
            break;

        case 9:
            metodo_09();
            break;

        case 10:
            metodo_10();
            break;

        case 11:
            metodo_11();
            break;

        case 12:
            metodo_12();
            break;

        case 13:
            metodo_13();
            break;

        case 14:
            metodo_14();
            break;

        case 15:
            metodo_15();
            break;

        case 16:
            metodo_16();
            break;

        case 17:
            metodo_17();
            break;

        case 18:
            metodo_18();
            break;

        case 19:
            metodo_19();
            break;

        case 20:
            metodo_20();
            break;

        case 21:
            metodo_21();
            break;

        default:
            printf("Opcao invalida . . .");
            break;
        }

    } while(opcao != 0);

    return 0;
}