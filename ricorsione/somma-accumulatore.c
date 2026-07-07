#include <stdio.h>

int s(int N, int p)
{
    if (N == 0)
    {
        return p;
    }
    else
        return s(N - 1, N + p); // tail recursion
}

int main()
{
    printf("%d\n", s(6, 0));
    return 0;
}