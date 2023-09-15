/* This is going to be fun

   we will write a program that generate a random number and ask
   the player to guess it .
   If the Player guess is higher than the actual then the program dislplay " Lower number please "
   similarly if the user guess is to low then the program display " Higher number please"
   when the user  guess the correct number then program display the number of guesses the player used to arrive at the number

   Hint : use loop
          use a random number genrator */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void main()
{
   
   int number, guess, nguesses = 1;
   srand(time(0));
   number = rand() % 100 + 1; // Generates a random number between 1 and 100
   // printf("The number is %d\n", number);
   // Keep running the loop until the number is guessed
   do
   {
      printf("Guess the number between 1 to 100\n");
      scanf("%d", &guess);
      if (guess > number)
      {
         printf("Lower number please!\n");
      }
      else if (guess < number)
      {
         printf("Higher number please!\n");
      }
      else
      {
         printf("You guessed it in %d attempts\n", nguesses);
      }
      nguesses++;
   } while (guess != number);

   getch();
}