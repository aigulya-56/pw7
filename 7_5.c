#include <stdio.h> //28
#define MAX_N 50000
int is_perfect_iter(int n)
{
    int sum = 0;
    int i;
    for (i =1; i < n; i++){
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}
int sum_divisors_rec(int n, int i)
{
    if (i >= n)
        return 0;
    if (n % i == 0)
        return i + sum_divisors_rec(n, i + 1);
}
int is_perfect_rec(int n)
{
    return sum_divisors_rec(n, 1) == n;
}
int main(void)
{
    int n;
    printf("введите натуральное число (от 1 до %d): ", MAX_N);
    if (scanf("%d",&n) == 1&& n >= 1 && n <= MAX_N)
    {
    if (is_perfect_iter(n))
    printf("итеративно: число %d совершенное\n", n);
        else
     printf("итеративно: число %d НЕ совершенное\n", n);

        if (is_perfect_iter(n))
            printf("рекурсивно: число %d совершенное\n", n);
        else
        printf("итеративно: число %d НЕ совершенное\n", n);
    }
    else
    {
    printf("ошибка: нужно ввести целое число от 1 до %d\n", MAX_N);
    }
return 0;
}