//
//  main.c
//  number_and_day
//
//  Created by Yanzhe on 2022/7/24.
//

#include <stdio.h>

int main() {
    int num1;
    printf("Hello, please input a number within 1-7!\n");
    scanf("%d",&num1);
    switch (num1) {
        case 1: printf("Today is Monday!\n"); break;
        case 2: printf("Today is Tuesday!\n"); break;
        case 3: printf("Today is Wednesday!\n"); break;
        case 4: printf("Today is Thursday!\n"); break;
        case 5: printf("Today is Friday!\n"); break;
        case 6: printf("Today is Saturday!\n"); break;
        case 7: printf("Today is Sunday!\n"); break;
            
        default:printf("Invaild imput, please try again!\n");break;
    }
    return 0;
}
