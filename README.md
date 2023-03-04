# vsrtos - Very simple RTOS
vsrtos is a lightweight real-time operating system used for embedded systems. It uses a strict priority-based non-preemptive scheduler which means that tasks do not get interrupted, and the tasks with highest priority will be executed first.

This means that each task (function) cannot block for a long time, and has to return on every call.

The reason for creating the rtos was that I wanted a very simple and lightweight rtos that only requires to include a header file, `vsrtos.h`, and then creating tasks, followed by starting the scheduler, while doing minimal configurations.

How to use:
1. Create the tasks you need:
```
void yourTaskFunction() {
    // Your code
}


// This will create the task, parameters are:
//                function,          task name,    frequency (hz), priority
vsrtos_create_task(yourTaskFunction, "MyTaskName", 10,             1);


// Start scheduler!
vsrtos_scheduler_start();
```