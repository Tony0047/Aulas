#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int primo;
    
    printf("Digite o n�mero: ");
    scanf("%d", &primo);
    
    if (primo <=1) {
        printf("%d N�o � primo\n", primo);
        return 0;
    }
    
    if (primo == 2) {
        printf("%d � primo\n", primo);
        return 0;
    }
    
    if (primo == 3) {
        printf("%d � primo\n", primo);
        return 0;
    }
    
    if (primo == 5) {
        printf("%d � primo\n", primo);
        return 0;
    }
    
    if (primo == 7) {
        printf("%d � primo\n", primo);
        return 0;
    }    
    
    if (primo % 2 == 0) {
        printf("%d N�o � primo\n", primo);
        return 0;
    }
    
    if (primo % 3 == 0) {
        printf("%d N�o � primo\n", primo);
        return 0;
    }
    
    if (primo % 5 == 0) {
        printf("%d N�o � primo\n", primo);
        return 0;
    }
    
    if (primo % 7 == 0) {
        printf("%d N�o � primo\n", primo);
        return 0;
    }

    printf("%d � primo\n", primo);
    
    return 0;
}