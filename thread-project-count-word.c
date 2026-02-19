#include <stdio.h>
#include <pthread.h>
#include <string.h>
#define MAX_INPUT_SIZE 1024


void *count_words_thread(void *arg) {

        // Read a line of input
        if (arg != NULL) {
                char* token;
                char* delim = " \n\t";
                token = strtok(arg, delim);
                int count = 0;
                while (token != NULL) {
                    count++;
                    token = strtok(NULL, delim);
                }

                printf("Number of words : %d\n", count);
                printf("Exiting...");
                return NULL;


 }

    return NULL;

}



int main() {
    pthread_t thread_id;

    char messeage[1024];
    printf("Enter text (press Enter to submit):\n");
    fgets(messeage, sizeof(messeage), stdin);
    pthread_create(&thread_id, NULL, count_words_thread, messeage);

    pthread_join(thread_id, NULL);

    return 0;
}
