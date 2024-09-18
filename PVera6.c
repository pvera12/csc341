//Priscilla Vera
//Lab6 



#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

void* runner(void* param) {
    int n = *((int*) param);
    printf("Thread running... You passed %d as an argument. Press Enter to continue.\n", n);
    getchar();
    printf("Thread exiting...\n");
    pthread_exit(0);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int n = atoi(argv[1]);
    pthread_t tid;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_create(&tid, &attr, runner, &n);
    pthread_join(tid, NULL);
    printf("Main program exiting...\n");
    exit(EXIT_SUCCESS);
}

