#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a=0,b=0,c=0,e=0,coin;

int main(int argc, char* argv[])
{

  while (1)
 {
    int m;
  printf("\n1 - Start. \n");
  printf("2 - Autoplay. \n");
  printf("3 - Winning combinations.\n");
  printf("4 - Exit.\n");
  printf("Your choice: ");
  scanf ("%d", &m);
printf("\n");
  switch(m)
  {
    case 1:
   {  
     coin=5000;
     a=b=c=0;
     start(& a, &b, &c, &coin);
     break;
   }
    case 2:
   {
   	  coin=5000;
      a=b=c=0;
      autoplay(& a, &b, &c, &coin);
      break;
   }
    case 3:
   {
	  winningcomb();
      break;
   }
    case 4:
  {
  			printf("\n _______________________");
			printf("\n|                       |");
			printf("\n|        Goodbye!       |");
			printf("\n|_______________________|\n\n");	
      return 0;
  }
      default:
	  {
	  		printf("\n _______________________");
			printf("\n|                       |");
			printf("\n|         Error.        |");
			printf("\n|  Invalid transaction  |");
			printf("\n|   number.Try again.   |");
			printf("\n|_______________________|\n\n");	
	   } 
  }
  continue;
 }
 return 0;
}

