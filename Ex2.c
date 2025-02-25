#include <stdio.h>

int main() {
    int num1;
    int num2;
    
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    
    if(num1 > num2) {
        printf("Maior:%d\n", num1);
        printf("Menor:%d", num2);
    }
   
   if(num2 > num1) {
        printf("Maior:%d\n", num2);
        printf("Menor:%d", num1);
    }
    
    if(num1 == num2) {
        printf("Iguais");
       
    }
    
   return 0;
}