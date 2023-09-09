#include <stdio.h>
#include <math.h>

int main(){
    int a, b, f, c, r;
    scanf("%d%d", &a, &b);
    double x = (double)a/b;
    f = floor(x);
    c = ceil(x);
    r = round(x);
    printf("floor %d / %d = %d\n", a, b, f);
    printf("ceil %d / %d = %d\n", a, b, c);
    printf("round %d / %d = %d\n", a, b, r);

    return 0;
}
