#include <stdio.h>
int check(int A, int B);
int main()
{
    int A, B;
    int siren;

    printf("=== СИСТЕМА КОНТРОЛЯ ДАТЧИКОВ ===\n");
    printf("Введите значения датчиков (A и B): ");

    scanf("%d %d", &A, &B);
    siren = check(A, B);

    printf("Включение сирены (1 - да, 0 - нет): %d\n", siren);

    return 0;
}
int check(int A, int B)
{
    return ((A % 2 != 0 && B % 2 == 0) || (A % 2 == 0 && B % 2 != 0));
}
