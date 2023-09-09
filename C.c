#include <stdio.h>

int main(){
    long long int a, b, c, d, e;
    scanf("%lld %lld", &a, &b);
    c = a+b;
    d = a*b;
    e = a-b;
    printf("%lld + %lld = %lld\n", a, b, c);
    printf("%lld * %lld = %lld\n", a, b, d);
    printf("%lld - %lld = %lld\n", a, b, e);

    return 0;
}
