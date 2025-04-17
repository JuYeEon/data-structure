#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char text[10];
    scanf("%s", text);
    for(int i = 0; text[i] != '\0'; ++i){
        printf("%c", text[i] + 'A' - 'a');
    }
    
    return 0;
}
