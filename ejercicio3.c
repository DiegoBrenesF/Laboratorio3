#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

void mostrar (int matriz[][SIZE]){
    for (int i=0; i<SIZE; i++){
       for (int j=0; j<SIZE; j++){
          printf ("%d ", matriz[i][j]);
       }
       printf ("\n");
    }
}

void llenar (int matriz[][SIZE]){
    for (int i=0; i<SIZE; i++){
       for (int j=0; j<SIZE; j++){
          matriz[i][j]=rand()%2;
       }
    }
}

void findLargestLine (int matriz[][SIZE]){
    int max=0;
    int sum=0;
    int ant=0;
    for (int i=0; i<SIZE; i++){
       for (int j=0; j<SIZE; j++){
          if (matriz[i][j]==1 && ant==1){
            sum++;
          }
          if (matriz[i][j]==0){
            if (sum>max){
              max=sum;
            }
            sum=0;
          }
          ant=matriz[i][j];
       }
    }
    max++;
    printf ("En la matriz hay %d unos seguidos", max);
}

int main (void){
   srand(time(0));

   int matriz [SIZE][SIZE];

   printf ("\n");

   llenar (matriz);
   mostrar (matriz);
   findLargestLine (matriz);

   printf ("\n");
   printf ("\n");

   return 0;
}
