#ifndef RAN_C
#define RAN_C

void ran(int **a,int **b, int **c)
{
  **a=rand() % 8; 
  **b=rand() % 8; 
  **c=rand() % 8; 
}

#endif
