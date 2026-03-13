
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;
    int d;

    a = calloc(n, sizeof(float *));
    b = calloc(n, sizeof(float));
    c = calloc(n, sizeof(float));

    for (int i=0; i<n; ++i){
        a[i] = calloc(n, sizeof(float));
    }

    for (int k=0; k<n; ++k){
        for (int j=0; j<n; ++j){
            a[k][j] = 1;
        }
        b[k] = 1;
    }

    for (int k=0; k<n; ++k){
        d = 0;
        for (int j=0; j<n; ++j){
            d = d + (a[k][j]*b[j]);
        }
        c[k] = d;
        printf("%f\n", c[k]);

    }

    free(a);
    free(b);
    free(c);
    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
    
    return 0;
 }
