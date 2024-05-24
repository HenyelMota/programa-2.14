#include <stdio.h>

int main()
{
    int CLA, TIE;                // Declara las variables enteras CLA (clave) y TIE (tiempo)
    float COS;                   // Declara la variable flotante COS (costo)
    printf("Ingresa la clave y el tiempo: ");  // Pide al usuario que ingrese la clave y el tiempo
    scanf("%d %d", &CLA, &TIE);  // Lee dos valores enteros del usuario y los asigna a CLA y TIE
    switch(CLA)                  // Utiliza una estructura switch para determinar el costo según la clave
    {
        case 1: COS = TIE * 0.13 / 60; break; // Calcula el costo para la clave 1
        case 2: COS = TIE * 0.11 / 60; break; // Calcula el costo para la clave 2
        case 5: COS = TIE * 0.22 / 60; break; // Calcula el costo para la clave 5
        case 6: COS = TIE * 0.19 / 60; break; // Calcula el costo para la clave 6
        case 7:                               // No hay operación aquí, continúa con la clave 9
        case 9: COS = TIE * 0.17 / 60; break; // Calcula el costo para las claves 7 y 9
        case 10: COS = TIE * 0.20 / 60; break; // Calcula el costo para la clave 10
        case 15: COS = TIE * 0.39 / 60; break; // Calcula el costo para la clave 15
        case 20: COS = TIE * 0.28 / 60; break; // Calcula el costo para la clave 20
        default : COS = .1; break;  // Para cualquier otra clave, asigna un valor de 0.1 a COS
    }
    if (COS != .1) // Verifica si el costo es diferente de 0.1
    {
         // Si el costo es válido, imprime la clave, el tiempo y el costo
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);
    }else
    {
        // Si el costo es 0.1 (clave no válida), imprime un mensaje de error
        printf("\nError en la clave");
    }
    return 0;
}
