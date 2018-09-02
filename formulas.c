#include <stdio.h>
#include <stdlib.h>

float formulaY(float x);
float formulaZ(float x);
float x;
float resultado;

int main(){
    scanf("%f", &x);
    resultado=formulaZ(x);
    printf("%d", resultado);
    return 0;
}

float formulaZ(float x){
    float dividendo,divisor,res;
    dividendo=(formulaY(x)*formulaY(x))+(x*(x-2*(formulaY(x))));
    divisor=x*formulaY(x);
    res=dividendo/divisor;
    return res;
}

float formulaY(float x){
    float dividendo,divisor,res;
    dividendo=x+5;
    dividendo=2*(x+1);
    res=dividendo/divisor;
    return res;
}