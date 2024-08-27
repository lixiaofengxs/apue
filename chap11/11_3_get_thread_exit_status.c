#include "apue.h"
#include <pthread.h>

void* thr_fn1(void* arg) {
    printf("thread 1 returning\n");
    return ((void *)1);
}

void* thr_fn2(void* arg) {
    printf("thread 2 running\n");
    pthread_exit((void *)2);
}

int main(void) {
    int err;
    pthread_t tid1, tid2;
    void* tret;

    err = pthread_create(&tid1, NULL, thr_fn1, NULL);
    if (err != 0) {
        err_exit(err, "can't create thread1"); 
    }

    err = pthread_create(&tid2, NULL, thr_fn2, NULL);
    if (err != 0) {
        err_exit(err, "can't create thread2"); 
    }

    return 0;
}