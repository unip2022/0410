#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[40];
    int x, tam;
    printf("Digite uma frase: ");
    FILE *f = fopen("letras.txt", "w");
    gets(frase);
    tam=strlen(frase);
    while(tam>40)
    {
        printf("Frase maior que 40 caracteres inaceitavel.\n");
        printf("Coloque uma frase menor que 40 caracteres:\n");
        gets(frase);
        tam=strlen(frase);
    }
    printf("\n\n");
    for(x=0;x<=tam;x++)
    {
        printf("%c", frase[x]);
        fputs(f,"%c\n", frase[x]);
        printf("\n\n");
        system("pause");
    }
    fclose(f);

    return 0;
}
