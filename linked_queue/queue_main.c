
/*
 * Di Zhang
 * CS5660 - Computer Systems
 * Sep 26, 2023
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "queue.h"

char *ENQUEUE = "Enqueue";
char *DEQUEUE = "Dequeue";

/* 
 * main function for queue: creating all the processes and 
 * printing all the enqueue and dequeue
 */
int main(int argc, char *argv[]) {

	// encoding/decoding
	int coder = 0;

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
	strcpy(process1->p_name, "A");

	process2->id = 1002;
	strcpy(process2->p_name, "B");
	
	process3->id = 1003;
	strcpy(process3->p_name, "C");
	
	process4->id = 1004;
	strcpy(process4->p_name, "D");
	
	process5->id = 1005;
	strcpy(process5->p_name, "E");


	enqueue(queue, process1);
	print_queue(process1, ENQUEUE, queue, coder);
	enqueue(queue, process2);
	print_queue(process2, ENQUEUE, queue, coder);
	enqueue(queue, process3);
	print_queue(process3, ENQUEUE, queue, coder);
	
	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);
	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);
	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);
	
	enqueue(queue, process4);
	print_queue(process4, ENQUEUE, queue, coder);
	enqueue(queue, process5);
	print_queue(process5, ENQUEUE, queue, coder);

	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);
	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);
	
	return 0;
}
