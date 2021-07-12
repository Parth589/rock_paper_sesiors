#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int i = 0, playerscore = 0, computerscore = 0;

    char name[20];
    printf(" Enter Your Name:  ");
    gets(name);
    // getchar();
    while (i < 3)
    {

        // all set
        char playerchoice;
        // player made his choice by a character
        char computerchoice;
        printf("\n %s 's turn :\n ", name);
        printf(" \npress 'r' for rock  'p'for paper 's' for sessors \n");
        scanf("%c", &playerchoice);
        getchar();
        // THIS IS IF PLAYER MISUSE THIS CODE
        if (playerchoice == 'r' || playerchoice == 'p' || playerchoice == 's')
        {
        }
        else
        {
            printf("INVALID CHOICE YOU ARE DISQUALIFIED...");
            goto end;
            // end is defined to end of the code and when player misuse this code it will return
        }
        // getchar is for buffer key
        // all set
        printf(" Computer 's turn : \n");
        // now starting AI to choose for computer choice
        int num;
        srand(time(NULL));
        num = (rand() % 100);
        // printf(" %d ", num);
        // all 3 choices have same probability to choose
        if (num < 33)
        {
            computerchoice = 'r';
            // ROCK....
        }
        else if (num < 66)
        {
            computerchoice = 'p';
            // PAPER.....
        }
        else if (num < 99)
        {
            computerchoice = 's';
            // SESSIORS.... spelling may be incorrect
        }
        else
        {
            computerchoice = 'x';
            // IF SYSTEM MIS BEHAVES
        }
        printf(" COMPUTER HAS CHOSEN %c ", computerchoice);
        // printf(" %c ", computerchoice);
        // all set
        int disicion;
        // 1 IS FOR PLAYER WINS, 0 IS FOR TIE,-1 IS FOR COMPUTER WINS
        if (playerchoice == computerchoice)
        {
            disicion = 0;
        }

        else if (playerchoice == 'r' && computerchoice == 'p')
        {
            disicion = -1;
        }
        else if (playerchoice == 'r' && computerchoice == 's')
        {
            disicion = 1;
        }
        else if (playerchoice == 'p' && computerchoice == 'r')
        {
            disicion = 1;
        }
        else if (playerchoice == 'p' && computerchoice == 's')
        {
            disicion = -1;
        }
        else if (playerchoice == 's' && computerchoice == 'r')
        {
            disicion = -1;
        }
        else if (playerchoice == 's' && computerchoice == 'p')
        {
            disicion = 1;
        }
        else
        {
            disicion = 34;
            // AGAIN IF SYSTEM MISBEHAVES
        }
        // printf(" %d ", disicion);
        //  all set
        if (disicion == 1)
        {
            printf("\n  you win \n ");
            playerscore++;
        }
        else if (disicion == -1)
        {
            printf("\n  you lose\n ");
            computerscore++;
        }
        else if (disicion == 0)
        {
            printf("\n  game draw\n ");
            playerscore++;
            computerscore++;
        }

        i++;
    }
    if (computerscore < playerscore)
    {
        printf(" YOU ARE AWESOME ");
    }
    else
    {
        printf(" BETTER LUCK NEXT TIME  ");
    }

    printf("\n THANKS FOR PLAYING  :)\n PRESS ANY KEY TO EXIT...");
    getch();
end:
    return 0;
}