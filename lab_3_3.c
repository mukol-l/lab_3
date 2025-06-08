#include <stdio.h>

int main() {
    int episode_number;

    // Ввід користувача
    printf("Введіть номер серії (1-10): ");
    scanf("%d", &episode_number);

    // Перевірка
    if (episode_number < 1 || episode_number > 10) {
        printf("Невірний номер серії.\n");
        return 1;
    }

    // Вивід назви та дати
    switch (episode_number) {
        case 1:
            printf("Серія 1: El nuevo orden\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 2:
            printf("Серія 2: La familia Monarca\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 3:
            printf("Серія 3: Mentiras\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 4:
            printf("Серія 4: La caída de los Monarca\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 5:
            printf("Серія 5: El precio del poder\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 6:
            printf("Серія 6: El amor lo cambia todo\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 7:
            printf("Серія 7: Matar o morir\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 8:
            printf("Серія 8: Crisis de confianza\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 9:
            printf("Серія 9: Devolver lo robado\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        case 10:
            printf("Серія 10: Despedida con honor\n");
            printf("Дата прем'єри: 13.09.2019\n");
            break;
        default:
            printf("Невірний номер серії.\n");
            break;
    }

    return 0;
}