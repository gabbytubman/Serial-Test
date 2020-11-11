#include <stdio.h>
#include <pthread.h>
#include <string.h>


#define HOME "00DH00"
#define ACCEL "00AC250"
#define POSITION "00PA"
char absolutePosition [4]= {00PA};

int main () {
    char input;
    int pos;
    int repeat = 1;
    
    scanf("%c", &input);
    
    do {
        if (input == 'p' || input == 'P') {
            scanf("%d", &pos);
            if (pos <= 255 && pos >= 0){
                printf("absolutePosition + pos");
            }
            else {
                printf("Error: %d is not within range.\n", pos);
                repeat = 0;
            }
        }

        else if (input == 'h' || input == 'H'){
            printf("HOME"); // sets home
        }   
        else if (input == 'a' || input == 'A'){
            printf("ACCEL"); // sets acceleration
        }   
        else {
            printf("Error: command not found.\n");
            repeat = 0;
        }
    } while (repeat == 1);
    return 0;
}