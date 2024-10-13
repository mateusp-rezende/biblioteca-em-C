#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define bool _Bool
/*Lista 1*/
//ex1
void linha(); 
//ex2
void linha2(char caractere);
//ex3
void desenha_retangulo_solido(int l, int c, char caractere);
//ex4
void desenha_retangulo(int l, int c, char caractere);
//ex5
void desenha_retangulo_preenchido(int l, int c, char caractere, char caractere2);

/*Lista 2*/
//ex1
void area_circulo (float raio);
//ex2
void volume_esfera (float raio);
//ex3
void media (float n1, float n2, float n3);
//ex4
int nome_mes (int numero);
//ex5
double log_base(double a, double b);
//ex6
int fatorial(int n);
//ex7
int ehPrimo(int n);
//ex8
int fibonacci(int i);
//ex9
int Regular(int num);
//ex10
int combinacao(int n, int p);

/*lista 3 */
//ex1
int consoante(char consoante);
//ex2
int Minuscula(char letra);
//ex3
bool Letras(char c);

bool ehPalindromo(const char *str);
//ex4
int ehPerfeito(int num);
void exibirFatores(int num);

//ex5
void   reescreve_maiuscula(char *palavra);
//ex6
void reescreve_minuscula(char *palavra);
//ex7
void caixa_com_texto_centralizado(char *S, int N, char C);

/*Lista 4 */
//ex1
void lerVetor(int *vetor, int quantidade);
//ex2
void escreverVetor(int *vetor, int quantidade);
//ex3
void incrementarVetor(int *vetor, int quantidade);
//ex4
void maiorIndice(int *vetor, int quantidade,  int *indiceMaior, int *indiceMenor);
//ex5
void lerMatriz(int **matriz, int linhas, int colunas);
//ex6
void escreverMatriz(int **matriz, int linhas, int colunas);
//ex7
void incrementarMatriz(int **matriz, int linhas, int colunas);
//ex8
int* criarVetor(int tamanhoVet);

//ex9
int **criarMatriz(int linhas, int colunas);

//ex10
void calcularAprovados(int **matriz, int linhas, int **aprovados, int *qtd_aprovados);
#endif // FUNCTIONS_H
