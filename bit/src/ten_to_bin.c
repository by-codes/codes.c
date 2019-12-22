/**
 *  给定一个十进制数，剖析对应的二进制位数字串打印
 *
 */
#include <stdio.h>

int main(void) {

    char numeric = -101;
    printf("%d的二进制是：", numeric);
    char bits[8];
    int len = sizeof(char) * 8;

    for (int i = 0; i < len; i++) {
        bits[i] = numeric & 1;
        numeric = numeric >> 1;
    }

    for (int i = len; i > 0; i--) {
        printf("%d", bits[i - 1]);
    }

    printf("\n");
}