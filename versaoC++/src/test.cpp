#include <stdio.h>
#define TAMANHO 10

int eh_primo(int A){
    int eh_primo = 1;
    for(int i=2;i<A;i++)
        if(A%i == 0)
            eh_primo = 0;
    return eh_primo;
}

int main(int argc, char *argv[]) {
    int A[TAMANHO];
    int B[TAMANHO];

    for(int i=0; i<TAMANHO; i++){
    printf("Inserir o valor (%d/%d) : ",i+1,TAMANHO);
    scanf("%d",A+i);
    }


    for(int i=0; i<TAMANHO; i++){
        if(eh_primo(A[i]))
            B[i] = 1;
        else
            B[i] = 0;
    }

    for(int i=0; i<TAMANHO; i++){
        printf("o numero %d eh ", A[i]);
        if(B[i] == 0)
            printf("não primo\n");
        else
            printf("primo\n");
    }

    return 0;
}