#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();

int main() {
    srand(time(NULL));
    char word[7];
    for(int i = 0; i<7 ; i++){
        word[i] = randchar();
    }
    printf("%s", word);
}
char randchar(){
    char c = 'A' + rand() % 26;
    return c;
}
