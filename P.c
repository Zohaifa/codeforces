#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    m = (n - n%1000)/1000;
    if (m%2 == 0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}
