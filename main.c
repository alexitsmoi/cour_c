#include <stdio.h>
#include <stdlib.h>

int maine()
{
    int n=10, p=5, q=10, r;
    r = n == (p=q);
    printf ("A : n = %d p = %d q =%d r =%d\n",n,p,q,r);
    // A : n= 10 p = 10 q= 10 r = 1
    n = p = q = 5;
    n += p =+ q;
    printf("B : n = %d P = %d q = %d\n", n,p,q);
    //B : n =15 P = 10 q= 5
    q = n < p ? n++ : p++;
    printf("C = %d p = %d q = %d\n", n,p,q);
    //C : n = 15 p = 11  q = 10
    q = n > p ? n++ : p++ ;
    printf ("D : n = %d p = %d q = %d\n", n, p,q);
    //D : n =16 P = 11 q = 15
}
