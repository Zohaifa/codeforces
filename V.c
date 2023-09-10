#include <stdio.h>

int main(){
    int x, y;
    char s;
    scanf("%d %c %d", &x, &s, &y);
    if (s == '='){
            if(x==y)
            printf("Right\n");
            else
                printf("Wrong\n");
            }
    else if (s == '<'){
        if(x<y)
            printf("Right\n");
        else
            printf("Wrong\n");
    }
    else if(s == '>'){
        if(x>y)
            printf("Right\n");
        else
            printf("Wrong\n");
    }

    return 0;
}
