#include "string.h"

void *memset(void *dst, int value, unsigned int len) {
	char *tmp = (char *)dst;
	for (int i = 0; i < len; ++i) {
		*tmp = value;
	}
	return dst;
}
