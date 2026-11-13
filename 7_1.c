#include <stdio.h> //15
int main(void){
    int c;
    while((c=getchar()) !=EOF){
        if(c>='0' && c <= '9')
        putchar('?');
        else
        putchar(c);

    }
    return 0;
}