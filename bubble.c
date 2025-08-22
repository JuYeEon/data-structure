#include <stdio.h>

//버블 정렬 
int main(){
     int i, j, temp;
     int data[9] = {9, 7, 1, 3, 4, 2, 5, 8, 6};
    
     for(i = 0; i < 9; i++){
         for(j = 0; j < 9; j++){
             if(data[j] > data[j + 1]){
                 temp = data[j];
                 data[j] = data[j + 1];
                 data[j + 1] = temp;
             }
         }
     }
     for(i = 0; i < 9; i++){
         printf("%d ", data[i]);
     }
}
