#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("    |     |");
	puts("    |     |");
	puts("  /--------\\");
	puts(" /    12    \\");
	puts(" | 9        3|");
	puts(" \\    6      /");
	puts("  \\---------/");
	puts("    |     |");
	puts("    |     |");
	return 0;
}