#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

float state = 0.1;

// RANDOM

float rand_float(float max)
{
    state = 1.977 * MIN(state, 1 - state);
    return state;
}

// TABS
int tabs(int tab)
{
    for (int i = 0; i < tab; i++)
    {
        printf(" ");
    }
}

char z[3];
float b, S;
int a, y, t, c, d, R;
int aa[7] = {2, 3, 5, 2, 3, 5, 2};
int j[6] = {200, 240, 180, 170, 180, 170};

int main()
{
    tabs(26);
    printf("SMASH\n");
    tabs(20);
    printf("CREATIVE COMPUTING\n");
    tabs(18);
    printf("MORRISTOWN, NEW JERSEY\n\n\n");
    printf("DO YOU NEED INSTRUCTIONS\n");
    scanf("%s", z);
    if (strcmp(z, "Y") == 0)
    {
        printf("\n");
        printf("THIS IS SMASH--THE GAME THAT SIMULATES A CAR RACE.\n");
        printf("YOU WILL RESPOND WITH ONE OF THE FOLLOWING MANUEVERS\n");
        printf("WHEN A '?' IS TYPED.  THE POSITION NUMBERS REFER TO THE\n");
        printf("POINT AT WHICH YOU ARE ON THE TRACK-THEY GO AS FOLLOWS:\n");
        printf("  1-THE START LINE\n");
        printf("  2-MID STRAIGHT-AWAY\n");
        printf("  3-COMING UP ON A LEFT TURN\n");
        printf("  4-MID LEFT TURN\n");
        printf("  5-COMING UP ON A RIGHT TURN\n");
        printf("  6-MID-RIGHT TURN\n");
        printf("  7-THE FINISH LINE\n\n");
        printf("     MANEUVERS\n");
        printf("  1-FLOOR IT\n");
        printf("  2-ACCELERATE(MODERATE)\n");
        printf("  3-BRAKE SLIGHT\n");
        printf("  4-JAM ON THE BRAKES\n");
        printf("  5-SHARP RIGHT\n");
        printf("  6-MODERATE RIGHT\n");
        printf("  7-SHARP LEFT\n");
        printf("  8-MODERATE LEFT\n");
    }
    else
    {
        goto n350;
    }

n350:
    printf("\n");
    printf("TIME(SEC)\t MILES TO GO\t M.P.H.\t   POSITION\t  MOVE\n");
    int a = (int)(10 + rand_float(1) * 5);
    y = a;
    b = 0;
    t = 0;
    c = 1;
    goto n420;
n410:
    c = (int)(2 + rand_float(1) * 5);
n420:
    printf("%i\t         %d\t           %f\t       %i\t   ", t, a, b, c);
    scanf("%i", &d);
    if (d >= 1 && d <= 8)
    {
        goto n490;
    }

    else
    {
        goto n470;
    }

n470:
    printf("ONE THRU EIGHT ONLY\n");
    goto n420;

n490:
    if (d == 1)
    {
        b = (int)(3 * b + 20 + (int)(10 + rand_float(1) * 91) / 10);
        goto n510;
    }
n510:
    if (d == 2)
    {
        b = (int)(3 * b / 2 + 7 + (int)(10 + rand_float(1) * 61) / 10);
        goto n530;
    }
n530:
    if (d == 3)
    {
        b = (int)(7 * b / 8 - 6 + (int)(10 + rand_float(1) * 41) / 10);
        goto n550;
    }
n550:
    if (d == 4)
    {
        b = (int)(4 * b / 7 - 26 + (int)(10 + rand_float(1) * 81) / 10);
        goto n570;
    }
n570:
    if (d == 7)
    {
        goto n590;
    }
    if (d == 5)
    {
    n590:
        b = (int)(9 * b / 10 * (0.7 + rand_float(1) * 0.006));
        goto n600;
    }
n600:
    if (d == 8)
    {
        goto n620;
    }
    if (d == 6)
    {
    n620:
        b = (int)(13 * b / 14 * (0.7 + rand_float(1) * 0.006));
        goto n630;
    }
n630:
    if (b > 0)
    {
        goto n650;
    }
    b = 0;
n650:
    if (a - b / 120 > 0)
    {
        goto n730;
    }
    t = t + a * 3600 / b;
    printf("%i              %i                 %f          %i\n", t, 0, b, 7);
    R = (int)((int)(t / (20 * y) + 0.5));
    printf("THAT ENDS THE RACE, YOU PLACED #  %i\n", R);
    S = (float)(y * 3600 / t);
    printf("YOUR AVERAGE SPEED WAS  %f  M.P.H.\n", S);
    if ((int)(t / (20 * y) + 0.5) != 1)
    {
        goto n980;
    }
    printf("THAT WAS A PERFECT RACE, CHAMP!\n");
    goto n980;
n730:
    if (c != 2)
    {
        goto n760;
    }
    if (d == 7)
    {
        goto n960;
    }
    if (d == 5)
    {
        goto n960;
    }
n760:
    if (c == 3)
    {
        goto n780;
    }
    if (c != 4)
    {
        goto n800;
    }
n780:
    if (d == 5)
    {
        goto n960;
    }
n800:
    if (d == 6)
    {
        goto n960;
    }
    if (c == 6)
    {
        goto n820;
    }
    if (c != 5)
    {
        goto n840;
    }
n820:
    if (d == 7)
    {
        goto n960;
    }
    if (d == 8)
    {
        goto n960;
    }
n840:
    if (b > j[c])
    {
        goto n970;
    }
    if ((int)(1 + rand_float(0) * 77) != 40)
    {
        goto n880;
    }
    printf("SMASH--YOU HAVE BEEN HIT BY ANOTHER CAR!!\n");
    goto n980;
n880:
    t = t + 30;
    a = a - b / 120;
    if (c == 1)
    {
        goto n410;
    }
    if (c == 4)
    {
        goto n410;
    }
    if (c == 2)
    {
        goto n410;
    }
    if (c == 6)
    {
        goto n410;
    }
    c = c + 1;
    goto n420;
n960:
    printf("BAD MOVE!\n");
n970:
    printf("SMASH--YOU WENT RIGHT INTO THE WALL!\n");
n980:
    printf("DO YOU WANT TO PLAY AGAIN\n");
    scanf("%s", z);
    if (strcmp(z, "Y") == 0)
    {
        goto n350;
    }
    else
    {
        return 0;
    }
}