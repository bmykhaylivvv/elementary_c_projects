#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int k;
    int height;
    // input height
    printf("Height: ");
    scanf("%i", &height);

    for (i = 0; i < height; i++)
    {
        for (k = 0; k < height - i; k++)
        {
            printf(" "); // offset
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("#"); // hash print
        }

        // Remove last unnecessary line
        if (i == height - 1)
        {
            printf("");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}
