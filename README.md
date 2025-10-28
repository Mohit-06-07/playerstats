Activity 3 

Research 
Sports data analysis is the use of statistics and data to gain insights that improve performance and decision-making in sports. This field involves collecting and analyzing various data points, from player statistics to fan engagement, to help teams with player recruitment, strategy, training, and business operations like marketing and ticket sales. Professional sport players depend purely on data and statistics.From past data and basic scorekeeping to algorithmic performance predicting and especially player statistics.
This can be performed by monitoring different things, including the time spent by the players on the court, the number of shots taken by them, and where those shots were taken.
Sports analytics can predict the results of matches or games by evaluating team performance. It also points out how well a specific team is doing in comparison to other teams.


Analyse 
Badminton is an indoor racket sport played by two or four players who hit a shuttlecock over a net with lightweight rackets. The game involves a rally of hitting the shuttlecock back and forth until one side fails to return it, at which point a point is scored. Matches are played to 21 points, and a player must win by at least two points
Hence a system can be designed to calculate the parameters included in a game.Various aspects like number of serves,points scored,players playing in singles or doubles,points given to other players,number of saves and returns (e.g., smash, drop shot),net points etc.
It can be helpful for the plates to assess his or her performance in the following ways.
The system can pinpoint areas on the court where a player consistently loses points, allowing for targeted practice.Measures can be taken respectively.
ICoaches can use the data and reports to provide specific, data-driven feedback to players.For doubles pairs, analytics can help optimize strategies based on team strengths and opponent weaknesses
Analyze physical endurance during matches, which are both heavily taxed in badminton.It assesses how quickly a player can move around the court, react, and change direction.System will  analyze patterns in serve types and the effectiveness of returns.Also examine the technical form and consistency of shots like smashes, drops, and clears.It can also be used for Identify the opponent's strengths and weaknesses to develop a winning strategy.The system emphasises on pattern recognition by notice recurring patterns in how points are played, such as rally length and shot selection.

Ideate
A system designed to take input data from the player of number of shots,number of successful shots,saves and misses along with personal data. It will also calculate and give the rating of players based on scores.
Following steps are necessary for execution.
Step 1-Start
Step 2-Ask for the user to enter personal information.
Step 3-Ask for the user to enter gameplay information.
Step 4-calculate the Rating 
Step 5-display the rating
Step 6-End







 



Build
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


Testing 
Case 1
	Enter the name of the Player:  PVSindhu
	Enter your age:                        19
	Enter total shots played:	 526
	Enter successful shots:   	 477
	Enter the number of Saves:	 159
	Enter the number of Misses:	 42


--- Badminton Player Rating ---


Player Name-PVSindhu
Player Age- 19
Total Shots: 526
Successful Shots: 477
Saves: 159
Misses: 42
Accuracy Rating: 90.68%
Rating: Excellent
Case 2
Enter the name of the Player: LakshyaSen
Enter your age:                       25
Enter total shots played:	266
Enter successful shots:   	181
Enter the number of Saves:	 98
Enter the number of Misses:	 26


--- Badminton Player Rating ---


Player Name-Lakshyasen
Player Age- 25
Total Shots: 266
Successful Shots: 181
Saves: 98
Misses: 26
Accuracy Rating: 68.05%
Rating: Average




