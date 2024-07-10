#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int Q = 4; //Dividend
    int M = 2; //Divisor
    int n = 3;  //Number of Bits in dividend
    int A = 0;
    A = A<<1; //Left Shift
    Q = Q<<1; //Left Shift
    M = M<<1;  //Left Shift
    A = A-M;
    printf("%d %d %d\n",A, Q, M);
    

return 0;
}
