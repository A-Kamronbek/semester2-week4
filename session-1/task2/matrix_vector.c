
/*
 * Matrix-vector product
 */

#include <stdio.h>

int main( void ) {
   float a[4][4];
   float b[4];
   float c[4];

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

   
   
   return 0;
}
