#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\n Introduza a palavra passe: \n");
    gets(buff);

    if(strcmp(buff, "thegeekstuff")) {
        printf ("\n Palavra passe errada. \n");
    } else {
        printf ("\n Palavra passe correcta. \n");
        pass = 1;
    }

    if(pass) {
       /* Agora, atribuir privilegios administrador ao utilizador */
        printf("\n Privilegios administrador dados ao utilizador\n");
    }
    return 0;
}
