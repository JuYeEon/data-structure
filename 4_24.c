#include <stdio.h>

int main(){
    int score[100] = {};
    int sum = 0;
    int i, size;
    int max = 0;
    int min = 100;
    
    scanf("%d", &size);
    
    for(i = 0; i < size; i++){
        scanf("%d", &score[i]);
        sum += score[i];
        if(max <= score[i]){
            max = score[i];
        }
        if(min >= score[i]){
            min = score[i];
        }
    }
    
    printf("평균 점수 : %.2f\n", (double)sum / size);
    printf("최대값 : %d, 최소값 : %d", max, min);
    
    
    return 0;
}
