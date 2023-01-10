#include <stdio.h>
#define SIZE 4

void sommare(double a, double b);
void sottrare(double a, double b);
void moltiplicare(double a, double b);
void dividere(double a, double b);
int menu(void);

int main()
{
    void (*f[SIZE])(double, double) = {sommare, sottrare, moltiplicare, dividere};
    
    int choice;
    double x, y;
    
    while((choice = menu()) > 0 && choice <=4){
        printf("%s", "Inserisci due numeri: ");
        scanf("%lf%lf", &x, &y);
        (*f[choice - 1])(x, y);
    }
}

int menu(void)
{
    int z;
    printf("\n\nQuale calcolo vuoi fare?\n"
            "1 sommare\n"
            "2 sottrare\n"
            "3 moltiplicare\n"
            "4 dividere\n"
            "5 fine\n");
    scanf("%d", &z);
    return z;
}

void sommare(double a, double b)
{
    printf("\n%.2f + %.2f = %.2f\n", a, b, a + b);
}

void sottrare(double a, double b)
{
    printf("\n%.2f - %.2f = %.2f\n", a, b, a - b);
}

void moltiplicare(double a, double b)
{
    printf("\n%.2f * %.2f = %.2f\n", a, b, a * b);
}

void dividere(double a, double b)
{
    printf("\n%.2f / %.2f = %.2f\n", a, b, a / b);
}
