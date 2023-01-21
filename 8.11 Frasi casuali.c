#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define SIZE 5

void stampa(char *s[][8], int x);

int main()
{
    srand(time(NULL));
    char *article[SIZE] = {"the", "a", "one", "some",  "any"};
    char *noun[SIZE] = {"boy", "girl", "dog", "town",  "car"};
    char *verb[SIZE] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[SIZE] = {"to", "from", "over", "under", "on"};
    char *string[20][8] = {" "};
    
    for(int str = 0; str < 20; str++){

        string[str][0] = article[rand() % 5];
        string[str][1] = " ";
        string[str][2] = noun[rand() % 5];
        string[str][3] = " ";
        string[str][4] = verb[rand() % 5];
        string[str][5] = " ";
        string[str][6] = preposition[rand() % 5];
        string[str][7] = ".";
        
        stampa(string, str);
    }
}

void stampa(char *s[][8], int x)
{
    for (int i = 0; i < 8; i++){
        if(i == 0){
            printf("%c", toupper(*s[x][i]++));
            for(; *s[x][i] != '\0'; *s[x][i]++){
                printf("%c", *s[x][i]);
            }
        }
        else{
            printf("%s", s[x][i]);
        }
    }
    puts("");
}
