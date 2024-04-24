#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main(void)
{
    int age = 0;
    printf("Alter Eingeben: ");
    scanf_s("%i", &age);

    if (age < 18)
    {
        printf("\nSie sind zu jung, Aufwiedersehen!\n");
        system("start iexplore.exe https://www.youtube.com/watch?v=dQw4w9WgXcQ");
        
    }
    else
    {
        printf("Sie sind alt genug, Willkommen!\n");
        system("curl ascii.live/rick");
    }
    int stop = 0;
    printf("Beenden?");
    printf("\nY/N:");
    scanf_s("%d", &stop);
    printf("\nBeenden...");
}