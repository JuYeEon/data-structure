#include <stdio.h>

int main(){
	int i, j, x, sum;
	sum = 0;
	x = 1;
	for(i = 1; i <= 5; i++){
		x *= 9;
		sum += x;
		x = 1;
		for(j = 1; j <= i; j++){
			x *= 10;
		}
		printf("%d\n", sum);
	}
}
