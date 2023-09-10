#include <stdio.h>
#include <math.h>

int main(){
    double x, y;
    int z;
    scanf("%lf", &x);
    y = x - floor(x);
    if (y == 0){
        z = x;
        printf("int %d", z);
    }
    else{
        z = x;
        printf("float %d %g", z, y);
    }
    return 0;
}
