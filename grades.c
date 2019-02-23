#include <stdio.h> // yaniel hasemy george 
#include <cs50.h>

    int TOTALPOINTSEARNED = 0; 
    int TOTALPOINTSPOSSIBLE = 0;

int main(void){
    int assignments = get_int("How many total assignments?:\n"); // sets the amount of times its gonna ask for both total points and possible 
    for(int i = 0; i < assignments;i++){ // loops the code untill your out of assignments 
          TOTALPOINTSEARNED = TOTALPOINTSEARNED+ get_int ("Total points earned on assignment #%d:\n",i+1); // adds total points earned every loop 
          TOTALPOINTSPOSSIBLE = TOTALPOINTSPOSSIBLE+ get_int ("Total possible points on assignment #%d:\n",i+1); // adds total points possible every loop 
    }
    float finalscore = 0; 
    finalscore = (float)TOTALPOINTSEARNED/(float)TOTALPOINTSPOSSIBLE*100; // divides earned by possible converts to percent
    printf("Current grade ");
        printf("%.02f",finalscore);// difines the amount of decimals 
        printf("%%\n"); // displayes score as percent
}
