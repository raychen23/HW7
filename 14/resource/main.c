#include<stdlib.h>
#include<stdio.h>

int main() {
	FILE *fptr;
	char ch;
	int count = 0;
	fptr = fopen("welcome.txt","r");
	if (fptr != NULL) {
		while ((ch = getc(fptr)) != EOF) {
			pprintf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else {
		printf("�ɮ׶}�ҥ���\n");
	}
	system("pause");
	return 0;
}