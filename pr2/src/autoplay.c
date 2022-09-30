#ifndef AUTOPLAY_C
#define AUTOPLAY_C

void autoplay(int *a,int *b, int *c, int *coin)
{
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
	
	ran(& a, &b, &c);
		
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
			*coin-=300;
			printf("\n\n _______________________");			
			printf("\n|                       |");
			printf("\n|      coins -300       |");
			printf("\n|_______________________|\n");
			
			
			printf("\n\n _______________________");	
			printf("\n|                       |");
			printf("\n|      coins:%5d      |",*coin);
			printf("\n|_______________________|");
			printf("\n|       |       |       |");
			printf("\n|%4d   |%4d   |%4d   |",*a,*b,*c);
			printf("\n|_______|_______|_______|");
			
			int x,y,z,q;
			x=*a;
			y=*b;
			z=*c;
			q=*coin;
			audit(& x, &y, &z, &q);
			*coin=q;
			
			ran(& a, &b, &c);

	}
}

#endif
