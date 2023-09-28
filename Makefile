
 # Di Zhang
 # CS5660 - Computer Systems
 # Sep 26, 2023 

CC = gcc
CFLAGS = -Wall

all:
	$(CC) $(CFLAGS) ./cipher/caesar_main.c ./cipher/caesar.c -o caesar
	$(CC) $(CFLAGS) ./linked_queue/queue_main.c ./linked_queue/queue.c ./cipher/caesar.c -o queue
	$(CC) $(CFLAGS) ./cipher_linked_queue/ciphered_queue_main.c ./cipher/caesar.c ./linked_queue/queue.c -o ciphered_queue

caesar:
	$(CC) $(CFLAGS) ./cipher/caesar_main.c ./cipher/caesar.c -o caesar
	
queue:
	$(CC) $(CFLAGS) ./linked_queue/queue_main.c ./linked_queue/queue.c ./cipher/caesar.c -o queue
	
ciphered_queue:
	$(CC) $(CFLAGS) ./cipher_linked_queue/ciphered_queue_main.c ./cipher/caesar.c ./linked_queue/queue.c -o ciphered_queue

clean:
	rm -rf caesar
	rm -rf queue
	rm -rf ciphered_queue

