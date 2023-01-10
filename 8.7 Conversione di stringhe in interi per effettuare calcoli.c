#include <stdio.h>
#define SIZE 4

int main()
{
    char *a[SIZE] = { "5437542", "7635", "1765", "8653" };
    int x[SIZE];
    int total = 0;
    
    for(int i = 0; i < SIZE; i++){
        sscanf(a[i], "%d", &x[i]); 
        total += x[i];
    }

    printf("%d\n", total);
}
