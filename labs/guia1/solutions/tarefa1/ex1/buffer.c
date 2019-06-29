#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[517];
    FILE *file, *filenew;
    char nome[] = "nuno";

    /* inicializa o buffer a zeros */
    memset(buffer, 0, sizeof(buffer));

    /* le conteudo do ficheiro 'myfile' para o buffer */
    file = fopen("myfile", "r");
    if (file == NULL) {
        printf("Erro ao ler do ficheiro 'myfile'.\n");
        return -1;
    }
    fread(buffer, sizeof(char), 517, file);

    /* escreve conteudo do buffer no ecra */
    printf("%s\n", buffer);

    /* escreve conteudo em novo ficheiro */
    filenew = fopen("mynewfile", "w");
    if (filenew == NULL) {
        printf("Erro ao abrir o ficheiro 'mynewfile'.\n");
        return -1;
    }
    fwrite(nome, sizeof(char), strlen(nome), filenew);
    fwrite(buffer, sizeof(char), 517, filenew);
 
    return 0;
}
