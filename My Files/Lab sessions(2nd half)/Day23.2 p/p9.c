#include<stdio.h>
int greatest(int p, int q)
{
    if (p > q)
    {
        return p;
    }
    else
    {
        return q;
    }
}
int main()
{
    int a = 5, b = 6, res;
    int (*func)(int, int);
    func = &greatest;
    res = (*func)(a, b);
    printf("%d is the maximum", res);
    return 0;
}