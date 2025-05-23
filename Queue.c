#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct{
    int data[MAX_SIZE];
    int front;
    int rear;
    int count;
} CircularQueue;

void initQueue(CircularQueue *q){
    q -> front = 0;
    q -> rear = -1;
    q -> count = 0;
}

bool isEmpty(CircularQueue *q){
    return q -> count == 0;
}

bool isFull(CircularQueue * q){
    return q -> count == MAX_SIZE;
}

bool enqueue(CircularQueue *q, int value){
    if(isFull(q)){
        printf("큐가 가득 찼습니다.\n");
        return false;
    }
    q -> rear = (q -> rear + 1) % MAX_SIZE;
    q -> data[q -> rear] = value;
    q -> count++;
    return true;
}

bool denqueue(CircularQueue *q, int *value){
    if(isEmpty(q)){
        printf("큐가 비어있습니다.\n");
        return false;
    }
    *value = q -> data[q -> front];
    q -> front = (q -> front + 1) % MAX_SIZE;
    q -> count--;
    return true;
}

bool peak(CircularQueue *q, int *value){
    if(isEmpty(q)){
        printf("큐가 비어있습니다.\n");
        return false;
    }
    *value = q -> data[q -> front];
    return true;
}

int main(){
    CircularQueue q;
    initQueue(&q);
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    
    int value;
    if(peak(&q, &value)){
        printf("맨 앞 값: %d\n", value);
    }
    while (denqueue(&q, &value)) {
        printf("dequeue된 값: %d\n", value);
    }
    
    enqueue(&q, 40);
    enqueue(&q, 50);
    if (peak(&q, &value)) {
        printf("맨 앞 값: %d\n", value);
    }
    
    return 0;
}
