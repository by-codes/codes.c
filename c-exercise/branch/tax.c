/*
    2019最新个人所得税免征额提高到5000，5001～8000部分税率3%，
    8001～17000部分税率10%，17001～30000部分税率20%，
    30001～40000部分税率25%，40001～60000部分税率30%，
    60001～85000部分税率35%，85000部分以上45%。
    输入当月工资额，计算应交个税。
*/
#include <stdio.h>

int main(void) {
    int salary;
    int tax;

    printf("请输入当月工资：");
    scanf("%d", &salary);

    if (salary <= 5000) {
        tax = 0;
    } else if (salary <= 8000) {
        tax = (salary - 5000) * 0.03;
    } else if (salary <= 17000) {
        tax = (8000 - 5000) * 0.03 + (salary - 8000) * 0.1;
    } else if (salary <= 30000) {
        tax = (8000 - 5000) * 0.03 + (17000 - 8000) * 0.1 + (salary - 17000) * 0.2;
    } else if (salary <= 40000) {
        tax = (8000 - 5000) * 0.03 + (17000 - 8000) * 0.1 + (30000 - 17000) * 0.2 + (salary - 30000) * 0.25;
    } else if (salary <= 60000) {
        tax = (8000 - 5000) * 0.03 + (17000 - 8000) * 0.1 + (30000 - 17000) * 0.2 + (40000 - 30000) * 0.25 + (salary - 40000) * 0.3;
    } else if (salary <= 85000) {
        tax = (8000 - 5000) * 0.03 + (17000 - 8000) * 0.1 + (30000 - 17000) * 0.2 + (40000 - 30000) * 0.25 + (60000 - 40000) * 0.3 + (salary - 60000) * 0.35;
    } else {
        tax = (8000 - 5000) * 0.03 + (17000 - 8000) * 0.1 + (30000 - 17000) * 0.2 + (40000 - 30000) * 0.25 + (60000 - 40000) * 0.3 + (85000 - 60000) * 0.35 + (salary - 85000) * 0.45;
    }

    printf("当月工资：%d应交个税：%d\n", salary, tax);

    return 0;
}