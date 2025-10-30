#include <stdio.h>

#define MAX_DIRECOES 4;

const int cima = 1;
const int baixo = 2;
const int esquerda = 3;
const int direita = 4;

    int main () {

        int direcao; 
        int 1;

        printf ("==== estrutura For==== \n");
        for (i = 1; i <=MAX_DIRECOES; 1++); {
            direcao = 1;
            switch (direcao)
            {
            case 1: printf("cima /n"); break;
            case 2: printf("baixo /n"); break;
            case 3: printf ("direita /n");break;
            case 4: printf ("esquerda /n");break;
            default: printf ("direcao desconhecida /n");break;
            }
        }

        printf ("\n==== estrutura While==== /n");
        i = 1; 
        while (i <= MAX_DIRECOES)
        direcao = i;

        switch (direcao)
        {
        case 1: printf ("cima /n");break;
        case 2: printf ("baixo /n"); break;
        case 3: printf ("direita /n"); break;
        case 4: printf ("esquerda /n"); break;
                
        }
        i++;

        printf ("n==== estrutura do while ====/n");
        i=1;
        do
        direcao = i;
        switch (direcao){
        case 1: printf ("cima /n");break;
        case 2: printf ("baixo /n");break;
        case 3: printf ("direita /n"); break;
        case 4: printf ("esquerda /n"); break;
        
        
        }
        
        i++;
        } while (1 <MAX_DIRECOES);

        printf ("n/fim da execução. /n");


        
        return 0;