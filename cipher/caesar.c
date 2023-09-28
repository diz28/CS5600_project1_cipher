
/*
 * Di Zhang
 * CS5660 - Computer Systems
 * Sep 26, 2023
 */

#include<stdio.h>
#include<ctype.h>

int a_int = 'A' - 1;
int z_int = 'Z' + 0;

/*
 * change char to uppper case
 */
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
		int decoder = (int)plaintext[i] + key;
		if (decoder > z_int) {
			decoder = a_int + (decoder % z_int);
		}
		plaintext[i] = (char)decoder;
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
		if (decoder <= a_int) {
			decoder = z_int - (a_int % decoder);
		}
		plaintext[i] = (char)decoder;
	}
}

