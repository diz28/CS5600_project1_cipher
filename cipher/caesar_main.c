
/*
 * main function
 * take 3 parameters: the plain text, key and decode/encode
*/

#include <stdio.h>
#include <string.h>

#include "caesar.h"

int main(int argc, char *argv[]) {
	
	// check for the number of paramenters
	if (argc < 3) {
		printf("Usage: <encode|decode> <message> <key>\n");
		return 1;
	}
	

	printf("message before encoding: %s\nkey: %s\n", argv[2], argv[3]);

	char zero = '0'; 
	int key = (int)argv[3][0] - (int)zero;

	char *encode_str = "encode";
	char *decode_str = "decode";
	int encode_op = strncasecmp(argv[1], encode_str, strlen(encode_str));
	int decode_op = strncasecmp(argv[1], decode_str, strlen(decode_str));
	
	if (encode_op == 0) {
		encode(argv[2], key);
		printf("encoded message: %s\n", argv[2]);
	} else if (decode_op == 0) {
		decode(argv[2], key);
		printf("decoded message: %s\n", argv[2]);
	} else {
		printf("Usage: <encode|decode> <message> <key>\n");
		return 1;
	}

	return 0;
}
