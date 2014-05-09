/**
 * swap.c
 *
 * Koren Leslie Cohen
 *
 * Swap two integers without using a swap function.
 */
 
 // standard libraries
 #include <stdio.h>

/*
* Swap two integers without using swap function. 
*/
int main (void)
{
    int a = 3;
    int b = 7;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: a = %d, b = %d\n", a, b); 

    return 0;
}
