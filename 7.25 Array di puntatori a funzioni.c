#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

void max(const int grades[][EXAMS]);
void min(const int grades[][EXAMS]);
void average(const int grades[][EXAMS]);
void printArray(const int grades[][EXAMS]);

int main()
{
    void (*f[EXAMS])(const int a[][EXAMS]) = { max, min, average, printArray };
    const int studentsGrade[STUDENTS][EXAMS] =
    { {77, 68, 86, 73},
      {96, 87, 89, 78},
      {70, 90, 86, 81} };

    printf("%s", "Inserisci numero:\n"
        "0 per calcolare voto maggiore\n"
        "1 per calcolare voto minore\n"
        "2 per calcolare la media\n"
        "3 per stampare tutti i voti\n"
        "4 per fine: \n");
    int choice;
    scanf("%d", &choice);

    while (choice >= 0 && choice < 4) {
        (*f[choice])(studentsGrade);
        printf("%s", "Inserisci numero:\n"
            "0 per calcolare voto maggiore\n"
            "1 per calcolare voto minore\n"
            "2 per calcolare la media\n"
            "3 per stampare tutti i voti\n"
            "4 per fine: \n");

        scanf("%d", &choice);
    }
}

void max(const int grades[][EXAMS])
{
    int m = grades[0][0];

    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < EXAMS; j++) {
            if (grades[i][j] > m) {
                m = grades[i][j];
            }
        }
    }

    printf("\nIl voto maggiore: %d\n\n\n", m);
}

void min(const int grades[][EXAMS])
{
    int m = grades[0][0];
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < EXAMS; j++) {
            if (grades[i][j] < m) {
                m = grades[i][j];
            }
        }
    }
    printf("\nIl voto minore: %d\n\n\n", m);
}

void average(const int grades[][EXAMS])
{

    for (int i = 0; i < STUDENTS; i++) {
        int total = 0;
        double average = 0;
        for (int j = 0; j < EXAMS; j++) {
            total += grades[i][j];
        }
        average = (float)total / EXAMS;
        printf("La media per studente [%d] e' %.2f\n", i, average);
    }
    puts("\n\n");

}

void printArray(const int grades[][EXAMS])
{
    printf("%s", "                  [0]  [1]  [2]  [3]");

    for (size_t i = 0; i < STUDENTS; i++) {
        printf("\nVoto studente[%zu]  ", i);
        for (size_t j = 0; j < EXAMS; j++) {
            printf("%-5d", grades[i][j]);
        }
    }

    puts("\n\n");
}
