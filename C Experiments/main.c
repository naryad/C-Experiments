//
//  main.c
//  C Experiments
//
//  Created by Narendra Yadala on 02/08/13.
//  Copyright (c) 2013 Narendra Yadala. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;            /* A normal integer*/
    int *p;           /* A pointer to an integer ("*p" is an integer, so p
                       must be a pointer to an integer) */
    
    p = &x;           /* Read it, "assign the address of x to p" */
    scanf( "%d", &x );          /* Put a value in x, we could also use p here */
    
    printf( "*p = %d\n", *p ); /* Note the use of the * to get the value */
    printf("*&x = %d\n", *&x);
    printf("x = %d\n", x);
    
    printf( "p = %p\n", p);
    printf( "&x = %p\n", &x);
    
    printf( "sizeof(*p) = %lu\n", sizeof(*p));
    printf( "sizeof(x) = %lu\n", sizeof(x));
    
    printf( "&p = %p\n", &p);
    
    getchar();
}