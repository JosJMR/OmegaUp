#include <stdio.h>
#include <stdlib.h>

int a,b;
int sum;

int main(){
    scanf("%d %d", &a, &b);
    sum=abs(a+b);
    printf("%d", sum);
    return 0;
}