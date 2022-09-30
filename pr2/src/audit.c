#ifndef AUDIT_C
#define AUDIT_C

void audit(int *x,int *y, int *z, int *q)
{
	printf("\n|%4d   |%4d   |%4d   |",*x,*y,*z);
//	int x,y,z,q;
//	x=*a;
//	y=*b;
	//z=*c;
	//q=*coin;
if(*x==7 && *y==7 && *z==7)
	{

			printf("\n|                       |");
			printf("\n|        Jackpot !      |");
			printf("\n|         You win       |");
			printf("\n|       +9999 coins     |");
			printf("\n|_______________________|\n\n");
			*q+=9999;
			exit (main());		
	}
else  if(*x==6 && *y==6 && *z==6)
	{

			printf("\n|                       |");
			printf("\n|  You lost all coins!  |");
			printf("\n|_______________________|");	
			*q=0;
	}
else  if(*x==5 && *y==5 && *z==5)
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +1000 |");
			printf("\n|_______________________|");
			*q+=1000;	
	}
else  if(*x==*y && *y==*z && 5>*z>=0 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +%d00  |",*x);
			printf("\n|_______________________|");
			*q+=(*x*100);	
	}
else  if(*x==5 && *y==5 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +300  |");
			printf("\n|_______________________|");
			*q+=300;	
	}
else  if(*x==5 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +150  |");
			printf("\n|_______________________|");
			*q+=150;	
	}
else  if(*x==7 && *y==7 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +1000 |");
			printf("\n|_______________________|");
			*q+=1000;	
	}
else  if(*x==7 )
	{

			printf("\n|                       |");
			printf("\n|  coins: you won +500  |");
			printf("\n|_______________________|");
			*q+=500;	
	}
else
	{
			printf("\n|                       |");
			printf("\n|    Bad combination.   |");
			printf("\n|   Your winnings are   |");
			printf("\n|        0 coins!       |");
			printf("\n|_______________________|");
            *q+=0;
	}
}
#endif
