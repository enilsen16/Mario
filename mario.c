#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("How high would you like the half-pyramid?\n");
  int n = 0;

  do
  {
    printf("Please enter a positive number that is less than 24?\n");
    n = GetInt();
  } while (n < 0 || n > 23 || n == 0);

  for (int i = 0; i < n; i++)
    {
      for (int s = 0; s < n-i; s++)
        {
          printf(" ");
        }
        for (int h = 0; h < i + 2; h++)
          {
            printf("#");
          }
          printf("\n");
        }
      }
