//the first of 9.2

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10

void loc(float *(array)[N], int size);
float frand(void);
void fswap(float *el1, float *el2);

//we dont need a second var because of square matrix =)

float frand(void){

     float ret = (float)rand() / ((float)rand() + 0.1);
     return ret - floor(ret);
}

void fswap(float *el1, float *el2){

     float transfer;

     transfer = *el1;
     *el1 = *el2;
     *el2 = transfer;
}


int main(){

   float a[N][N];
   int i, j, n, transfer = 0, minpos = 0;

   printf("Source matrix:\n");

   srand(time(NULL));

   for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){
	a[i][j] = frand();
	printf("%- 3.2f", a[i][j]);
      }
      printf("\n");
   }

   printf("A new matrix:\n");

   loc(a, N);


   for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){
	printf("%- 3.2f", a[i][j]);
      }
      printf("\n");
   }

   //printf("%.2f", fsmin(a, 5, N));

   getch();
   return 0;
}

void loc(float *array[N], int size){


     int minpos, i, j;

     for(i = 0; i < size; i++){
      minpos = -1;
      for(j = 0; j < size; j++){
	 if(array[i][j] > 0 && minpos == -1) minpos = j;
	 else if(array[i][j] > 0 && array[i][j] < array[i][minpos]) minpos = j;
	 //fswap(&a[i][minpos], &a[i][N-1-j]);
       }

       fswap(&array[i][minpos], &array[i][size-i-1]);
   }
}
