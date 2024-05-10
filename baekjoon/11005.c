#include<stdio.h>
int main(){
    int a[100];
    int b = 0;
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y); 

    while (x!=0){
        a[b++] = x % y;
        x /= y;
    }
    for (int i = b - 1; i >= 0; i--){
        if (a[i] > 9 && y > 10)
        {
            printf("%c", 'A' + a[i] - 10);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
}
