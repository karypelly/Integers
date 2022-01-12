#include <stdio.h>
int main(void){
	int n;
	float s;
	float intr;
	int i, j;
	scanf("%f", &s);
    scanf("%d", &n);
	float arr[n];
	for(i = 0; i < n; i++){
		scanf("%f", &arr[i]);
	}
	for(j = 0; j < n; j++){
		printf("The value after year %d is:\t", j+1);
		intr = s * arr[j] / 100;
		if(intr > 5000 && intr <= 10000){
			intr = ((intr - 5000) * 0.9) + 5000;
		} else if(intr > 10000){
			intr = ((intr - 10000) * 0.8) + 9500; 
		}
		s = s + intr;
		printf("%.2f\n", s);
	}	
	return 0;
}