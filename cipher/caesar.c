

#include<stdio.h>
#include<ctype.h>

void toUpperCase(char *text) {
	
	// convert letters to upper case
	for (int i = 0; text[i] != '\0'; i++) {
		text[i] = toupper(text[i]);
	}
}

/* 
 * encode function: encode plain text based on the key
 */
void encode(char *plaintext, int key) {
	
	// convert plaintext to upper case
	toUpperCase(plaintext);
	
	// encode plaintext based on the key
	for (int i = 0; plaintext[i] != '\0'; i++) {
		int encoder = (int)plaintext[i] + key;
		plaintext[i] = (char)encoder;
	}

}

/*
 * decode function: decode plain text based on the key
 */
void decode(char *plaintext, int key) {
	// convert plaintext to upper case
	toUpperCase(plaintext);
	
	// encode plaintext based on the key
	for (int i = 0; plaintext[i] != '\0'; i++) {
		int decoder = (int)plaintext[i] - key;
		plaintext[i] = (char)decoder;
	}


}

