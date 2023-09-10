#include <stdio.h>

int main(){
    int a, b, c;
    char s;
    scanf("%d %c %d = %d", &a, &s, &b, &c);
    if (s == '+'){
            if( a+b == c)
            printf("Yes\n");
            else
                printf("%d", a+b);
            }
    else if (s == '-'){
        if(a-b == c)
            printf("Yes\n");
        else
            printf("%d\n", a-b);
    }
    else if(s == '*'){
        if(a*b == c)
            printf("Yes\n");
        else
            printf("%d\n", a*b);
    }

    return 0;
}
