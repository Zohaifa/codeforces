#include <stdio.h>

int main(){
    int y, m, n;
    scanf("%d", &n);
    y = n/365;
    n = n%365;
    m = n/30;
    n = n%30;
    printf("%d years\n%d months\n%d days\n", y, m, n);

    return 0;
}
