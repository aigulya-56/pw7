#include <stdio.h> //24
void max_min_mid(int *a, int *b, int*c){
    int x =*a;
    int y=*b;
    int z = *c;
    int max = x;
    int min =x;
    if (y>max)max=y;
    if(z>max)max=z;
    if(y<min)min=y;
    if(z<min)min=z;
    *a=max;
    *b =min;
    *c=x+y+z-max-min;
}
int main(void){
    int a = 5;
    int b =9;
    int c=1;
    printf("до вызова: a=%d, b=%d,c=%d\n",a,b,c);
    max_min_mid(&a,&b,&c);
    printf("после вызова: a=%d, b=%d,c=%d\n",a,b,c);
    return 0;
}