#include <stdio.h>

int main() {
    int x = 
   
    printf("Digite o Número:");
    scanf("%d", &x);
    
    int divisao = x / 2;
    int resto = x % 2;

    if(resto !=0) {
    printf("Impar\n");
    }
    
     if(resto ==0) {
    printf("Par\n");
    }
    
    printf("Divisao: %d\n", divisao);
    printf("Resto: %d", resto);
    return 0;
}