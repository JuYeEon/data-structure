#include <stdio.h>

//삽입 정렬
int main(){
    int i, j, temp;
    int min;
    int data[10] = {9, 7, 1, 3, 4, 2, 5, 8, 6, 10};

    for(i = 0; i < 9; i++){
        min = i;
        for(j = i + 1; j < 10; j++){
            if(data[min] > data[j]){
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }

    for(i = 0; i < 10; i++){
        printf("%d ", data[i]);
    }
}
