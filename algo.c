#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int Q = 4,M = 2;
    int n = 3;  
    int A = 0;
    A = A<<1;
    if (n==0) {

    }
    Q = Q<<1;
    M = M<<1;  
    A = A-M;
    printf("%d %d %d\n",A, Q, M);
    

return 0;
}