#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gera_celular(const char prefixo[]);

FILE *resul;
int tamanho = 4;
unsigned long int limite = 999999;
char arquivo[100];

int main() {
    printf("Nome do arquivo: ");
    scanf("%s", arquivo);//digita o nome do arquivo
    sprintf(arquivo, "%s.txt", arquivo);//adiciona .txt no final do nome do arquivo

   // gera_celular("99");//cria uma wordlist com prefixo+ os numeros começando do 0 ate a variavel limite
    gera_celular("99");
    gera_celular("96");
    gera_celular("94");
    gera_celular("92");




    return 0;
}

void gera_celular(const char prefixo[]) {
    unsigned long int i;

    resul = fopen(arquivo, "a"); //abre arquivo

    printf("\nGerando wordlist: %s", prefixo);
    for (i = 0; i < limite+1; i++)//gera os numeros
        fprintf(resul, "%s%06li\n",prefixo, i);//PS: se você quiser criar senhas com mais digitos, onde tem %06li , basta você aumentar o numero no lugar do 6, sempre deixando o zero a esquerda

    fclose(resul);//fecha o arquivo
}
