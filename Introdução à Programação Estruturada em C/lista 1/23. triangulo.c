#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num1, num2, num3;

    printf("Informe os lados do tri�ngulo:\n");
    printf("Lado 1:");
    scanf("%d", &num1);
    
    printf("Lado 2:");
    scanf("%d", &num2); 
  
    printf("Lado 3:");
    scanf("%d", &num3);

    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1) {
        printf("Formam um tri�ngulo ");
        
        if (num1 == num2 && num2 == num3) {
            printf("Equil�tero");
        }else if (num1 == num2 || num2 == num3 || num3 == num1){
            printf ("Is�sceles");
        }else {
            printf("escaleno");
        }
    }    
        else {
        printf("N�o formar um tri�ngulo.");
        }
    
    return 0;
}
