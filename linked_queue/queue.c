
/*
 * Di Zhang
 * CS5660 - Computer Systems
 * Sep 26, 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "queue.h"
#include "../cipher/caesar.h"

// caesar cipher key
int key = 3;

// initialize the queue
queue_t *queue_init() {	
	queue_t *queue = (queue_t*)malloc(sizeof(queue_t));
	queue->head = NULL;
	queue->back = NULL;
	return queue;
}

// initialize the node
node_t *node_init(void *data) {
	// allocate space for the new node
	node_t *node_new = (node_t*)malloc(sizeof(node_t));
	node_new->data = data;
	node_new->next = NULL;
	return node_new;
}

// adding node to the queue in the front
void enqueue(queue_t *queue, void *process) {
	node_t *node_new = node_init(process);
	if (queue->back != NULL) {
		queue->back->next = node_new;
	}
	queue->back = node_new;
	if (queue->head == NULL) {
		queue->head = node_new;
	}
}

// remove node from the queue in the back
void *dequeue(queue_t *queue) {
	// check if queue is empty
	if (queue->head == NULL) {
		return NULL;
	}
	// remove the first node in queue by pointing the head to the next node
	node_t *tmp = queue->head;
	void *rm_process = tmp->data;
	queue->head = queue->head->next;
	// if queue is empty, set back to null as well
	if (queue->head == NULL) {
		queue->back = NULL;
	}
	free(tmp);
	return rm_process;
}

// print remove process
void print_proc(process_t *process, char* op_name, int coder) {
	int cmp_res = strncasecmp(op_name, "enqueue", 7);
	if (cmp_res == 0){
		printf("[id: %d, name: %s] is enqueued. ", process->id, process->p_name);
		if (coder) {
			encode(process->p_name, key);
		}
	} else {
		if (coder) {
			decode(process->p_name, key);
		}
		printf("[id: %d, name: %s] is dequeued. ", process->id, process->p_name);
	}
}

// print the queue
void print_queue(process_t* proc, char* op_name, queue_t* queue, int coder) {
	node_t *current = queue->head;
	printf("%s: ", op_name);

	print_proc(proc, op_name, coder);

	while (current != NULL) {
		process_t *cur_proc = current->data; 
		printf("[id: %d, name: %s] ", cur_proc->id, cur_proc->p_name);
		current = current->next;
	}
	if (queue->head == NULL) {
		printf("[Empty]");
	}
	printf("\n");
}

