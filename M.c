#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    int b = a;
    if(b>=48 && b<=57)    printf("IS DIGIT\n");
    if(b>=65 && b<=90)    printf("ALPHA\nIS CAPITAL\n");
    if(b>=97 && b<=122)    printf("ALPHA\nIS SMALL\n");
    return 0;
}
