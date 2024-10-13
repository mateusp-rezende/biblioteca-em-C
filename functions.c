
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "functions.h"

/* os exercicios não estão sendo executados em sequencia, pois achei mais organizado chamar 
as funções de criar vetor e matriz antes das funções ler,escrever e incrementar os mesmos
*/
/*lista 1*/
//ex1
void linha() {
    for (int i = 0; i < 50; i++) {
        printf("=");
    }
    printf("\n"); 
}

//ex2
void linha2(char caractere) {
    for (int i = 0; i < 50; i++) {
        printf("%c", caractere);
    }
    printf("\n"); 
}
//ex3 

void desenha_retangulo_solido(int l, int c, char caractere) {
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c", caractere);
        }
          printf("\n"); 
    }
    
}
//ex4
void desenha_retangulo(int l, int c, char caractere) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || i == l - 1 || j == 0 || j == c - 1) {
                printf("%c", caractere); 
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }
}
//ex5
void desenha_retangulo_preenchido(int l, int c, char caractere, char caractere2) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || i == l - 1 || j == 0 || j == c - 1) {
                printf("%c", caractere); 
            } else {
                printf("%c", caractere2); 
            }
        }
        printf("\n");
    }
}

/*lista 2*/

//ex1
void area_circulo (float raio){
    printf("area: %.2f\n",  3.14 * raio *raio);   
}

//ex2
void volume_esfera (float raio){
    printf("volume: %.2f\n",  ((4.0 * 3.14 )* raio * raio * raio)/3);
    
}
//ex3
void media (float n1, float n2, float n3){
    printf("MEDIA: %.2f\n", (n1+n2+n3)/3);
    
}
//ex4
int nome_mes (int numero){
   
   switch ( numero)
   {
   case 1:
   printf("janeiro\n");
    break;
    case 2:
   printf("fevereiro\n");
    break;
    case 3:
   printf("marco\n");
    break;
    case 4:
   printf("abril\n");
    break;
    case 5:
   printf("maio\n");
    break;

    case 6:
   printf("junho\n");
    break;
    case 7:
   printf("julho\n");
    break;
    case 8:
   printf("agosto\n");
    break;
    case 9:
   printf("setembro\n");
    break;

    case 10:
   printf("outubro\n");
    break;

  case 11:
   printf("novembro\n");
    break;

    case 12:
   printf("dezembro\n");
    break;
   
  default :
    printf ("Valor invalido!\n");
  }
  getchar();

  return 0;
   }
//ex5
double log_base(double a, double b) {
   
    double log_a = log(a);
    double log_b = log(b);
    double result = log_a / log_b;
    
    return result;
}
//ex6
int fatorial(int n) {
     int r = 1; 
    for (int i = n; i > 1; i--) {
        r *= i; 
    }
    return r;
}
//ex7
int ehPrimo(int n) {
    if (n <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }

    return 1; 
}
//ex8

int fibonacci(int i) {
    if (i == 0) {
        return 0;
    } else if (i == 1) {
        return 1;
    } else {
        int a = 0; 
        int b = 1; 

        for (int j = 2; j <= i; j++) {
            int temp = a + b;
            a = b;
            b = temp;
        }

        return b; 
    }
}
//ex9

int Regular(int num) {
    
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }

    return (num == 1);
}
//ex10
int combinacao(int n, int p) {
    int np = n - p;
    float c = fatorial(n) / (fatorial(p)* fatorial(np));

    return c;
}
/* lista 3*/
//ex1
int consoante(char consoante){
    if(consoante == 'a' || consoante == 'e' || consoante == 'i' || consoante == 'o' || consoante == 'u' ||consoante == 'A' || consoante == 'E' || consoante == 'I' || consoante == 'O' || consoante == 'U'){
       
        return 0;
    }else{
      
        return 1;
    }

 }

//ex2
int Minuscula(char letra){
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
          return 1;
    }else{
        return 0;
    }
}

//ex3
bool Letras(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool ehPalindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        while (!Letras(str[inicio])) {
            inicio++;
        }
        while (!Letras(str[fim])) {
            fim--;
        }

        if (tolower(str[inicio]) != tolower(str[fim])) {
            return false;
        }

        inicio++;
        fim--;
    }

    return true;
}

//ex4
int ehPerfeito(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return (soma == num);
}

void exibirFatores(int num) {
    printf("%d =", num);
    int num2 = num; // para nao imprimir o '+' depois do ultimo numero
    for (int i = 1; i < num; i++) {

        
        if (num % i == 0) {
            printf(" %d", i);
            if (i != num2/2) {
                printf(" + ");
            }
        }
    }
    printf("\n");
}

//ex5
void  reescreve_maiuscula(char *palavra) {
    int i = 0;
    while (*(palavra+i) != '\0'){
        if (*(palavra+i) >= 0x61 && *(palavra+i) <= 0x7A) 
            *(palavra+i) -= 0x20;
    i++;
            
    }
}

//ex6
void reescreve_minuscula(char *palavra) {
    int i = 0;
    while (*(palavra + i) != '\0') {
        if (*(palavra + i) >= 0x41 && *(palavra + i) <= 0x5A)  
            *(palavra + i) += 0x20;  
        i++;
    }
}

//ex7
void caixa_com_texto_centralizado(char *S, int N, char C) {
    int largura_texto = strlen(S);
    int largura_interna = N - 2;

    if (largura_texto > largura_interna) {
        S[largura_interna] = '\0';
        largura_texto = largura_interna;
    }

    for (int i = 0; i < N; i++) {
        printf("%c", C);
    }
    printf("\n");

    int espacos_esquerda = (largura_interna - largura_texto) / 2;
    int espacos_direita = largura_interna - largura_texto - espacos_esquerda;

    printf("%c", C);
    for (int i = 0; i < espacos_esquerda; i++) {
        printf(" ");
    }
    printf("%s", S);
    for (int i = 0; i < espacos_direita; i++) {
        printf(" ");
    }
    printf("%c\n", C);

    for (int i = 0; i < N; i++) {
        printf("%c", C);
    }
    printf("\n");
}



/*lista 4*/
//ex8 

int* criarVetor(int tamanhoVet){
    int *vetor = (int*)malloc(sizeof(int)* tamanhoVet);
    if (vetor == NULL) {
        printf("ERROR!!! valores invalidos.\n");
        exit(1); // Encerra o programa com erro
    }

    return vetor;
}

//ex1
void lerVetor(int *vetor, int quantidade) {
    
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &vetor[i]);
    }
}
//ex2
void escreverVetor(int *vetor, int quantidade) {
   
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
//ex3
void incrementarVetor(int *vetor,int quantidade) {
   
    //incrementador
    for (int i = 0; i < quantidade; i++) {
        vetor[i] += 1; 
    }

    escreverVetor(vetor, quantidade);
}

//ex4

void maiorIndice(int *vetor, int quantidade,  int *indiceMaior, int *indiceMenor){

  int maior = vetor[0];
    int menor = vetor[0];
    bool todosIguais = true;

    for (int i = 1; i < quantidade; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            todosIguais = false;
        } else if (vetor[i] < menor) {
            menor = vetor[i];
            todosIguais = false;
        }
    }

    // Encontrar os índices do maior e menor elementos
    for (int i = 0; i < quantidade; i++) {
        if (vetor[i] == maior) {
            *indiceMaior = i;
        } else if (vetor[i] == menor) {
            *indiceMenor = i;
        }
    }

    
    if (todosIguais) {
        *indiceMaior = 0;
        *indiceMenor = 0;
    }
    

}

//ex9

int **criarMatriz(int linhas, int colunas) {
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    return matriz;
}

//ex5
void lerMatriz(int **matriz, int linhas, int colunas) {
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}



// ex6
void escreverMatriz(int **matriz, int linhas, int colunas) {
      
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("| %d |", matriz[i][j]);
        }
        printf("\n");
    }
}

//ex7

void incrementarMatriz(int **matriz, int linhas, int colunas){
     
     for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] += 1;
        }
    }
    escreverMatriz(matriz,linhas, colunas);
    
}

//ex10

void calcularAprovados(int **matriz, int linhas, int **aprovados, int *qtd_aprovados) {
    *qtd_aprovados = 0; // Inicializa a quantidade de aprovados

    // Aloca memória para o vetor de aprovados com tamanho inicial 0
    *aprovados = (int *)malloc(0 * sizeof(int));

    for (int i = 0; i < linhas; i++) {
        int matricula = matriz[i][0];
        float media = matriz[i][1] * 0.4 + matriz[i][2] * 0.6;

        if (media >= 5) {
            // Realoca memória para o vetor de aprovados, aumentando o tamanho em 1
            *aprovados = (int *)realloc(*aprovados, (*qtd_aprovados + 1) * sizeof(int));
            (*aprovados)[*qtd_aprovados] = matricula;
            (*qtd_aprovados)++;
            
        }
    }

}



