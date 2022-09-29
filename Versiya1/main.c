#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a=0,b=0,c=0,e=0,coin;
void start();
void autoplay();
void ran();
void winning_combinations();
void audit();

int main()
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
     start();
     break;
   }
    case 2:
   {
   	  coin=5000;
      a=b=c=0;
      autoplay();
      break;
   }
    case 3:
   {
	  winning_combinations();
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


void start()
{
	int f;
	printf("\n\n _______________________");	
	printf("\n|                       |");
	printf("\n|      coins:%5d      |",coin);
	printf("\n|_______________________|");
	printf("\n|       |       |       |");
	printf("\n|%4d   |%4d   |%4d   |",a,b,c);
	printf("\n|_______|_______|_______|");
	printf("\n|                       |");
	printf("\n|         Play!         |");
	printf("\n|_______________________|\n");
	while(1)
	{
		if(coin-300<0)
		{
			printf("\n _______________________");
			printf("\n|                       |");
			printf("\n|   Not enough coins!   |");
			printf("\n|_______________________|\n\n");	
			a=b=c=coin=0;
			break;
		}
		else
		{
			printf("\n\n1 - Start. \n");
  			printf("2 - Winning combinations.\n");
  			printf("Your choice: ");
  			scanf ("%d", &f);
  			
  			if(f==2)
  			{
  				winning_combinations();	
			  }
			else if(f==1)
			  {	
			  	coin-=300;				
				printf("\n\n _______________________");			
				printf("\n|                       |");
				printf("\n|      coins -300       |");
				printf("\n|_______________________|\n");
				
				ran();
				
			  	printf("\n _______________________");
				printf("\n|                       |");
				printf("\n|      coins:%5d      |",coin);
				printf("\n|_______________________|");
				printf("\n|       |       |       |");
				printf("\n|%4d   |%4d   |%4d   |",a,b,c);
				printf("\n|_______|_______|_______|");
			  	
				audit();
			  }
			else
			  {
			  	printf("\n _______________________");
				printf("\n|                       |");
				printf("\n|         Error.        |");
				printf("\n|  Invalid transaction  |");
				printf("\n|   number.Try again.   |");
				printf("\n|_______________________|\n\n");	
			  }

		}
	}
}

void autoplay()
{
	printf("\n\n _______________________");	
	printf("\n|                       |");
	printf("\n|      coins:%5d      |",coin);
	printf("\n|_______________________|");
	printf("\n|       |       |       |");
	printf("\n|%4d   |%4d   |%4d   |",a,b,c);
	printf("\n|_______|_______|_______|");
	printf("\n|                       |");
	printf("\n|         Play!         |");
	printf("\n|_______________________|\n");
	
	ran();
		
	while(1)
	{
		if(coin-300<0)
		{
			printf("\n _______________________");
			printf("\n|                       |");
			printf("\n|   Not enough coins!   |");
			printf("\n|_______________________|\n\n");	
			a=b=c=coin=0;
			break;
		}
			coin-=300;
			printf("\n\n _______________________");			
			printf("\n|                       |");
			printf("\n|      coins -300       |");
			printf("\n|_______________________|\n");
			
			
			printf("\n\n _______________________");	
			printf("\n|                       |");
			printf("\n|      coins:%5d      |",coin);
			printf("\n|_______________________|");
			printf("\n|       |       |       |");
			printf("\n|%4d   |%4d   |%4d   |",a,b,c);
			printf("\n|_______|_______|_______|");
			
			ran();
			
			audit();
	}
}
void winning_combinations()
{
		printf("\n _______________________");
	    printf("\n|       |       |       |");
		printf("\n|   0   |   0   |   0   |");
		printf("\n|_______|_______|_______|");			
		printf("\n|       |       |       |");
		printf("\n|   5   |   5   |   x   |");
		printf("\n|_______|_______|_______|");
		printf("\n|       |       |       |");
		printf("\n|   5   |   5   |   5   |");
		printf("\n|_______|_______|_______|");
		printf("\n|       |       |       |");
		printf("\n|   1   |   1   |   1   |");
		printf("\n|_______|_______|_______|");
		printf("\n|       |       |       |");
		printf("\n|   2   |   2   |   2   |");
		printf("\n|_______|_______|_______|");	
		printf("\n|       |       |       |");
		printf("\n|   3   |   3   |   3   |");
		printf("\n|_______|_______|_______|");
		printf("\n|       |       |       |");
		printf("\n|   4   |   4   |   4   |");
		printf("\n|_______|_______|_______|");	
		printf("\n|       |       |       |");
		printf("\n|   5   |   x   |   x   |");
		printf("\n|_______|_______|_______|");			
		printf("\n|       |       |       |");
		printf("\n|   5   |   5   |   x   |");
		printf("\n|_______|_______|_______|");
		printf("\n|       |       |       |");
		printf("\n|   5   |   5   |   5   |");
		printf("\n|_______|_______|_______|");	
		printf("\n|       |       |       |");
		printf("\n|   7   |   X   |   X   |");
		printf("\n|_______|_______|_______|");			
		printf("\n|       |       |       |");
		printf("\n|   7   |   7   |   x   |");
		printf("\n|_______|_______|_______|");
		printf("\n|       |       |       |");
		printf("\n|   7   |   7   |   7   |");
		printf("\n|_______|_______|_______|\n\n");	
}
void ran()
{
  a=rand() % 8; 
  b=rand() % 8; 
  c=rand() % 8; 
}
void audit()
{
	if(a==b==c==7)
	{

			printf("\n|                       |");
			printf("\n|        Jackpot!       |");
			printf("\n|       +9999 coins     |");
			printf("\n|_______________________|");
			coin+=9999;		
	}
	else  if(a==b==c==6)
	{

			printf("\n|                       |");
			printf("\n|  You lost all coins!  |");
			printf("\n|_______________________|");	
			coin=0;
	}
	else  if(a==b==c==5)
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +1000 |");
			printf("\n|_______________________|");
			coin+=1000;	
	}
	else  if(a==b==c && 5>a>=0 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +%d00  |",a);
			printf("\n|_______________________|");
			coin+=(a*100);	
	}
	else  if(a==b==5 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +300  |");
			printf("\n|_______________________|");
			coin+=300;	
	}
	else  if(a==5 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +150  |");
			printf("\n|_______________________|");
			coin+=150;	
	}
		else  if(a==b==7 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +1000 |");
			printf("\n|_______________________|");
			coin+=150;	
	}
	else  if(a==7 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +500  |");
			printf("\n|_______________________|");
			coin+=500;	
	}
	else
	{

			printf("\n|                       |");
			printf("\n|    Bad combination.   |");
			printf("\n|   Your winnings are   |");
			printf("\n|        0 coins!       |");
			printf("\n|_______________________|");
            coin+=0;
	}
}
