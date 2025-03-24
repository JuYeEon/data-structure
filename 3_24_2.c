#include <stdio.h>

int num, i, max = 100, m = 1, x;
int height[500] = {};
int getNum(){
	scanf("%d", &num);
	if(num > 500 || num < 1){
		return num;
	}
}

void inHeight(int num){
	for(i = 0; i < num; i++){
		scanf("%d", &x);
		height[i] = x;
	}
}

int count(int num){
	for(i = 0; i < num; i++){
		if(max <= height[i]){
			max = height[i];
			m = i;
			if(max >= height[i + 1]){
				break;
			}
		}
	}
	return m + 1;
}

int main(){
	int a = getNum();
	inHeight(a);
	printf("%d", count(a));
}
