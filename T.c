#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(x>=y && y>=z && x>=z) printf("%d\n%d\n%d\n", z, y, x);
    else if(x>=y && y<=z && x>=z) printf("%d\n%d\n%d\n", y, z, x);
    else if(x<=y && y>=z && x>=z) printf("%d\n%d\n%d\n", z, x, y);
    else if(x<=y && y>=z && x<=z) printf("%d\n%d\n%d\n", x, z, y);
    else if(x>=y && y<=z && x<=z) printf("%d\n%d\n%d\n", y, x, z);
    else if(x<=y && y<=z && x<=z) printf("%d\n%d\n%d\n", x, y, z);

    printf("\n%d\n%d\n%d\n", x, y, z);
    return 0;
}
