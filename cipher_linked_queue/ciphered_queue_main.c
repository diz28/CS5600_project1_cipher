
/*
 * Di Zhang
 * CS5660 - Computer Systems
 * Sep 26, 2023
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../cipher/caesar.h"
#include "../linked_queue/queue.h"

char *ENQUEUE = "Enqueue";
char *DEQUEUE = "Dequeue";

/* 
 * main function for ciphered queue: create all the processes and 
 * print all the ciphered enqueue and dequeue
 */
int main(int argc, char *argv[]) {

	// encoding/decoding
	int coder = 1;

	// initilize the queue
	queue_t *queue = queue_init();

	// create process
	process_t *process_a = (process_t *)malloc(sizeof(process_t));
	process_t *process_b = (process_t *)malloc(sizeof(process_t));
	process_t *process_c = (process_t *)malloc(sizeof(process_t));
	process_t *process_d = (process_t *)malloc(sizeof(process_t));
	process_t *process_e = (process_t *)malloc(sizeof(process_t));

	process_t *rm_process = (process_t *)malloc(sizeof(process_t));

	process_a->id = 1001;
	strcpy(process_a->p_name, "A");

	process_b->id = 1002;
	strcpy(process_b->p_name, "B");

	process_c->id = 1003;
	strcpy(process_c->p_name, "C");

	process_d->id = 1004;
	strcpy(process_d->p_name, "D");

	process_e->id = 1005;
	strcpy(process_e->p_name, "E");

	enqueue(queue, process_a);
	print_queue(process_a, ENQUEUE, queue, coder);

	enqueue(queue, process_b);
	print_queue(process_b, ENQUEUE, queue, coder);

	enqueue(queue, process_c);
	print_queue(process_c, ENQUEUE, queue, coder);

	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);

	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);

	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);

	enqueue(queue, process_d);
	print_queue(process_d, ENQUEUE, queue, coder);

	enqueue(queue, process_e);
	print_queue(process_e, ENQUEUE, queue, coder);

	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);

	rm_process = dequeue(queue);
	print_queue(rm_process, DEQUEUE, queue, coder);

	return 0;
}
