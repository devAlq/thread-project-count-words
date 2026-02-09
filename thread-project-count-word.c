
#include <stdio.h>
#include <pthread.h>

#define MAX_INPUT_SIZE 1024
int count = 0;

void *count_words_thread(void *arg) {
    while (1) {

        // Read a line of input
        if (fgets(arg, MAX_INPUT_SIZE, stdin) != NULL) {
                char* token;
                char* delim = " \n\t";
                token = strtok(arg, delim);
                int count = 0;
                while (token != NULL) {
                    count++;
                    token = strtok(NULL, delim);
                }

                printf("Number of words : %d", count);
                return;


 }}

    return NULL;
 
}

int main() {
    char messeage[1024];
    printf("Enter text (press Enter to submit): \n");
    fgets(messeage, sizeof(messeage), stdin);
    count_words_thread(messeage);
    return 0;
}
