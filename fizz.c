/**
 * fizz.c
 *
 * Koren Leslie Cohen
 *
 * FizzBuzz.
 */
 
 // standard libraries
 #include <stdio.h>

/*
* Prints numbers 1-100.  For numbers divisible by 3, print "fizz."  
* For numbers divisible by 5, print "buzz."  For numbers divisible by
* 3 and 5, print "fizzbuzz."
*/
int main (void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (((i % 3) == 0) && ((i % 5) == 0))
        {
            printf("fizzbuzz\n");
        }
        else if ((i % 3) == 0)
        {
            printf("fizz\n");
        }    
        else if ((i % 5) == 0)
        {
            printf("buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
