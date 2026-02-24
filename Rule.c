#include <stdio.h>

int main() {
    int num, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    int div3 = (sum % 3 == 0);
    int div4 = ((num % 100) % 4 == 0);

    if (div3 && div4)
        printf("%d is divisible by 12", num);
    else
        printf("%d is not divisible by 12", num);

    return 0;
}
