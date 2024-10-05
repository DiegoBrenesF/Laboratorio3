#include <stdio.h>
#include <stdlib.h>

int factorial (int n){
   int i=1;
   while (n>1){
        i=i*n;
        n=n-1;
   }
   return i;
}

int main (int argc, char *argv[]){
   printf ("\n");

   if (argc != 2){
     printf ("Formato de uso: %s  <numero>", argv[0]);
     printf ("\n");
     printf ("\n");
     return 1;
   }

   int num=atoi(argv[1]);

   if (num < 0){
     printf ("El numero ingresado debe ser mayor o igual a cero");
     printf ("\n");
     printf ("\n");
     return 1;
   }

   if (num==0){
     printf("0! = 1");
     printf ("\n");
     printf ("\n");
     return 0;
   }

   int result = factorial(num);

//   int fac4=factorial(4);
//   int fac5=factorial(5);

   printf("%d! = %d", num, result);
   printf ("\n");
   printf ("\n");
   return 0;
}
