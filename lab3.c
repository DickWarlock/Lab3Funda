#include <stdio.h>

int FibonacciRecursivo(int n){
    if(n<2){
        return n;
    }
    else{
        return FibonacciRecursivo(n-1) +FibonacciRecursivo(n-2);
    }
}

int FibonacciIterativo(int n){
    int i = 1;
    int j = 0;
    int k = 0;
    for(k = 1; k<n; k++){
        j = i + j;
        i = j - i;
    }

    return j;
}

void main(){
    printf("%d", FibonacciRecursivo(13));
    printf("\n%d", FibonacciIterativo(14));
}