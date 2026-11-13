#include <stdio.h> //12
int is_prime(int n){
    int i;
    if(n<2)
    return 0;
    for (i =2; i*i<=n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(void){
    int c;
    long total = 0;
    long prime_count =0;
    while((c=getchar()) !=EOF){
        total++;
        if(is_prime(c))
        prime_count++;
    }
    printf("символов с простым аски кодом: %ld\n", prime_count);
    printf("остальных символов: %ld\n", total - prime_count);
    printf("всего обработано символов: %ld\n", total);
return 0;
}