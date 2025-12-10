#include "pch.h"   
#include <stdint.h>






void encrypt_by_zerosize(uint8_t* bytes,int const* length,const char* key) {
	int key_results = 0;
	for (const char* p = key; *p != '\0'; p++) key_results += (uint8_t)*p;
	for (int i = 0; i < *length; i++)bytes[i] = (bytes[i] + key_results) % 256;
}




void decrypt_by_zerosize(uint8_t* bytes, int const* length, const char* key) {
	int key_results = 0;
	for (const char* p = key; *p != '\0'; p++) key_results += (uint8_t)*p;
	for (int i = 0; i < *length; i++)bytes[i] = (bytes[i] - key_results) % 256;
}




