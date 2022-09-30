#ifndef START_C
#define START_C

void start(int *a,int *b, int *c, int *coin)
{
	int f;
	printf("\n\n _______________________");	
	printf("\n|                       |");
	printf("\n|      coins:%5d      |",*coin);
	printf("\n|_______________________|");
	printf("\n|       |       |       |");
	printf("\n|%4d   |%4d   |%4d   |",*a,*b,*c);
	printf("\n|_______|_______|_______|");
	printf("\n|                       |");
	printf("\n|         Play!         |");
	printf("\n|_______________________|\n");
	while(1)
	{
		if(*coin-300<0)
		{
			printf("\n _______________________");
			printf("\n|                       |");
			printf("\n|   Not enough coins!   |");
			printf("\n|_______________________|\n\n");	
			*a=*b=*c=*coin=0;
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
  				winningcomb();
			  }
			else if(f==1)
			  {	
			  	*coin-=300;				
				printf("\n\n _______________________");			
				printf("\n|                       |");
				printf("\n|      coins -300       |");
				printf("\n|_______________________|\n");
				
				ran(& a, &b, &c);
				
			  	printf("\n _______________________");
				printf("\n|                       |");
				printf("\n|      coins:%5d      |",*coin);
				printf("\n|_______________________|");
				printf("\n|       |       |       |");
				printf("\n|%4d   |%4d   |%4d   |",*a,*b,*c);
				printf("\n|_______|_______|_______|");
			  	
			//	int x,y,z,q;
			//	x=*a;
			//	y=*b;
			//	z=*c;
			//	q=*coin;
			int x,y,z,q;
			x=*a=7;
			y=*b=7;
			z=*c=7;
			q=*coin;
				audit(& x, &y, &z, &q);
				*coin=q;
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

#endif
