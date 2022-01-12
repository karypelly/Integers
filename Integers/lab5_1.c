#include <stdio.h>
int main(void){
    int m, l, h, i, j, k;
    scanf("%d %d", &l, &m);
    for (i = 1; i <= m; i++) {	
    	for (h = 1; h <= l; h++) {
            printf(" ");
        }
        for (j = 1; j <= m - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}