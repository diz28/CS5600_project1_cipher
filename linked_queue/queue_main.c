
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "queue.h"


/* 
 * main function for linked queue
 */
//void queue_init();

//void enqueue(queue_t *queue, void *element);

//void *dequeue(queue_t *queue);
char *ENQUEUE = "Enqueue";
char *DEQUEUE = "Dequeue";

int main(int argc, char *argv[]) {

	// initilize the queue
	queue_t *queue = queue_init();

	// create process
	process_t *process1 = (process_t *)malloc(sizeof(process_t));
	process_t *process2 = (process_t *)malloc(sizeof(process_t));
	process_t *process3 = (process_t *)malloc(sizeof(process_t));
	process_t *process4 = (process_t *)malloc(sizeof(process_t));
	process_t *process5 = (process_t *)malloc(sizeof(process_t));

	process_t *rm_process = (process_t *)malloc(sizeof(process_t));

	process1->id = 1001;
	strcpy(process1->p_name, "p_one");

	process2->id = 1002;
	strcpy(process2->p_name, "p_two");
	
	process3->id = 1003;
	strcpy(process3->p_name, "p_three");
	
	process4->id = 1004;
	strcpy(process4->p_name, "p_four");
	
	process5->id = 1005;
	strcpy(process5->p_name, "p_five");


	enqueue(queue, process1);
	print_queue(process1, ENQUEUE, queue);
	enqueue(queue, process2);
	print_queue(process2, ENQUEUE, queue);
	enqueue(queue, process3);
	print_queue(process3, ENQUEUE, queue);
	
	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue);
	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue);
	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue);
	
	enqueue(queue, process4);
	print_queue(process4, ENQUEUE, queue);
	enqueue(queue, process5);
	print_queue(process5, ENQUEUE, queue);

	dequeue(queue);

	
	return 0;
}
