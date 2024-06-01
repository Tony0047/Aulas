#include <stdio.h>
#include <stdlib.h>

int main() {

    float temperatura;
    char escala;

    printf("Temperatura: ");
    scanf("%f", &temperatura);

    printf("Escala de temperatura\n(C, F ou K): ");
    scanf(" %c", &escala);

    switch (escala) {
        case 'C':
        case 'c':
            {
            printf("qual a escala desejada?\n(F ou K): ");
            scanf(" %c", &escala);

            if (escala == 'F' || escala == 'f') {
                float fahrenheit = (temperatura * 9 / 5) + 32;
                printf("%2.f graus Celsius equivalem a:", temperatura);
                printf(" %.2f graus Fahrenheit", fahrenheit);
            } else if (escala == 'K' || escala == 'k') {
                float kelvin = temperatura + 273.15;
                printf("%2.f graus Celsius equivalem a:", temperatura);
                printf(" %.2f Kelvin", kelvin);
            } else {
                printf("Escala inv�lida.");
            }
            break;
            }

        case 'F':
        case 'f':
            {
            printf("qual a escala desejada?\n(C ou K): ");
            scanf(" %c", &escala);

            if (escala == 'C' || escala == 'c') {
                float celsius = (temperatura - 32) * 5 / 9;
                printf("%.2f graus Fahrenheit equivalem a:", temperatura);
                printf(" %.2f graus Celsius", celsius);
            } else if (escala == 'K' || escala == 'k') {
                float celsius = (temperatura - 32) * 5 / 9;
                float kelvin = celsius + 273.15;
                printf("%.2f graus Fahrenheit equivalem a:", temperatura);
                printf(" %.2f Kelvin", kelvin);
            } else {
                printf("Escala inv�lida.\n");
            }
            break;
            }

        case 'K':
        case 'k':
            {
            printf("qual a escala desejada?\n(C ou F): ");
            scanf(" %c", &escala);

            if (escala == 'C' || escala == 'c') {
                float celsius = temperatura - 273.15;
                printf("%.2f Kelvin equivalem a:", temperatura);
                printf(" %.2f graus Celsius", celsius);
            } else if (escala == 'F' || escala == 'f') {
                float celsius = temperatura - 273.15;
                float fahrenheit = (celsius * 9 / 5) + 32;
                printf("%.2f Kelvin equivalem a:", temperatura);
                printf(" %.2f graus Fahrenheit", fahrenheit);
            } else {
                printf("Escala inv�lida.");
            }
            break;
            }

        default:
            printf("Escala inv�lida.\n");
    }

    return 0;
}
