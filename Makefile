
CC = gcc


all:
	gcc -Wall ./cipher/caesar_main.c ./cipher/caesar.c -o caesar
	#gcc -Wall ./linked_queue/queue_main.c ./linked_queue/queue.c -o queue

exec:
	./queue

clean:
	rm -rf caesar
	rm -rf queue
