#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, r = 0;

    if (scanf("%d", &num) != 1){
        exit(1);
    }
    while (num != 0){
        

        while (num != 0) {
            r = r * 10;
            r = r + num % 10;
            num = num / 10;
        }
        printf("%d\n", r);
        r = 0;

        if (scanf("%d", &num) != 1){
            exit(1);
        }   
    }
}