
struct Player 
{
    char name[50];
    int matches;
    int runs;
    int wickets;
};


void accept(struct Player p[], int n) 
{
    for(int i=0; i<n; i++) {
        printf("\nEnter details of Player %d:\n", i+1);
        printf("Name: ");
        scanf("%s", p[i].name);
        printf("Matches: ");
        scanf("%d", &p[i].matches);
        printf("Runs: ");
        scanf("%d", &p[i].runs);
        printf("Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}


void display(struct Player p[], int n) {
    printf("\n--- Player Information ---\n");
    for(int i=0; i<n; i++) {
        printf("\nPlayer %d\n", i+1);
        printf("Name    : %s\n", p[i].name);
        printf("Matches : %d\n", p[i].matches);
        printf("Runs    : %d\n", p[i].runs);
        printf("Wickets : %d\n", p[i].wickets);
    }
}


void findMax(struct Player p[], int n) {
    int maxRunIndex = 0, maxWicketIndex = 0;

    for(int i=1; i<n; i++) {
        if(p[i].runs > p[maxRunIndex].runs)
            maxRunIndex = i;
        if(p[i].wickets > p[maxWicketIndex].wickets)
            maxWicketIndex = i;
    }

    printf("\n--- Player with Maximum Runs ---\n");
    printf("Name: %s | Runs: %d\n", p[maxRunIndex].name, p[maxRunIndex].runs);

    printf("\n--- Player with Maximum Wickets ---\n");
    printf("Name: %s | Wickets: %d\n", p[maxWicketIndex].name, p[maxWicketIndex].wickets);
}

int main() {
    struct Player team[10];
    int n = 10;  

    accept(team, n);
    display(team, n);
    findMax(team, n);

 
}
