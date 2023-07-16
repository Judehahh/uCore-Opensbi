#include "console.h"
#include "defs.h"

int threadid()
{
	return 0;
}

void clean_bss()
{
	extern char s_bss[];
	extern char e_bss[];
	memset(s_bss, 0, e_bss - s_bss);
}

void main()
{
	clean_bss();
	printf("hello wrold!\n");
	panic("ALL DONE");
}
