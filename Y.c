#include <stdio.h>

int main(){
    unsigned long long int a, b, c ,d, p1, p2, pf;

    scanf("%llu %llu %llu %llu", &a, &b, &c, &d);
    p1 = a*b;
    p2 = c*d;
    p1=p1%100;
    p2=p2%100;
    pf = (p1*p2)%100;

    printf("%.2llu\n", pf);

    return 0;
}
