#include <stdio.h>
int main(){ 
    int a, b;
    long long x = 0, y = 1000001;
    
    scanf("%d", &a);

    for(int i = 0; i < a; i++)
    {
        scanf("%d", &b);

        if(b > x)
        {
            x = b;
        }
        if(b < y)
        {
            y = b;
        }
    }
    printf("%lld", x * y);
}
