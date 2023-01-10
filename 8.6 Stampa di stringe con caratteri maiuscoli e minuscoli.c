#include <stdio.h>
#include <ctype.h>
#define SIZE 100

void lower(char s[SIZE]);
void upper(char s[SIZE]);

int main()
{
	char s[SIZE];

	printf("%s", "Enter a line of text\n");
	fgets(s, SIZE, stdin);   //legge una riga di testo

	lower(s);
	printf("%s\n", s);
	upper(s);
	printf("%s\n", s);

}

void lower(char s[SIZE])
{
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = tolower(s[i]);
	}
}
void upper(char s[SIZE])
{
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
}
