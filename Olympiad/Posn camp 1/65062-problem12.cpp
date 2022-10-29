#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,c=0;
    cin >> N;
    int num[9999]
    for(i = 0; i < 9999; i++)
        num[i] = i + 1;

    for(i = 1; (num[i] * num[i]) <= 9999; i++)
    {
        if(num[i] != 0)
        {
            for(j = num[i] * num[i]; j <= 9999; j += num[i])
            {
                num[j - 1] = 0;
            }
        }
    }

    for(i = 1; i < 9999; i++)
    {
        if(num[i] != 0 && c<N)
        {
            printf("%d ", num[i]);
            c++;
        }

    }

    printf("\n");

    return 0;
}


