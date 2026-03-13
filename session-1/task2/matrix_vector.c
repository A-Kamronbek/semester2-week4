
/*
 * Matrix-vector product
 */

#include <stdio.h>

int main( void ) {
   float a[4][4];
   float b[4];
   float c[4];
   float d;

   /*
   Intialise the matrix a and vector b entries to 1. 
   Write code to compute the product.
   Store your answer in vector c
   Print your final answer
   */
   for (int k=0; k<4; ++k){
      for (int j=0; j<4; ++j){
         a[k][j] = 1;
      }
      b[k] = 1;
   }

   for (int k=0; k<4; ++k){
      d = 0;
      for (int j=0; j<4; ++j){
         d = d + (a[k][j]*b[j]);
      }
      c[k] = d;
      printf("%f\n", c[k]);
   }
   
   return 0;
}
