#include <stdio.h>
int main() {
    int totalShots, successShots,age,saves,misses;
    float rating1;
    char name[50];
   //personal info
   printf("\tEnter the name of the Player:\n\t "); 
   scanf("%s", &name); 
   printf("\tEnter your age:\n\t "); 
   scanf("%d", &age);
   // Ask user for input
   printf("\tEnter total shots played:\t ");
   scanf("%d", &totalShots);
   printf("\tEnter successful shots: \t");
   scanf("%d", &successShots);
   printf("\tEnter the number of Saves:\t ");
   scanf("%d", &saves);
   printf("\tEnter the number of Misses:\t ");
   scanf("%d", &misses);
   
   if (successShots < 0 || successShots > totalShots) 
    {
        printf("Invalid number of successful shots!\n");
        return 1;
    }
    // Calculate rating
    rating1 = ((float)successShots / totalShots) * 100;
    
    // (float)successShots: This is an explicit type cast.
    // Display rating
    printf("\n--- Badminton Player Rating ---\n");
    printf("\nPlayer Name-%s",name);
    printf("\nPlayer Age- %d",age);
    printf("\nTotal Shots: %d\n", totalShots);
    printf("Successful Shots: %d\n", successShots);
    printf("Saves: %d\n", saves);
    printf("Misses: %d\n", misses);
    printf("Accuracy Rating: %.2f%%\n", rating1);




    // Determine performance level
    if (rating1 >= 90)
        printf("Rating: Excellent\n");
    else if (rating1>= 75)
        printf("Rating: Good\n");
    else if (rating1 >= 50)
        printf("Rating: Average\n");
    else
        printf("Rating: Poor\n");




    return 0;
}
