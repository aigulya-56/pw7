#include <stdio.h> //18
#include <math.h>
double tan_product(double a, double b){
    return tan(a*b);
}
void clear_line(void){
    int c;
    while ((c = getchar()) != '\n' && c!= EOF){

    }
}
int main(void){
    double a,b;
    int count;
    printf("введите два числа через пробел \n");
    printf("для выхода нажмите контрл+д\n");
    while(1){
        printf("a b: ");
        count =scanf("%lf %lf", &a, &b);
        if (count ==EOF)
        break;
        if (count ==2)
        printf("tan(%.4f * %.4f) = %.4f\n", a,b,tan_product(a,b));
        else 
        printf("ошибка. нужно ввести два числа \n");
        clear_line();
    } 
    return 0;
}