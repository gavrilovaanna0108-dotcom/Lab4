#include <stdio.h>

int main() {
    int A, B;
    int siren;

    printf("=== СИСТЕМА КОНТРОЛЯ ДАТЧИКОВ ===\n");
    printf("Введите значения датчиков (A и B): ");

    scanf("%d %d", &A, &B);
    siren = ((A % 2 != 0 && B % 2 == 0) || (A % 2 == 0 && B % 2 != 0));

    printf("Включение сирены (1 - да, 0 - нет): %d\n", siren);

    return 0;
}
