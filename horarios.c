#include <stdio.h>
#include <stdlib.h>

int a,b,c,d,diferenciaH, diferenciaM;

int main(){
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if(b==d){
        diferenciaH=abs(a-c);
        diferenciaM=abs(b-d);
    }else{
        diferenciaM=(60-d)+b;
        a+=1;
        diferenciaH=abs(a-c);
    }
    printf("%d\n", diferenciaH);
    printf("%d\n", diferenciaM);
    return 0;
}