
//conway's game of life
// written by aswin_v
//17december2019



#include<stdio.h>
#include <stdlib.h>
void game(int ,int  );





int main()
{
	printf("conway's game of life \n 1:random \t 2:glider \t 3: 10 in a row \t 4:r-pentomino \t 5:beacon \t 6:gosper's glider gun \t 7:7 in a row\t 10:puffer");
	
	int a;
	scanf("%d",&a);
	printf("select a speed \n 1:slow \t 2: medium \t 3:high ");
	
	int b;
	scanf("%d",&b);
	
	game(a,b);}


void  game(int a,int b)


{
     int n;

     if (b==1) n=70000;  //speed
     if (b==2) n=10000;
     if (b==3) n=1000;

     int height=878;
     int width =2;

	int rows=100,columns=100,i,j,counter,sum;
	
         sum =1;	
	int present[rows][columns];
	int  next[rows][columns]; //next generation
        int neighbours,random;  //#neighbours of a cell






 for(i=1;i<rows;i++)            //initializing a dead colony
	   {    for(j=1;j<columns;j++)

		     { present[i][j]=0;}
						            }

			       

if(a==1) {
     
	for(i=0;i<rows;i++)     //initializing the automata with dead and live cells randomly                                                       
	  {    for(j=0;j<columns;j++) 
		  {random=rand();
 			  if (random%2==0) present[i][j]=1;
			  else  present[i][j]=0;
                          next[i][j]=present[i][j];

		  }         }  

}

if (a==3)
present[7][10]=present[7][11]=present[7][12]=present[7][13]=present[7][14]=present[7][15]=present[7][16]=present[7][17]=present[7][18]=present[7][19]=1;//10inarow


 if(a==2)  present[7][2]=present[7][3]=present[7][4]=present[6][4]=present[5][3]=1;  //glider


if(a==4) present[20][20]=present[20][21]=present[19][21]=present[21][21]=present[19][22]=1; //r-pentomino


if(a==5) present[20][20]=present[20][21]=present[21][20]=present[21][21]=present[22][22]=present[22][23]=present[23][22]=present[23][23]=1;


if(a==6)    { present[16][12] = 1;
    present[17][12] = 1;
    present[16][13] = 1;
    present[17][13] = 1;
    //nave
    present[14][24] = 1;
    present[14][25] = 1;
    present[15][23] = 1;
    present[15][27] = 1;
    present[16][22] = 1;
    present[17][22] = 1;
    present[18][22] = 1;
    present[19][23] = 1;
    present[20][24] = 1;
    present[20][25] = 1;
    present[19][27] = 1;
    present[18][28] = 1;
    present[17][26] = 1;
    present[17][28] = 1;
    present[17][29] = 1;
    present[16][28] = 1;
    present[15][27] = 1;

    present[14][32] = 1;
    present[15][32] = 1;
    present[16][32] = 1;
    present[14][33] = 1;
    present[15][33] = 1;
    present[16][33] = 1;
    present[13][34] = 1;
    present[17][34] = 1;
    present[12][36] = 1;
    present[13][36] = 1;
    present[17][36] = 1;
    present[18][36] = 1;
    //o outro block
    present[14][46] = 1;
    present[15][46] = 1;
    present[14][47] = 1;
    present[15][47] = 1;}

if(a==7)

{present[7][10]=present[7][11]=present[7][12]=present[7][13]=present[7][14]=present[7][15]=present[7][16]=1;
}

/*
if(a==10)  {    



FILE *file;

int cord;
 int i,j;

file =fopen("file","r");

for(i=0;i<height-20;i++)
   {
      for(j=0;j<width-20;j++)
	{ fscanf(file,"%d",&cord);
        // i=i+20;j=j+20;
       present[i+20][j+20]=cord;
}


}

fclose(file);


}     
*/

//printing the ca




while(sum!=0)
{  printf("\033[H\033[J"); //clearing the screen



  for(i=1;i<rows-1;i++)
  {    for(j=1;j<columns-1;j++)
  
          {    
            


neighbours= present[i][j-1] + present[i][j+1] + present[i-1][j-1] + present[i-1][j] + present[i-1][j+1]  + present[i+1][j-1] +  present[i+1][j] + present[i+1][j+1] ;
	      
		  if         (present[i][j]==1&& neighbours<2) next[i][j]=0;   //underpopulation
		  else if    (present[i][j]==1&& neighbours>3) next[i][j]=0;   //overpopulation
		  else if    (present[i][j]==0&& neighbours==3) next[i][j]=1;   //regeneration
                  else  next[i][j] = present[i][j];                           //stasis
}

          }

  printf("\033[H\033[J"); //clearing the screen

for(i=0;i<rows;i++)     //printing the matrix
          {   counter=0;
		  for(j=0;j<columns;j++)

                  {if(next[i][j]==1)  printf("\033[07m  \033[m");
			  else printf("  ");	  //printf("\t%d",next[i][j]);
			  counter++;
			  if (counter==columns){ printf("\n");}  // printf("\n");printf("\n");}
		  }



                      
 }

usleep(n);

sum=0;



for(i=0;i<rows;i++)     //initializing new generation
          {    for(j=0;j<columns;j++)
		      {   
			
			 sum=sum+next[i][j];
			 
			 
			  present[i][j]=next[i][j];

              }
 
          }




//if (sum!=0) game();








  }	 
	  
	 	  
  
}
