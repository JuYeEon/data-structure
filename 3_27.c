#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i, j, x, sum, sum_f, cnt = 0;
 	char buf1[20];
 	int buf2[20];
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
		sum_f += sum;
	}
	printf("%d\n", sum_f); 
	sprintf(buf1,"%d", sum_f);
 	for (int i = 0; buf1[i] != '\0'; i++){
		buf2[i] = buf1[i] - '0';
		if(buf2[i] == 1){
			cnt++;
		}
	}
	printf("%d", cnt);
}
