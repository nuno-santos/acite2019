#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[517];
    FILE *file;

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
    return 0;
}
