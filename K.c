#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && b>=c && a>=c) printf("%d %d\n", c, a);
    else if(a>=b && b<=c && a>=c) printf("%d %d\n", b, a);
    else if(b>=a && a>=c && b>=c) printf("%d %d\n", c, b);
    else if(b>=a && c>=a && b>=c) printf("%d %d\n", a, b);
    else if(c>=b && b>=a && c>=a) printf("%d %d\n", a, c);
    else if(c>=b && a>=b && c>=a) printf("%d %d\n", b, c);

    return 0;
}
