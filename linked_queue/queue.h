

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

void print_queue(queue_t *queue);
