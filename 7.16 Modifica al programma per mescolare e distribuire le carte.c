#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[]);

int main()
{
    unsigned int deck[SUITS][FACES] = { 0 };
    const char* suit[SUITS] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char* face[FACES] = { "Ace", "Deuce", "Tree", "Four", "Five", "Six", "Seven",
                               "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    srand(time(NULL));

    shuffle(deck);
    deal(deck, face, suit);

}

void shuffle(unsigned int wDeck[][FACES])
{
    for (int card = 1; card <= CARDS; card++) {
        unsigned int row;
        unsigned int column;

        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while (wDeck[row][column] != 0);

        wDeck[row][column] = card;
    }
}

void deal(unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[])
{

    for (int card = 1; card <= CARDS; card++) {
        for (int i = 0; i < SUITS; i++) {
            int j = 0;
            for (; j < FACES; j++) {
                if (wDeck[i][j] == card) {
                    printf("%5s of %-8s\n", wFace[j], wSuit[i]);
                    break;
                }
            }
            if (wDeck[i][j] == card) {
                break;
            }
        }
    }
}
