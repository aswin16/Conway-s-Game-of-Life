
//conway's game of life
// written by aswin_v & G.David
//17december2019



#include<stdio.h>
#include <stdlib.h>



int main()
{
	printf("conway's game of life Puffer Train");
	
	printf("select a speed \n 1:slow \t 2: medium \t 3:high ");
	
	int b;
	scanf("%d",&b);
	
	game(b);}


void  game(int b)


{
     int n;

     if (b==1) n=400000;  //speed
     if (b==2) n=10000;
     if (b==3) n=1000;



	int rows=200,columns=500,i,j,counter,sum;
	
         sum =1;	
	int present[rows][columns];
	int  next[rows][columns]; //next generation
        int neighbours,random;  //#neighbours of a cell






 for(i=1;i<rows;i++)            //initializing a dead colony
	   {    for(j=1;j<columns;j++)

		     { present[i][j]=0;}
						            }


{int tambu=30;
  present[tambu+0][tambu+18]=1;

present[tambu+1][tambu+18]=1;
present[tambu+1][tambu+19]=1;
present[tambu+1][tambu+20]=1;
present[tambu+1][tambu+21]=1;

present[tambu+2][tambu+5]=1;
present[tambu+2][tambu+7]=1;
present[tambu+2][tambu+20]=1;
present[tambu+2][tambu+21]=1;

present[tambu+3][tambu+5]=1;
present[tambu+3][tambu+8]=1;
present[tambu+3][tambu+23]=1;

present[tambu+4][tambu+8]=1;
present[tambu+4][tambu+9]=1;
present[tambu+4][tambu+20]=1;
present[tambu+4][tambu+21]=1;
present[tambu+4][tambu+22]=1;
present[tambu+4][tambu+23]=1;

present[tambu+5][tambu+10]=1;
present[tambu+5][tambu+24]=1;

present[tambu+6][tambu+8]=1;
present[tambu+6][tambu+9]=1;
present[tambu+6][tambu+10]=1;
present[tambu+6][tambu+11]=1;
present[tambu+6][tambu+20]=1;
present[tambu+6][tambu+23]=1;
present[tambu+6][tambu+24]=1;
present[tambu+6][tambu+25]=1;

present[tambu+7][tambu+7]=1;
present[tambu+7][tambu+12]=1;
present[tambu+7][tambu+22]=1;
present[tambu+7][tambu+23]=1;
present[tambu+7][tambu+24]=1;

present[tambu+8][tambu+9]=1;
present[tambu+8][tambu+12]=1;
present[tambu+8][tambu+23]=1;

present[tambu+9][tambu+9]=1;
present[tambu+9][tambu+12]=1;
present[tambu+9][tambu+18]=1;
present[tambu+9][tambu+20]=1;
present[tambu+9][tambu+21]=1;
present[tambu+9][tambu+22]=1;

present[tambu+10][tambu+11]=1;
present[tambu+10][tambu+18]=1;
present[tambu+10][tambu+19]=1;
present[tambu+10][tambu+22]=1;

present[tambu+11][tambu+5]=1;
present[tambu+11][tambu+7]=1;
present[tambu+11][tambu+8]=1;
present[tambu+11][tambu+9]=1;
present[tambu+11][tambu+10]=1;
present[tambu+11][tambu+19]=1;
present[tambu+11][tambu+20]=1;
present[tambu+11][tambu+21]=1;

present[tambu+12][tambu+5]=1;
present[tambu+12][tambu+9]=1;
present[tambu+12][tambu+19]=1;

present[tambu+13][tambu+8]=1;
present[tambu+13][tambu+21]=1;

present[tambu+14][tambu+6]=1;
present[tambu+14][tambu+8]=1;
present[tambu+14][tambu+19]=1;
present[tambu+14][tambu+21]=1;

present[tambu+15][tambu+22]=1;

present[tambu+16][tambu+7]=1;
present[tambu+16][tambu+8]=1;
present[tambu+16][tambu+9]=1;
present[tambu+16][tambu+19]=1;
present[tambu+16][tambu+21]=1;

present[tambu+17][tambu+8]=1;
present[tambu+17][tambu+9]=1;
present[tambu+17][tambu+21]=1;

present[tambu+18][tambu+7]=1;
present[tambu+18][tambu+8]=1;
present[tambu+18][tambu+9]=1;
present[tambu+18][tambu+19]=1;

present[tambu+19][tambu+19]=1;
present[tambu+19][tambu+20]=1;
present[tambu+19][tambu+21]=1;

present[tambu+20][tambu+6]=1;
present[tambu+20][tambu+8]=1;
present[tambu+20][tambu+18]=1;
present[tambu+20][tambu+19]=1;
present[tambu+20][tambu+22]=1;

present[tambu+21][tambu+8]=1;
present[tambu+21][tambu+18]=1;
present[tambu+21][tambu+20]=1;
present[tambu+21][tambu+21]=1;
present[tambu+21][tambu+22]=1;

present[tambu+22][tambu+5]=1;
present[tambu+22][tambu+9]=1;
present[tambu+22][tambu+23]=1;

present[tambu+23][tambu+5]=1;
present[tambu+23][tambu+7]=1;
present[tambu+23][tambu+8]=1;
present[tambu+23][tambu+9]=1;
present[tambu+23][tambu+10]=1;
present[tambu+23][tambu+22]=1;
present[tambu+23][tambu+23]=1;
present[tambu+23][tambu+24]=1;

present[tambu+24][tambu+11]=1;
present[tambu+24][tambu+20]=1;
present[tambu+24][tambu+23]=1;
present[tambu+24][tambu+24]=1;
present[tambu+24][tambu+25]=1;

present[tambu+25][tambu+9]=1;
present[tambu+25][tambu+12]=1;
present[tambu+25][tambu+24]=1;

present[tambu+26][tambu+9]=1;
present[tambu+26][tambu+12]=1;
present[tambu+26][tambu+20]=1;
present[tambu+26][tambu+21]=1;
present[tambu+26][tambu+22]=1;
present[tambu+26][tambu+23]=1;

present[tambu+27][tambu+7]=1;
present[tambu+27][tambu+12]=1;
present[tambu+27][tambu+23]=1;

present[tambu+28][tambu+8]=1;
present[tambu+28][tambu+9]=1;
present[tambu+28][tambu+10]=1;
present[tambu+28][tambu+11]=1;
present[tambu+28][tambu+20]=1;
present[tambu+28][tambu+21]=1;

present[tambu+29][tambu+10]=1;
present[tambu+29][tambu+18]=1;
present[tambu+29][tambu+19]=1;
present[tambu+29][tambu+20]=1;
present[tambu+29][tambu+21]=1;
present[tambu+29][tambu+24]=1;
present[tambu+29][tambu+26]=1;

present[tambu+30][tambu+8]=1;
present[tambu+30][tambu+9]=1;
present[tambu+30][tambu+18]=1;
present[tambu+30][tambu+24]=1;
present[tambu+30][tambu+27]=1;

present[tambu+31][tambu+5]=1;
present[tambu+31][tambu+8]=1;
present[tambu+31][tambu+16]=1;
present[tambu+31][tambu+18]=1;
present[tambu+31][tambu+27]=1;
present[tambu+31][tambu+28]=1;

present[tambu+32][tambu+5]=1;
present[tambu+32][tambu+7]=1;
present[tambu+32][tambu+16]=1;
present[tambu+32][tambu+29]=1;

present[tambu+33][tambu+14]=1;
present[tambu+33][tambu+17]=1;
present[tambu+33][tambu+18]=1;
present[tambu+33][tambu+27]=1;
present[tambu+33][tambu+28]=1;
present[tambu+33][tambu+29]=1;
present[tambu+33][tambu+30]=1;

present[tambu+34][tambu+2]=1;
present[tambu+34][tambu+3]=1;
present[tambu+34][tambu+5]=1;
present[tambu+34][tambu+15]=1;
present[tambu+34][tambu+16]=1;
present[tambu+34][tambu+17]=1;
present[tambu+34][tambu+26]=1;
present[tambu+34][tambu+31]=1;

present[tambu+35][tambu+5]=1;
present[tambu+35][tambu+13]=1;
present[tambu+35][tambu+15]=1;
present[tambu+35][tambu+28]=1;
present[tambu+35][tambu+31]=1;

present[tambu+36][tambu+2]=1;
present[tambu+36][tambu+4]=1;
present[tambu+36][tambu+5]=1;
present[tambu+36][tambu+13]=1;
present[tambu+36][tambu+28]=1;
present[tambu+36][tambu+31]=1;

present[tambu+37][tambu+2]=1;
present[tambu+37][tambu+12]=1;
present[tambu+37][tambu+13]=1;
present[tambu+37][tambu+30]=1;

present[tambu+38][tambu+0]=1;
present[tambu+38][tambu+8]=1;
present[tambu+38][tambu+10]=1;
present[tambu+38][tambu+11]=1;
present[tambu+38][tambu+12]=1;
present[tambu+38][tambu+24]=1;
present[tambu+38][tambu+26]=1;
present[tambu+38][tambu+27]=1;
present[tambu+38][tambu+28]=1;
present[tambu+38][tambu+29]=1;

present[tambu+39][tambu+1]=1;
present[tambu+39][tambu+7]=1;
present[tambu+39][tambu+9]=1;
present[tambu+39][tambu+10]=1;
present[tambu+39][tambu+24]=1;
present[tambu+39][tambu+28]=1;

present[tambu+40][tambu+1]=1;
present[tambu+40][tambu+7]=1;
present[tambu+40][tambu+8]=1;
present[tambu+40][tambu+27]=1;

present[tambu+41][tambu+1]=1;
present[tambu+41][tambu+3]=1;
present[tambu+41][tambu+6]=1;
present[tambu+41][tambu+7]=1;
present[tambu+41][tambu+25]=1;
present[tambu+41][tambu+27]=1;

present[tambu+42][tambu+1]=1;
present[tambu+42][tambu+3]=1;
present[tambu+42][tambu+5]=1;
present[tambu+42][tambu+6]=1;

present[tambu+43][tambu+1]=1;
present[tambu+43][tambu+26]=1;
present[tambu+43][tambu+27]=1;
present[tambu+43][tambu+28]=1;

present[tambu+44][tambu+1]=1;
present[tambu+44][tambu+3]=1;
present[tambu+44][tambu+5]=1;
present[tambu+44][tambu+6]=1;
present[tambu+44][tambu+27]=1;
present[tambu+44][tambu+28]=1;

present[tambu+45][tambu+1]=1;
present[tambu+45][tambu+3]=1;
present[tambu+45][tambu+6]=1;
present[tambu+45][tambu+7]=1;
present[tambu+45][tambu+13]=1;
present[tambu+45][tambu+15]=1;
present[tambu+45][tambu+20]=1;
present[tambu+45][tambu+22]=1;
present[tambu+45][tambu+27]=1;
present[tambu+45][tambu+28]=1;

present[tambu+46][tambu+1]=1;
present[tambu+46][tambu+7]=1;
present[tambu+46][tambu+8]=1;
present[tambu+46][tambu+10]=1;
present[tambu+46][tambu+11]=1;
present[tambu+46][tambu+13]=1;
present[tambu+46][tambu+16]=1;
present[tambu+46][tambu+19]=1;
present[tambu+46][tambu+22]=1;
present[tambu+46][tambu+24]=1;
present[tambu+46][tambu+25]=1;
present[tambu+46][tambu+26]=1;
present[tambu+46][tambu+27]=1;
present[tambu+46][tambu+28]=1;

present[tambu+47][tambu+1]=1;
present[tambu+47][tambu+7]=1;
present[tambu+47][tambu+8]=1;
present[tambu+47][tambu+16]=1;
present[tambu+47][tambu+17]=1;
present[tambu+47][tambu+21]=1;
present[tambu+47][tambu+26]=1;

present[tambu+48][tambu+1]=1;
present[tambu+48][tambu+3]=1;
present[tambu+48][tambu+6]=1;
present[tambu+48][tambu+7]=1;
present[tambu+48][tambu+13]=1;
present[tambu+48][tambu+20]=1;
present[tambu+48][tambu+28]=1;

present[tambu+49][tambu+1]=1;
present[tambu+49][tambu+3]=1;
present[tambu+49][tambu+5]=1;
present[tambu+49][tambu+6]=1;
present[tambu+49][tambu+13]=1;
present[tambu+49][tambu+15]=1;
present[tambu+49][tambu+16]=1;
present[tambu+49][tambu+17]=1;
present[tambu+49][tambu+18]=1;
present[tambu+49][tambu+19]=1;
present[tambu+49][tambu+26]=1;
present[tambu+49][tambu+28]=1;

present[tambu+50][tambu+1]=1;
present[tambu+50][tambu+10]=1;
present[tambu+50][tambu+11]=1;
present[tambu+50][tambu+29]=1;

present[tambu+51][tambu+1]=1;
present[tambu+51][tambu+3]=1;
present[tambu+51][tambu+5]=1;
present[tambu+51][tambu+6]=1;
present[tambu+51][tambu+13]=1;
present[tambu+51][tambu+15]=1;
present[tambu+51][tambu+16]=1;
present[tambu+51][tambu+17]=1;
present[tambu+51][tambu+18]=1;
present[tambu+51][tambu+19]=1;
present[tambu+51][tambu+26]=1;
present[tambu+51][tambu+28]=1;

present[tambu+52][tambu+1]=1;
present[tambu+52][tambu+3]=1;
present[tambu+52][tambu+6]=1;
present[tambu+52][tambu+7]=1;
present[tambu+52][tambu+13]=1;
present[tambu+52][tambu+20]=1;
present[tambu+52][tambu+28]=1;

present[tambu+53][tambu+1]=1;
present[tambu+53][tambu+7]=1;
present[tambu+53][tambu+8]=1;
present[tambu+53][tambu+16]=1;
present[tambu+53][tambu+17]=1;
present[tambu+53][tambu+21]=1;
present[tambu+53][tambu+26]=1;

present[tambu+54][tambu+1]=1;
present[tambu+54][tambu+7]=1;
present[tambu+54][tambu+8]=1;
present[tambu+54][tambu+10]=1;
present[tambu+54][tambu+11]=1;
present[tambu+54][tambu+13]=1;
present[tambu+54][tambu+16]=1;
present[tambu+54][tambu+19]=1;
present[tambu+54][tambu+22]=1;
present[tambu+54][tambu+24]=1;
present[tambu+54][tambu+25]=1;
present[tambu+54][tambu+26]=1;
present[tambu+54][tambu+27]=1;
present[tambu+54][tambu+28]=1;

present[tambu+55][tambu+1]=1;
present[tambu+55][tambu+3]=1;
present[tambu+55][tambu+6]=1;
present[tambu+55][tambu+7]=1;
present[tambu+55][tambu+13]=1;
present[tambu+55][tambu+15]=1;
present[tambu+55][tambu+20]=1;
present[tambu+55][tambu+22]=1;
present[tambu+55][tambu+27]=1;
present[tambu+55][tambu+28]=1;

present[tambu+56][tambu+1]=1;
present[tambu+56][tambu+3]=1;
present[tambu+56][tambu+5]=1;
present[tambu+56][tambu+6]=1;
present[tambu+56][tambu+27]=1;
present[tambu+56][tambu+28]=1;

present[tambu+57][tambu+1]=1;
present[tambu+57][tambu+26]=1;
present[tambu+57][tambu+27]=1;
present[tambu+57][tambu+28]=1;

present[tambu+58][tambu+1]=1;
present[tambu+58][tambu+3]=1;
present[tambu+58][tambu+5]=1;
present[tambu+58][tambu+6]=1;

present[tambu+59][tambu+1]=1;
present[tambu+59][tambu+3]=1;
present[tambu+59][tambu+6]=1;
present[tambu+59][tambu+7]=1;
present[tambu+59][tambu+25]=1;
present[tambu+59][tambu+27]=1;

present[tambu+60][tambu+1]=1;
present[tambu+60][tambu+7]=1;
present[tambu+60][tambu+8]=1;
present[tambu+60][tambu+27]=1;

present[tambu+61][tambu+1]=1;
present[tambu+61][tambu+3]=1;
present[tambu+61][tambu+6]=1;
present[tambu+61][tambu+8]=1;
present[tambu+61][tambu+9]=1;
present[tambu+61][tambu+24]=1;
present[tambu+61][tambu+28]=1;

present[tambu+62][tambu+1]=1;
present[tambu+62][tambu+3]=1;
present[tambu+62][tambu+5]=1;
present[tambu+62][tambu+6]=1;
present[tambu+62][tambu+7]=1;
present[tambu+62][tambu+10]=1;
present[tambu+62][tambu+24]=1;
present[tambu+62][tambu+26]=1;
present[tambu+62][tambu+27]=1;
present[tambu+62][tambu+28]=1;
present[tambu+62][tambu+29]=1;

present[tambu+63][tambu+1]=1;
present[tambu+63][tambu+10]=1;
present[tambu+63][tambu+30]=1;

present[tambu+64][tambu+1]=1;
present[tambu+64][tambu+3]=1;
present[tambu+64][tambu+5]=1;
present[tambu+64][tambu+6]=1;
present[tambu+64][tambu+7]=1;
present[tambu+64][tambu+10]=1;
present[tambu+64][tambu+28]=1;
present[tambu+64][tambu+31]=1;

present[tambu+65][tambu+1]=1;
present[tambu+65][tambu+3]=1;
present[tambu+65][tambu+6]=1;
present[tambu+65][tambu+8]=1;
present[tambu+65][tambu+9]=1;
present[tambu+65][tambu+28]=1;
present[tambu+65][tambu+31]=1;

present[tambu+66][tambu+1]=1;
present[tambu+66][tambu+7]=1;
present[tambu+66][tambu+8]=1;
present[tambu+66][tambu+26]=1;
present[tambu+66][tambu+31]=1;

present[tambu+67][tambu+1]=1;
present[tambu+67][tambu+3]=1;
present[tambu+67][tambu+6]=1;
present[tambu+67][tambu+7]=1;
present[tambu+67][tambu+27]=1;
present[tambu+67][tambu+28]=1;
present[tambu+67][tambu+29]=1;
present[tambu+67][tambu+30]=1;

present[tambu+68][tambu+1]=1;
present[tambu+68][tambu+3]=1;
present[tambu+68][tambu+5]=1;
present[tambu+68][tambu+6]=1;
present[tambu+68][tambu+29]=1;

present[tambu+69][tambu+1]=1;
present[tambu+69][tambu+27]=1;
present[tambu+69][tambu+28]=1;

present[tambu+70][tambu+1]=1;
present[tambu+70][tambu+3]=1;
present[tambu+70][tambu+5]=1;
present[tambu+70][tambu+6]=1;
present[tambu+70][tambu+24]=1;
present[tambu+70][tambu+27]=1;

present[tambu+71][tambu+1]=1;
present[tambu+71][tambu+3]=1;
present[tambu+71][tambu+6]=1;
present[tambu+71][tambu+7]=1;
present[tambu+71][tambu+24]=1;
present[tambu+71][tambu+26]=1;

present[tambu+72][tambu+1]=1;
present[tambu+72][tambu+7]=1;
present[tambu+72][tambu+8]=1;

present[tambu+73][tambu+1]=1;
present[tambu+73][tambu+3]=1;
present[tambu+73][tambu+6]=1;
present[tambu+73][tambu+8]=1;
present[tambu+73][tambu+9]=1;

present[tambu+74][tambu+1]=1;
present[tambu+74][tambu+3]=1;
present[tambu+74][tambu+5]=1;
present[tambu+74][tambu+6]=1;
present[tambu+74][tambu+7]=1;
present[tambu+74][tambu+10]=1;

present[tambu+75][tambu+1]=1;
present[tambu+75][tambu+10]=1;
present[tambu+75][tambu+24]=1;
present[tambu+75][tambu+26]=1;

present[tambu+76][tambu+1]=1;
present[tambu+76][tambu+3]=1;
present[tambu+76][tambu+5]=1;
present[tambu+76][tambu+6]=1;
present[tambu+76][tambu+7]=1;
present[tambu+76][tambu+10]=1;
present[tambu+76][tambu+24]=1;
present[tambu+76][tambu+27]=1;

present[tambu+77][tambu+1]=1;
present[tambu+77][tambu+3]=1;
present[tambu+77][tambu+6]=1;
present[tambu+77][tambu+8]=1;
present[tambu+77][tambu+9]=1;
present[tambu+77][tambu+27]=1;
present[tambu+77][tambu+28]=1;

present[tambu+78][tambu+1]=1;
present[tambu+78][tambu+7]=1;
present[tambu+78][tambu+8]=1;
present[tambu+78][tambu+29]=1;

present[tambu+79][tambu+1]=1;
present[tambu+79][tambu+3]=1;
present[tambu+79][tambu+6]=1;
present[tambu+79][tambu+7]=1;
present[tambu+79][tambu+27]=1;
present[tambu+79][tambu+28]=1;
present[tambu+79][tambu+29]=1;
present[tambu+79][tambu+30]=1;

present[tambu+80][tambu+1]=1;
present[tambu+80][tambu+3]=1;
present[tambu+80][tambu+5]=1;
present[tambu+80][tambu+6]=1;
present[tambu+80][tambu+26]=1;
present[tambu+80][tambu+31]=1;

present[tambu+81][tambu+1]=1;
present[tambu+81][tambu+28]=1;
present[tambu+81][tambu+31]=1;

present[tambu+82][tambu+1]=1;
present[tambu+82][tambu+3]=1;
present[tambu+82][tambu+5]=1;
present[tambu+82][tambu+6]=1;
present[tambu+82][tambu+28]=1;
present[tambu+82][tambu+31]=1;

present[tambu+83][tambu+1]=1;
present[tambu+83][tambu+3]=1;
present[tambu+83][tambu+6]=1;
present[tambu+83][tambu+7]=1;
present[tambu+83][tambu+30]=1;

present[tambu+84][tambu+1]=1;
present[tambu+84][tambu+7]=1;
present[tambu+84][tambu+8]=1;
present[tambu+84][tambu+24]=1;
present[tambu+84][tambu+26]=1;
present[tambu+84][tambu+27]=1;
present[tambu+84][tambu+28]=1;
present[tambu+84][tambu+29]=1;

present[tambu+85][tambu+1]=1;
present[tambu+85][tambu+3]=1;
present[tambu+85][tambu+6]=1;
present[tambu+85][tambu+8]=1;
present[tambu+85][tambu+9]=1;
present[tambu+85][tambu+24]=1;
present[tambu+85][tambu+28]=1;

present[tambu+86][tambu+1]=1;
present[tambu+86][tambu+3]=1;
present[tambu+86][tambu+5]=1;
present[tambu+86][tambu+6]=1;
present[tambu+86][tambu+7]=1;
present[tambu+86][tambu+10]=1;
present[tambu+86][tambu+27]=1;

present[tambu+87][tambu+1]=1;
present[tambu+87][tambu+10]=1;
present[tambu+87][tambu+25]=1;
present[tambu+87][tambu+27]=1;

present[tambu+88][tambu+1]=1;
present[tambu+88][tambu+3]=1;
present[tambu+88][tambu+5]=1;
present[tambu+88][tambu+6]=1;
present[tambu+88][tambu+7]=1;
present[tambu+88][tambu+10]=1;

present[tambu+89][tambu+1]=1;
present[tambu+89][tambu+3]=1;
present[tambu+89][tambu+6]=1;
present[tambu+89][tambu+8]=1;
present[tambu+89][tambu+9]=1;
present[tambu+89][tambu+26]=1;
present[tambu+89][tambu+27]=1;
present[tambu+89][tambu+28]=1;

present[tambu+90][tambu+1]=1;
present[tambu+90][tambu+7]=1;
present[tambu+90][tambu+8]=1;
present[tambu+90][tambu+27]=1;
present[tambu+90][tambu+28]=1;

present[tambu+91][tambu+1]=1;
present[tambu+91][tambu+3]=1;
present[tambu+91][tambu+6]=1;
present[tambu+91][tambu+7]=1;
present[tambu+91][tambu+13]=1;
present[tambu+91][tambu+15]=1;
present[tambu+91][tambu+20]=1;
present[tambu+91][tambu+22]=1;
present[tambu+91][tambu+27]=1;
present[tambu+91][tambu+28]=1;

present[tambu+92][tambu+1]=1;
present[tambu+92][tambu+3]=1;
present[tambu+92][tambu+5]=1;
present[tambu+92][tambu+6]=1;
present[tambu+92][tambu+10]=1;
present[tambu+92][tambu+11]=1;
present[tambu+92][tambu+13]=1;
present[tambu+92][tambu+16]=1;
present[tambu+92][tambu+19]=1;
present[tambu+92][tambu+22]=1;
present[tambu+92][tambu+24]=1;
present[tambu+92][tambu+25]=1;
present[tambu+92][tambu+26]=1;
present[tambu+92][tambu+27]=1;
present[tambu+92][tambu+28]=1;

present[tambu+93][tambu+1]=1;
present[tambu+93][tambu+16]=1;
present[tambu+93][tambu+17]=1;
present[tambu+93][tambu+21]=1;
present[tambu+93][tambu+26]=1;

present[tambu+94][tambu+1]=1;
present[tambu+94][tambu+3]=1;
present[tambu+94][tambu+5]=1;
present[tambu+94][tambu+6]=1;
present[tambu+94][tambu+13]=1;
present[tambu+94][tambu+20]=1;
present[tambu+94][tambu+28]=1;

present[tambu+95][tambu+1]=1;
present[tambu+95][tambu+3]=1;
present[tambu+95][tambu+6]=1;
present[tambu+95][tambu+7]=1;
present[tambu+95][tambu+13]=1;
present[tambu+95][tambu+15]=1;
present[tambu+95][tambu+16]=1;
present[tambu+95][tambu+17]=1;
present[tambu+95][tambu+18]=1;
present[tambu+95][tambu+19]=1;
present[tambu+95][tambu+26]=1;
present[tambu+95][tambu+28]=1;

present[tambu+96][tambu+1]=1;
present[tambu+96][tambu+7]=1;
present[tambu+96][tambu+8]=1;
present[tambu+96][tambu+10]=1;
present[tambu+96][tambu+11]=1;
present[tambu+96][tambu+29]=1;

present[tambu+97][tambu+1]=1;
present[tambu+97][tambu+7]=1;
present[tambu+97][tambu+8]=1;
present[tambu+97][tambu+13]=1;
present[tambu+97][tambu+15]=1;
present[tambu+97][tambu+16]=1;
present[tambu+97][tambu+17]=1;
present[tambu+97][tambu+18]=1;
present[tambu+97][tambu+19]=1;
present[tambu+97][tambu+26]=1;
present[tambu+97][tambu+28]=1;

present[tambu+98][tambu+1]=1;
present[tambu+98][tambu+3]=1;
present[tambu+98][tambu+6]=1;
present[tambu+98][tambu+7]=1;
present[tambu+98][tambu+13]=1;
present[tambu+98][tambu+20]=1;
present[tambu+98][tambu+28]=1;

present[tambu+99][tambu+1]=1;
present[tambu+99][tambu+3]=1;
present[tambu+99][tambu+5]=1;
present[tambu+99][tambu+6]=1;
present[tambu+99][tambu+16]=1;
present[tambu+99][tambu+17]=1;
present[tambu+99][tambu+21]=1;
present[tambu+99][tambu+26]=1;

present[tambu+100][tambu+1]=1;
present[tambu+100][tambu+10]=1;
present[tambu+100][tambu+11]=1;
present[tambu+100][tambu+13]=1;
present[tambu+100][tambu+16]=1;
present[tambu+100][tambu+19]=1;
present[tambu+100][tambu+22]=1;
present[tambu+100][tambu+24]=1;
present[tambu+100][tambu+25]=1;
present[tambu+100][tambu+26]=1;
present[tambu+100][tambu+27]=1;
present[tambu+100][tambu+28]=1;

present[tambu+101][tambu+1]=1;
present[tambu+101][tambu+3]=1;
present[tambu+101][tambu+5]=1;
present[tambu+101][tambu+6]=1;
present[tambu+101][tambu+13]=1;
present[tambu+101][tambu+15]=1;
present[tambu+101][tambu+20]=1;
present[tambu+101][tambu+22]=1;
present[tambu+101][tambu+27]=1;
present[tambu+101][tambu+28]=1;

present[tambu+102][tambu+1]=1;
present[tambu+102][tambu+3]=1;
present[tambu+102][tambu+6]=1;
present[tambu+102][tambu+7]=1;
present[tambu+102][tambu+27]=1;
present[tambu+102][tambu+28]=1;

present[tambu+103][tambu+1]=1;
present[tambu+103][tambu+7]=1;
present[tambu+103][tambu+8]=1;
present[tambu+103][tambu+26]=1;
present[tambu+103][tambu+27]=1;
present[tambu+103][tambu+28]=1;

present[tambu+104][tambu+1]=1;
present[tambu+104][tambu+3]=1;
present[tambu+104][tambu+6]=1;
present[tambu+104][tambu+8]=1;
present[tambu+104][tambu+9]=1;

present[tambu+105][tambu+1]=1;
present[tambu+105][tambu+3]=1;
present[tambu+105][tambu+5]=1;
present[tambu+105][tambu+6]=1;
present[tambu+105][tambu+7]=1;
present[tambu+105][tambu+10]=1;
present[tambu+105][tambu+25]=1;
present[tambu+105][tambu+27]=1;

present[tambu+106][tambu+1]=1;
present[tambu+106][tambu+10]=1;
present[tambu+106][tambu+27]=1;

present[tambu+107][tambu+1]=1;
present[tambu+107][tambu+3]=1;
present[tambu+107][tambu+5]=1;
present[tambu+107][tambu+6]=1;
present[tambu+107][tambu+7]=1;
present[tambu+107][tambu+10]=1;
present[tambu+107][tambu+24]=1;
present[tambu+107][tambu+28]=1;

present[tambu+108][tambu+1]=1;
present[tambu+108][tambu+3]=1;
present[tambu+108][tambu+6]=1;
present[tambu+108][tambu+8]=1;
present[tambu+108][tambu+9]=1;
present[tambu+108][tambu+24]=1;
present[tambu+108][tambu+26]=1;
present[tambu+108][tambu+27]=1;
present[tambu+108][tambu+28]=1;
present[tambu+108][tambu+29]=1;

present[tambu+109][tambu+1]=1;
present[tambu+109][tambu+7]=1;
present[tambu+109][tambu+8]=1;
present[tambu+109][tambu+30]=1;

present[tambu+110][tambu+1]=1;
present[tambu+110][tambu+3]=1;
present[tambu+110][tambu+6]=1;
present[tambu+110][tambu+7]=1;
present[tambu+110][tambu+28]=1;
present[tambu+110][tambu+31]=1;

present[tambu+111][tambu+1]=1;
present[tambu+111][tambu+3]=1;
present[tambu+111][tambu+5]=1;
present[tambu+111][tambu+6]=1;
present[tambu+111][tambu+28]=1;
present[tambu+111][tambu+31]=1;

present[tambu+112][tambu+1]=1;
present[tambu+112][tambu+26]=1;
present[tambu+112][tambu+31]=1;

present[tambu+113][tambu+1]=1;
present[tambu+113][tambu+3]=1;
present[tambu+113][tambu+5]=1;
present[tambu+113][tambu+6]=1;
present[tambu+113][tambu+27]=1;
present[tambu+113][tambu+28]=1;
present[tambu+113][tambu+29]=1;
present[tambu+113][tambu+30]=1;

present[tambu+114][tambu+1]=1;
present[tambu+114][tambu+3]=1;
present[tambu+114][tambu+6]=1;
present[tambu+114][tambu+7]=1;
present[tambu+114][tambu+29]=1;

present[tambu+115][tambu+1]=1;
present[tambu+115][tambu+7]=1;
present[tambu+115][tambu+8]=1;
present[tambu+115][tambu+27]=1;
present[tambu+115][tambu+28]=1;

present[tambu+116][tambu+1]=1;
present[tambu+116][tambu+7]=1;
present[tambu+116][tambu+9]=1;
present[tambu+116][tambu+10]=1;
present[tambu+116][tambu+24]=1;
present[tambu+116][tambu+27]=1;

present[tambu+117][tambu+0]=1;
present[tambu+117][tambu+8]=1;
present[tambu+117][tambu+10]=1;
present[tambu+117][tambu+11]=1;
present[tambu+117][tambu+12]=1;
present[tambu+117][tambu+24]=1;
present[tambu+117][tambu+26]=1;

present[tambu+118][tambu+2]=1;
present[tambu+118][tambu+12]=1;
present[tambu+118][tambu+13]=1;

present[tambu+119][tambu+2]=1;
present[tambu+119][tambu+4]=1;
present[tambu+119][tambu+5]=1;
present[tambu+119][tambu+13]=1;

present[tambu+120][tambu+5]=1;
present[tambu+120][tambu+13]=1;
present[tambu+120][tambu+15]=1;

present[tambu+121][tambu+2]=1;
present[tambu+121][tambu+3]=1;
present[tambu+121][tambu+5]=1;
present[tambu+121][tambu+15]=1;
present[tambu+121][tambu+16]=1;
present[tambu+121][tambu+17]=1;

present[tambu+122][tambu+14]=1;
present[tambu+122][tambu+17]=1;
present[tambu+122][tambu+18]=1;

present[tambu+123][tambu+5]=1;
present[tambu+123][tambu+7]=1;
present[tambu+123][tambu+16]=1;

present[tambu+124][tambu+5]=1;
present[tambu+124][tambu+8]=1;
present[tambu+124][tambu+16]=1;
present[tambu+124][tambu+18]=1;

present[tambu+125][tambu+8]=1;
present[tambu+125][tambu+9]=1;
present[tambu+125][tambu+18]=1;

present[tambu+126][tambu+10]=1;
present[tambu+126][tambu+18]=1;
present[tambu+126][tambu+19]=1;
present[tambu+126][tambu+20]=1;
present[tambu+126][tambu+21]=1;

present[tambu+127][tambu+8]=1;
present[tambu+127][tambu+9]=1;
present[tambu+127][tambu+10]=1;
present[tambu+127][tambu+11]=1;
present[tambu+127][tambu+20]=1;
present[tambu+127][tambu+21]=1;

present[tambu+128][tambu+7]=1;
present[tambu+128][tambu+12]=1;
present[tambu+128][tambu+23]=1;

present[tambu+129][tambu+9]=1;
present[tambu+129][tambu+12]=1;
present[tambu+129][tambu+20]=1;
present[tambu+129][tambu+21]=1;
present[tambu+129][tambu+22]=1;
present[tambu+129][tambu+23]=1;

present[tambu+130][tambu+9]=1;
present[tambu+130][tambu+12]=1;
present[tambu+130][tambu+24]=1;

present[tambu+131][tambu+11]=1;
present[tambu+131][tambu+20]=1;
present[tambu+131][tambu+23]=1;
present[tambu+131][tambu+24]=1;
present[tambu+131][tambu+25]=1;

present[tambu+132][tambu+5]=1;
present[tambu+132][tambu+7]=1;
present[tambu+132][tambu+8]=1;
present[tambu+132][tambu+9]=1;
present[tambu+132][tambu+10]=1;
present[tambu+132][tambu+22]=1;
present[tambu+132][tambu+23]=1;
present[tambu+132][tambu+24]=1;

present[tambu+133][tambu+5]=1;
present[tambu+133][tambu+9]=1;
present[tambu+133][tambu+23]=1;

present[tambu+134][tambu+8]=1;
present[tambu+134][tambu+18]=1;
present[tambu+134][tambu+20]=1;
present[tambu+134][tambu+21]=1;
present[tambu+134][tambu+22]=1;

present[tambu+135][tambu+6]=1;
present[tambu+135][tambu+8]=1;
present[tambu+135][tambu+18]=1;
present[tambu+135][tambu+19]=1;
present[tambu+135][tambu+22]=1;

present[tambu+136][tambu+19]=1;
present[tambu+136][tambu+20]=1;
present[tambu+136][tambu+21]=1;

present[tambu+137][tambu+7]=1;
present[tambu+137][tambu+8]=1;
present[tambu+137][tambu+9]=1;
present[tambu+137][tambu+19]=1;

present[tambu+138][tambu+8]=1;
present[tambu+138][tambu+9]=1;
present[tambu+138][tambu+21]=1;

present[tambu+139][tambu+7]=1;
present[tambu+139][tambu+8]=1;
present[tambu+139][tambu+9]=1;
present[tambu+139][tambu+19]=1;
present[tambu+139][tambu+21]=1;

present[tambu+140][tambu+22]=1;

present[tambu+141][tambu+6]=1;
present[tambu+141][tambu+8]=1;
present[tambu+141][tambu+19]=1;
present[tambu+141][tambu+21]=1;

present[tambu+142][tambu+8]=1;
present[tambu+142][tambu+21]=1;

present[tambu+143][tambu+5]=1;
present[tambu+143][tambu+9]=1;
present[tambu+143][tambu+19]=1;

present[tambu+144][tambu+5]=1;
present[tambu+144][tambu+7]=1;
present[tambu+144][tambu+8]=1;
present[tambu+144][tambu+9]=1;
present[tambu+144][tambu+10]=1;
present[tambu+144][tambu+19]=1;
present[tambu+144][tambu+20]=1;
present[tambu+144][tambu+21]=1;

present[tambu+145][tambu+11]=1;
present[tambu+145][tambu+18]=1;
present[tambu+145][tambu+19]=1;
present[tambu+145][tambu+22]=1;

present[tambu+146][tambu+9]=1;
present[tambu+146][tambu+12]=1;
present[tambu+146][tambu+18]=1;
present[tambu+146][tambu+20]=1;
present[tambu+146][tambu+21]=1;
present[tambu+146][tambu+22]=1;

present[tambu+147][tambu+9]=1;
present[tambu+147][tambu+12]=1;
present[tambu+147][tambu+23]=1;

present[tambu+148][tambu+7]=1;
present[tambu+148][tambu+12]=1;
present[tambu+148][tambu+22]=1;
present[tambu+148][tambu+23]=1;
present[tambu+148][tambu+24]=1;

present[tambu+149][tambu+8]=1;
present[tambu+149][tambu+9]=1;
present[tambu+149][tambu+10]=1;
present[tambu+149][tambu+11]=1;
present[tambu+149][tambu+20]=1;
present[tambu+149][tambu+23]=1;
present[tambu+149][tambu+24]=1;
present[tambu+149][tambu+25]=1;

present[tambu+150][tambu+10]=1;
present[tambu+150][tambu+24]=1;

present[tambu+151][tambu+8]=1;
present[tambu+151][tambu+9]=1;
present[tambu+151][tambu+20]=1;
present[tambu+151][tambu+21]=1;
present[tambu+151][tambu+22]=1;
present[tambu+151][tambu+23]=1;

present[tambu+152][tambu+5]=1;
present[tambu+152][tambu+8]=1;
present[tambu+152][tambu+23]=1;

present[tambu+153][tambu+5]=1;
present[tambu+153][tambu+7]=1;
present[tambu+153][tambu+20]=1;
present[tambu+153][tambu+21]=1;

present[tambu+154][tambu+18]=1;
present[tambu+154][tambu+19]=1;
present[tambu+154][tambu+20]=1;
present[tambu+154][tambu+21]=1;

present[tambu+155][tambu+18]=1;







}
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

                  {if(next[i][j]==1)  printf("+");
			  else printf(" ");	  //printf("\t%d",next[i][j]);
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
