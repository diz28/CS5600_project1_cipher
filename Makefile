
CC = gcc


all:
	$(CC) -Wall ./cipher/caesar_main.c ./cipher/caesar.c -o caesar
	$(CC) -Wall ./linked_queue/queue_main.c ./linked_queue/queue.c ./cipher/caesar.c -o queue
	$(CC) -Wall ./cipher_linked_queue/main.c ./cipher/caesar.c ./linked_queue/queue.c -o ciphered_queue

exec:
	./queue

clean:
	rm -rf caesar
	rm -rf queue
	rm -rf ciphered_queue
