#include <stdio.h>
#include <stdlib.h>
void draw(int);
int main()
{
    int height;
    printf("enter height of Rhombus : ");
    scanf_s("%d", &height);
    draw(height);
}

void draw(int height)
{
    int i, j = 0, k, l = 0;
    char s[25] = { "abcdefghijklmnopqrstwxyz" };
    printf("\n\n");
    for (i = 1; i <= height; i++)
    {
        for (k = height - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("%c ", s[l]);
            l++;
            if (l > 23)
            {
                l = 0;
            }
        }
        printf("\n");
    }
    for (i = height - 1; i >= 1; i--)
    {
        for (k = height - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("%c ", s[l]);
            l++;
            if (l > 23)
            {
                l = 0;
            }
        }
        printf("\n");
    }
}