#include <stdio.h>
#include <math.h>

int main(){
    int a,b,x=0;
    scanf("%i %i", &a,&b);
    while(a==b || x==9){
        a=a*2;
        b=b*2;
        x+=1;
    }
    if(a!=b){
        printf("tristemil");
    }else{
        printf("felizmil");
    }
    return 0;
}