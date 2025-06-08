#include <stdio.h>

int main() {
    int a, b, c, d;

    // Вводимо кінці відрізків
    printf("Введіть кінці першого відрізка [a, b]: ");
    scanf("%d %d", &a, &b);
    printf("Введіть кінці другого відрізка [c, d]: ");
    scanf("%d %d", &c, &d);

    // Перевіряємо, чи a <= b і c <= d, якщо ні, міняємо
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (c > d) {
        int temp = c;
        c = d;
        d = temp;
    }

    // Перевірка на перетин
    if (b >= c && d >= a) {
        printf("Відрізки мають спільні точки.\n");
    } else {
        printf("Відрізки не мають спільних точок.\n");
    }

    return 0;
}