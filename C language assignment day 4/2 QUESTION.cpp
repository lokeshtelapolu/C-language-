#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 11

struct Player {
    char name[50];
    int runs;
};
int main() 
{
    struct Player team[MAX_PLAYERS];
    int n, total_runs = 0;

    printf("Enter number of players in the team (max %d): ", MAX_PLAYERS);
    scanf("%d", &n);

    if (n > MAX_PLAYERS) 
	{
        printf("Error: Too many players in the team.");
        return 1;
    }
    for (int i = 0; i < n; i++) 
	{
        printf("Enter name of player %d: ", i+1);
        scanf("%s", team[i].name);
        printf("Enter runs scored by %s: ", team[i].name);
        scanf("%d", &team[i].runs);
        total_runs += team[i].runs;
    }
    printf("\nBatting information:\n");
    for (int i = 0; i < n; i++) {
        printf("%s scored %d runs.\n", team[i].name, team[i].runs);
    }
    printf("\nTotal runs scored by the team: %d\n", total_runs);
    return 0;
}
