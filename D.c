#include <stdio.h>

int main(){
    long long int a, b, c, d, e;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    e = (a*b)-(c*d);
    printf("Difference = %lld\n", e);
    return 0;
}
