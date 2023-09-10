#include <stdio.h>

int main(){
    int a1, b1, a2, b2;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    if(a1<=a2){
        if(b1<a2){
            printf("-1");
        }
        else if (b1 >=b2 ){
            printf("%d %d", a2, b2);
        }
        else if (b1>=a2){
            printf("%d %d", a2, b1);
        }

    }
    else{
        if(b2<a1){
            printf("-1");
        }
        else if (b2 >=b1 ){
            printf("%d %d", a1, b1);
    }
        else if (b2>=a1){
            printf("%d %d", a1, b2);
        }

    }
    return 0;
}
