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
    int year = 2000;
    char menu;
    char persons[10][10];
    int i = 0;
    int x;
    char search[10];
    bool run = true;
    while (run) {
        system("cls");
        printf("Year: %d\n", year);
        printf("Company Name: %s\n", name);
        printf("Owner: %s\n", owner);
        printf("1 Rename \t 2 Add person \t 3 Find person \t 4 Change year \t 5 Exit\n");
        menu = tolower(getchar());
        while (getchar() != '\n');
        switch (menu) {
        case '1':
            printf("Rename: ");
            scanf("%s",name);
            while (getchar() != '\n');
            break;
        case '2':
            printf("Pridejte jmeno: "); // "Jarek" a "Miroslav" mají shodu
            scanf("%s", persons[i]);
            printf("%d", hashh(persons[i]));
            while (getchar() != '\n');
            i++;
            break;
        case '3':
            printf("Hledane jmeno: ");
            scanf("%s", search);
            x = hashh(search);
            while (getchar() != '\n');
            for(int a = 0; a < i; a++)
                if (hashh(persons[a]) == x) {
                    printf("Je tu: %s", persons[a]);
                }
                else 
                {
                    printf("Nikdo takovy tu neni");
                }
            getchar();
            break;
        case '4':
            printf("Set year: ");
            scanf_s("%d", &year);
            while (getchar() != '\n');
            break;
        case '5':
            run = false;
            break;
        }
    }
    return 1;
}
