#pragma once 

#include <unistd.h>
#include <stdint.h>
#define HASH_LENGTH 243
#define STATE_LENGTH 3 * HASH_LENGTH
#define TRYTE_LENGTH 2673
#define TRANSACTION_LENGTH TRYTE_LENGTH * 3
typedef int8_t trit_t;

