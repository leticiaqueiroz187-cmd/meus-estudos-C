#include <stdio.h>
int main (){
    int nota;
    
    scanf("%d", &nota);
    
    if(nota >= 7){
        printf("Aprovado");
    }
    else if(nota >=5){
        printf("Recuperação");
    }
    else {
        printf("Reprovado");}
    }