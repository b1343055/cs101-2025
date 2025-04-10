/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int factorial(int n) {
    if (n== 1) return 1;
    return n * factorial(n-1);
    }
    
int main() {
    int n = 5;
    int m = factorial(n);
    printf("factorial %d = %d\n", n, m);
    return 0;
}