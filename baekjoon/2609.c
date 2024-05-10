#include <stdio.h>

int x(int a, int b){

    int c;

    while(b!=0){
        c = a % b;
        a=b;
        b=c;
    }
    return a;
}

int y(int a, int b){
    int x,y;
    int temp;

    y=(a>b)?a:b;

    for(x=y;;x++){
        if(x%a==0 && x%b==0){
            temp = x;
            break;
        }
    }
    return temp;
}

int main(){
    int a,b;

    scanf("%d %d", &a, &b);
    printf("%d\n%d",x(a,b),y(a,b));
}
