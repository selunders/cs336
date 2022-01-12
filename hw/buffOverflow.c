#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int valid = 0;
	char str1[8] = "START";
	char str2[8];

	fgets(str2, 128, stdin);
	if(strncmp(str1,str2, 8) == 0)
		valid = 1;
	printf("buffer1: str1(%s), str2(%s), valid(%d)", str1, str2, valid);
}
