#include <stdio.h>

int main(){
	int a, b, temp, x;
	printf("투입할 돈 : ");
	scanf("%d", &a);
	printf("물건 값 : ");
	scanf("%d", &b);
	if(a == b){
		printf("거스름돈 X");
	}
	else if(a > b){
		x = a - b;
		printf("거스름돈 : %d\n", x);
		temp = x / 500;
		printf("500원 갯수 : %d\n", temp);
		temp = (x - temp * 500) / 100;
		printf("100원 갯수 : %d\n", temp);
	}
	else{
		printf("투입한 돈이 부족합니다."); 
	}
}
