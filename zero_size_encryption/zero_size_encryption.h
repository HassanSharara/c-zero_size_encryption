#pragma once

#include <stdint.h>
void encrypt_by_zerosize(uint8_t* bytes, int const* length, const char* key);
void decrypt_by_zerosize(uint8_t* bytes, int const* length, const char* key);
