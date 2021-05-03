#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MOD 0

int main() {
    srand(time(0));
    for (int i = 1; i <= 5; ++i) {
        int a = rand() % 50;
        int b = rand() % 50;
        int k = rand() % 2 ? 1 : -1;
        int c = a +b * k;
        while (c >= 10) {
            a = rand() % 50;
            b = rand() % 50;
            k = rand() % 2 ? 1 : -1;
            c = a + b * k;
        }
        printf("%d/5:  %d", i, a);
        if (k == -1) 
            printf("-");
        else
            printf("+");
        printf("%d=", b);
        if (MOD)
           printf("\n");
        else {
            int ans;
            scanf("%d", &ans);
            if (ans == c)
                printf("对了！\n妙蛙种子吃了妙脆角，进了米奇妙妙屋，太妙了！妙啊～\n小母牛做电线，一路牛逼带闪电哪！\n");
                else printf("错了！\n加油！\n奥利给！\n");
        }
    }
    return 0;
}