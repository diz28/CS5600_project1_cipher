
/*
 * Di Zhang
 * CS5660 - Computer Systems
 * Sep 26, 2023
 */

/* 
 * header file
 */

typedef struct process{
	int id;
	char p_name[16];
} process_t;


typedef struct node{
	void *data;
	struct node *next;
} node_t;

typedef struct queue{
	node_t *head;
	node_t *back;
	//int len;
} queue_t;

queue_t *queue_init();

node_t *node_init(void *data);

void enqueue(queue_t *queue, void *element);

void *dequeue(queue_t *queue);

void print_proc(process_t *process, char* op_name, int coder);

void print_queue(process_t* proc, char* op_name, queue_t* queue, int coder);
