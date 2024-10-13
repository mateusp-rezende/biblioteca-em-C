#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

void menu()
{
    printf("\nMenu de funcoes:\n");
    linha2('*');
    printf("1. Calcular a Area de um circulo\n");
    printf("2. Calcular Volume de uma esfera\n");
    printf("3. Calcular a Media de notas\n");
    printf("4. Nome dos meses\n");
    printf("5. Calcular Logaritmo\n");
    printf("6. Calcular Fatorial\n");
    printf("7. Achar um numero primo\n");
    printf("8. Calcular a sequencia fibonacci\n");
    printf("9. Numeros regulares\n");
    printf("10. Combinacao\n");
    printf("11. Verificar se uma letra e uma consoante\n");
    printf("12. Verificar se uma letra minuscula e uma vogal\n");
    printf("13. Verificar se uma palavra ou frase e um palindromo\n");
    printf("14. Exibir numeros perfeitos entre 1 e 10000\n");
    printf("15. Reescrever uma palavra em minuscula\n");
    printf("16. Reescrever uma palavra em maiuscula\n");
    printf("17. Manipulador de Vetor\n");
    printf("18. Manipulador de Matriz\n");
    printf("19. Calcular Media e mostrar aprovados\n");
    printf("0. Sair\n");
    linha2('*');
    printf("\n");
}

int main()
{

    desenha_retangulo_solido(4, 50, '=');
    caixa_com_texto_centralizado("MATEUS ", 50, '-');
    printf("\n");
    caixa_com_texto_centralizado("DE PAULA ", 50, '-');
    printf("\n");
    caixa_com_texto_centralizado("REZENDE", 50, '=');
    desenha_retangulo(3, 50, '_');
    printf("MINHA PROPRIA BIBLIOTECA EM C\n");
    desenha_retangulo_preenchido(3, 50, '_', '#');
    linha2('_');
    caixa_com_texto_centralizado(" TEC.PROGRAMACAO ", 50, ' ');
    caixa_com_texto_centralizado(" PUC GOIAS ", 50, ' ');
    linha2('_');
    menu();
    int opcao;
   
    do {
          printf("digite 0 para sair ou 99 para ver menu de funcoes;)\n\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Por favor, insira um numero.\n");
           while (getchar() != '\n'); 
        } 
        else
         {
        switch (opcao)
        {
        case 1:;

            float raio_circulo;

            printf("Digite o raio do circulo: ");
            scanf("%f", &raio_circulo);
            area_circulo(raio_circulo);
            break;
        case 2:;
            float raio;
            printf("digite o raio do esfera: ");
            scanf("%f", &raio);
            volume_esfera(raio);
            break;
        case 3:;
            float n1, n2, n3;
            printf("digite as notas 1, 2 e 3 respectivamente: ");
            scanf("%f%f%f", &n1, &n2, &n3);
            media(n1, n2, n3);
            break;
        case 4:;
            int numero;
            printf("digite o numero do mes:");
            getchar() != '\n'; 
            scanf("%d", &numero);
            nome_mes(numero);
            break;
        case 5:;
            double log, base;

            printf("Digite o log (a): ");
            scanf("%lf", &log);

            printf("Digite a base (b): ");
            scanf("%lf", &base);

            double resultado_log = log_base(log, base);

            printf("O logaritmo de %.2lf na base %.2lf e %.6lf\n", log, base, resultado_log);
            break;
        case 6:;
            int num;
            printf("Digite um numero: ");
            scanf("%d", &num);
            int resultado_fatorial = fatorial(num);
            printf("O fatorial de %d e: %d\n", num, resultado_fatorial);
            break;
        case 7:;
            int valor;
            printf("Digite um numero: ");
            scanf("%d", &valor);
            if (ehPrimo(valor))
            {
                printf("%d e primo!\n", valor);
            }
            else
            {
                printf("%d nao e primo.\n", valor);
            }

            break;

        case 8:;
            int i;
            printf("Digite o valor de i: ");
            scanf("%d", &i);

            if (i < 0)
            {
                printf("O valor de i deve ser maior ou igual a 0.\n");
            }
            else
            {
                printf("O %d-esimo termo da serie de Fibonacci e: %d\n", i, fibonacci(i));
            }

            break;
        case 9:;
            int numero_regular;
            printf("Digite um numero: ");
            scanf("%d", &numero_regular);

            if (Regular(numero_regular))
            {
                printf("%d e um numero regular\n", numero_regular);
            }
            else
            {
                printf("%d nao e um numero regular\n", numero_regular);
            }
            break;
        case 10:;
            int n, p;

            scanf("%d%d", &n, &p);
            fatorial(n);
            float resultado_combinacao = combinacao(n, p);
            printf("C(%d, %d) = %f\n", n, p, resultado_combinacao);
            break;
        case 11:;
        
            char letra;
            printf("LETRA: ");
            scanf("%c", &letra);
            if (consoante(letra))
            {
                printf("E uma consoante.\n");
            }
            else
            {
                printf("Nao e uma consoante.\n");
            }
            break;

        case 12:;
       
            char vogal;
             getchar() != '\n';
             printf("LETRA: ");

            scanf("%c", &vogal);
            if (Minuscula(vogal))
            {
                printf("E uma vogal minuscula.\n");
            }
            else
            {
                printf("Nao e uma vogal minuscula.\n");
            }
            break;
        case 13:;
 
            char entrada[100];
             getchar() != '\n';
            printf("Digite uma palavra ou frase: ");
            scanf("%99[^\n]", entrada);

            if (ehPalindromo(entrada))
            {
                printf("%s E um palindromo!\n", entrada);
            }
            else
            {
                printf("%s Nao e um palindromo.\n", entrada);
            }
            break;
        case 14:;
            printf("Numeros perfeitos entre 1 e 10000:\n");

            for (int i = 1; i <= 10000; i++)
            {
                if (ehPerfeito(i))
                {
                    exibirFatores(i);
                }
            }
            break;

            char string[100];

        case 15:;
         getchar() != '\n';
            printf("PALAVRA: ");
            scanf("%99[^\n]", string);

            reescreve_minuscula(string);
            printf("%s", string);
            printf("\n");
            break;
        case 16:;
           getchar() != '\n'; 

            printf("PALAVRA: ");
            scanf("%99[^\n]", string);

            reescreve_maiuscula(string);
            printf("%s", string);
            printf("\x0a");
            break;
        case 17:;
            int quantidade;
            linha();
            printf("Digite a quantidade de elementos do vetor: ");
            scanf("%d", &quantidade);

            int *vetor = criarVetor(quantidade);
            printf("vetor criado com sucesso!\n");
            linha();
            printf("preencha o vetor:");
            lerVetor(vetor, quantidade);
            linha();
            escreverVetor(vetor, quantidade);
            linha();

            printf("\n Vetor incrementado\n");
            incrementarVetor(vetor, quantidade);
            free(vetor);
            linha();

            int maior, menor;

            maiorIndice(vetor, quantidade, &maior, &menor);

            printf("O maior indice e: %d\n", maior);
            printf("O menor indice e: %d\n", menor);
            linha();

            break;
        case 18:;
            int linhas, colunas;
            int **matriz;

            printf("Insira o numero de linhas e colunas:\n");
            scanf("%d %d", &linhas, &colunas);

            matriz = criarMatriz(linhas, colunas); 
            printf("Matriz criado com sucesso!\n");
            linha();
            printf("preencha a Matriz:\n");
            lerMatriz(matriz, linhas, colunas);
            linha();
            escreverMatriz(matriz, linhas, colunas);

            linha();
            printf("\nMatriz incrementada\n");

            incrementarMatriz(matriz, linhas, colunas);

            for (int i = 0; i < linhas; i++)
            {
                free(matriz[i]);
            }
            free(matriz);

            break;

        case 19:;
            printf("\nexercicio 10 sendo executado: (separar os Aprovados)\n");
            int nAlunos;
            printf("Digite o numero de alunos: ");
            scanf("%d", &nAlunos);

            int **alunos = (int **)malloc(nAlunos * sizeof(int *));
            for (int i = 0; i < nAlunos; i++)
            {
                alunos[i] = (int *)malloc(3 * sizeof(int)); // o numero 3 é quantidade de colunas
                printf("Aluno %d:\n", i + 1);
                printf("Matricula(apenas numeros): ");
                scanf("%d", &alunos[i][0]);
                printf("Nota N1: ");
                scanf("%d", &alunos[i][1]);
                printf("Nota N2: ");
                scanf("%d", &alunos[i][2]);
            }

            int *aprovados = NULL;
            int qtd_aprovados = 0;

            calcularAprovados(alunos, nAlunos, &aprovados, &qtd_aprovados);
            linha();
            printf("\n alunos aprovados:\n");
            for (int i = 0; i < qtd_aprovados; i++)
            {
                float mediafinal = (alunos[i][1] * 0.4 + alunos[i][2] * 0.6);
                printf("matricula: %d | n1: %d, n2:%d e media: %.2f\n", aprovados[i], alunos[i][1], alunos[i][2], mediafinal);
            }

            // Liberar a memória
            free(aprovados);
            for (int i = 0; i < nAlunos; i++)
            {
                free(alunos[i]);
            }
            free(alunos);

            break;
        case 99:;
            menu();
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção invalida!\n");
        }
        
        }
    } while (opcao != 0);

 
    // Pausa para manter o terminal aberto
#if defined(_WIN32) || defined(_WIN64)
    system("pause"); // Windows
#else
  printf("Pressione Enter para sair..."); 
    while (getchar() != '\n')
        ; // Linux/macOS e outros
#endif

return 0;
}