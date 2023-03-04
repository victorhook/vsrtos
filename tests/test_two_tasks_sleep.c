#define LINUX

#include "vsrtos.h"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "unistd.h"


static void randomSleep(int max) {
    int sleep_ms = rand() % max;
    usleep(sleep_ms * 1000);
}

void A() {
    //printf("A\n");
    randomSleep(1000);
}

void B() {
    //printf("B\n");
    randomSleep(500);
}


int main() {
    vsrtos_create_task(A, "A", 1, 1);
    vsrtos_create_task(B, "B", 2, 1);
    printTasks();


    vsrtos_scheduler_start();


    return 0;
}