#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZO 3
#define SZW 4
#define SZH 5

void mostrar (int n, int matriz[][n]){
    for (int i=0; i<n; i++){
       for (int j=0; j<n; j++){
          printf ("%d ", matriz[i][j]);
       }
       printf ("\n");
    }
}

void llenar (int n, int matriz[][n]){
    for (int i=0; i<n; i++){
       for (int j=0; j<n; j++){
          matriz[i][j]=rand()%10;
       }
    }
}

void diagonales (int n, int matriz[][n]){
    int suma=0;
    printf ("La diagonal principal de la matriz es: ");
    for (int i=0; i<n; i++){
       printf ("%d ", matriz[i][i]);
       suma=suma+matriz[i][i];
    }
    printf ("\n");
    printf ("La diagonal secundaria de la matriz es: ");
    for (int i=0; i<n; i++){
       printf ("%d ", matriz[i][n-i-1]);
       suma=suma+matriz[i][n-i-1];
    }
    printf ("\n");
    printf ("La suma de las diagonales es: %d ", suma);
    printf ("\n");
}

int main (void){
   srand(time(0));
   int matriz1 [SZO][SZO];
   int matriz2 [SZW][SZW];
   int matriz3 [SZH][SZH];
   printf ("\n");
   llenar (SZO, matriz1);
   mostrar (SZO, matriz1);
   diagonales (SZO, matriz1);
   printf ("\n");
   llenar (SZW, matriz2);
   mostrar (SZW, matriz2);
   diagonales (SZW, matriz2);
   printf ("\n");
   llenar (SZH, matriz3);
   mostrar (SZH, matriz3);
   diagonales (SZH, matriz3);
   printf ("\n");
   return 0;
}
