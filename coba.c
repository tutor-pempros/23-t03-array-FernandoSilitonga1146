#include <stdio.h>

int main(int _argc, char **_argv)
{
    int m,i;
    scanf("%d", &m);
    int n[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n[i]);
    }

    int min = n[0];
    for (i = 1; i < m; i++)
    {
        if (n[i] < min)
        {
            min = n[i];
        }
    }

    printf("Angka terkecil adalah: %d\n", min);

    return 0;
}