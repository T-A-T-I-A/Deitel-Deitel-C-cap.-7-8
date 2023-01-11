#include <stdio.h>
#include <string.h>
#define SIZE 10

void ordina(char *s[]);
void stampa(char *s[]);

int main()
{
	char *c[SIZE] = { "Telavi", "Tbilisi", "New York", "Miami", "Bari", 
	                "Roma", "Milano", "Torino", "Taranto", "Kutaisi" };

	stampa(c);
	ordina(c);
	puts("\n");
	stampa(c);
}

void ordina(char *s[]) 
{
	char *c;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE - 1; j++) {
			if (strcmp(s[j], s[j + 1]) > 0) {
				c = s[j];
				s[j] = s[j + 1];
				s[j + 1] = c;

			}
		}
	}

}

void stampa(char* s[]) 
{
	for (int i = 0; i < SIZE; i++) {
		printf("%s\n", s[i]);
	}
}
