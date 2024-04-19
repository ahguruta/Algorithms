#include <stdio.h> 

int main(){
    int a;
    scanf("%d", &a);

    int x = 0, y = 0,z = a;

    while (1) {
        x = (a % 10) * 10 + ((a / 10 + a % 10) % 10);
        a = x;
        y++;
        if (x == z)
            break;
    }

    printf("%d", y);
}
