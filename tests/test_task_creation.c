#include "vsrtos.h"
#include "stdlib.h"
#include "stdio.h"

void test() {

}


int main() {
    for (int i = 0; i < 5; i++) {
        int task_prio = rand() % 20;
        vsrtos_create_task(test, "Test", 10, task_prio);
    }

    printTasks();

    return 0;
}