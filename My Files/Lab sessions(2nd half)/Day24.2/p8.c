#include<stdio.h>

struct Teamscore
{
    int wickets;
    int score

}ts={2,325};
struct country
{
    char *name;
}coun ={"India"};
int main()
{
    struct Teamscore tcon =ts;
    printf("%d %s %d", tcon.score,ts.wickets,coun.name);
}
