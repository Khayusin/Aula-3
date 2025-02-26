#include <stdio.h>

int conceito(float nota) {
    if (nota >= 9.0) {
        return 1;  
    }
    
    if (nota >= 8.0) {
        return 2;  
    }
    
    if (nota >= 7.0) {
        return 3;  
    }
    
    if (nota >= 6.0) {
        return 4;  
    }
    
    if (nota >= 0.0) {
        return 5;  
    }
    
    return 0;  
}

int main() {
    float nota;
    
   
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    
    int conceitoAluno = conceito(nota);
    
    if (conceitoAluno == 0) {
        printf("Nota inválida!\n");
    }
    
    if (conceitoAluno == 1) {
        printf("O conceito do aluno é: A\n");
    }
    
    if (conceitoAluno == 2) {
        printf("O conceito do aluno é: B\n");
    }
    
    if (conceitoAluno == 3) {
        printf("O conceito do aluno é: C\n");
    }
    
    if (conceitoAluno == 4) {
        printf("O conceito do aluno é: D\n");
    }
    
    if (conceitoAluno == 5) {
        printf("O conceito do aluno é: F\n");
    }