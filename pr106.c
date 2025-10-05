#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while (T--)
    {
        int n;
        scanf("%d",&n);

        char S[n+1];
        scanf("%s",S);

        int tig=0, pat=0;

        for (int i=0;i<n;i++)
        {
            if (S[i]=='T')
            {
                tig++;
            }
            else if (S[i] == 'P')
            {
                pat++;
            }
        }

        if (tig > pat)
        {
            printf("Tiger\n");
        }
        else if (pat > tig)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}
