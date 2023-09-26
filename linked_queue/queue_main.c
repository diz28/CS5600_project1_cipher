
#include <stdio.h>
#include <string.h>

#include "queue.h"


/* 
 * main function for linked queue
 */
//void queue_init();

//void enqueue(queue_t *queue, void *element);

//void *dequeue(queue_t *queue);

int main(int argc, char *argv[]) {
	
	printf("before queue_init");
	// initilize the queue
	queue_t *queue = queue_init();

	// create process
	process_t process1;
	process_t process2;
	process_t process3;
	process_t process4;
	process_t process5;

	process1.id = 1001;
	strcpy(process1.p_name, "p_one");
	
	process2.id = 1002;
	strcpy(process2.p_name, "p_two");
	
	process3.id = 1003;
	strcpy(process3.p_name, "p_three");
	
	process4.id = 1004;
	strcpy(process4.p_name, "p_four");
	
	process5.id = 1005;
	strcpy(process5.p_name, "p_five");

	printf("before enqueue");
	enqueue(queue, &process1);
	enqueue(queue, &process2);
	enqueue(queue, &process3);
	enqueue(queue, &process4);
	enqueue(queue, &process5);

	printf("before print queue");
	print_queue(queue);
	
	return 0;
}
