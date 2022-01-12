#include <stdio.h>

 
int main (void){
	int i, j;
	float s;
	float intr;
	int n = 0;
    float arr[10000];
    scanf("%f", &s);
	for (i = 0; i < 10000; i++){
   		scanf("%f", &arr[i]);
    	n++;
    	if(getchar() =='\n'){
    		break;
    	}
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