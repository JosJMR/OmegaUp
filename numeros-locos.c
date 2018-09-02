#include <stdio.h>
#include <stdlib.h>

int n, i;
int aux=0;
int sum=0;
int ss=0;

int main(){
    scanf("%d", &n);
    scanf("%d", &i);
    int nl[50];
    for(int k=0; k<i; k++){
        scanf("%d", nl[k]);
    }
    for(int s=0; s<(i-1); s++){
        if(((nl[s]+nl[s+1])%n)==0);{
            aux+=1;
            ss+=1;
        }
    }
    if(((nl[ss]+nl[0])%n)==0){
        aux+=1;
    }
    printf("%d", aux);
    return 0;
}