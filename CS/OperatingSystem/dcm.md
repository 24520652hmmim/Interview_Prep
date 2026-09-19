1- 
+ A process is an independent program in execution, while a thread is a unit of execution within a process. A process has its own memory space, while threads in the same process share memory and resources. Threads are generally lighter and faster to create and switch than processes.

2- 
+ The stack is used for function calls, local variables, and execution-related data. It is usually faster and managed automatically. The heap is used for dynamically allocated objects and has a larger and more flexible memory area. In Java, objects are generally stored in the heap, while local variables and references are associated with stack frames.

3 - 
+ A context switch happens when the CPU switches from one process or thread to another. The operating system saves the state of the current process or thread and loads the state of the next one. Context switching allows multitasking, but it also introduces some overhead.

4 - 
+ A race condition happens when multiple threads access shared data concurrently and the final result depends on the timing of their execution. It can cause unexpected or incorrect results. We can use synchronization mechanisms such as locks or mutexes to prevent it.
5 - 
+ “A deadlock happens when multiple processes or threads are waiting for resources held by each other, so none of them can continue. The four necessary conditions are mutual exclusion, hold and wait, no preemption, and circular wait.”

4 conditions:

Mutual exclusion
Hold and wait
No preemption
Circular wait

Interviewer hỏi “How can you prevent deadlock?”:

“We can prevent deadlock by avoiding one of the necessary conditions, for example by acquiring locks in a consistent order to prevent circular wait.”