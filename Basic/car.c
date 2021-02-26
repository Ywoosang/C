#include <stdio.h>

int main()
{
    int day, car, cnt = 0;
    scanf("%d", &day);
    for (int i = 1; i <= 7; i++)
    {
        scanf("%d", &car);
        // for (int num = day; num < 100; num += 10)
        // {
        //     if (car == num)
        //     {
        //         cnt++;
        //         break;
        //     }
        // }
        // 일의자리 숫자만 같으면 되므로 % 10 이용
        if(car%10==day) cnt ++;
    }
    printf("%d\n", cnt);
}