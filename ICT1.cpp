// ICT1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int hashh(char a[])
{
    int i = 1;
    int b = a[0];
    while (a[i] != '\0')
    {
        b = b ^ a[i];
        i++;
    }
    int c = (b >> 4) & 15;
    b = b & 15;
    b = c ^ b;
    return b;
}


int main()
{
    char owner[16] = "Pepa";
    char name[16] = "BankBanka";
    int menu = 0;
    bool run = true;
    while (run) {
        printf("Company Name: %s\n", name);
        printf("Owner: %s\n", owner);
        printf("1 Rename \t 2 Add person \t 3 Find person \t 4 Exit");
        scanf("%d", menu);
        while (getchar() != '\n');
        switch (menu) {
        case 1:
            printf("Rename:");
            scanf("%s", &name);
            while (getchar() != '\n');
            printf("Company Name: %s\n", name);
            printf("Owner: %s\n", owner);
            break;
        case 2:
        }
    }
}
