#include <stdio.h>

int main(){
    double pie =  3.141592653, r, Area;
    scanf("%lf", &r);
    Area = pie*r*r;
    printf("%.9lf", Area);
    return 0;
}
