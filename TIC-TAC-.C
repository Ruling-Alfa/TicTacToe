#include<stdio.h>
#include<conio.h>
int pl1();
int pl2();

int main()
{
     char out[13][13]={' '};
     int i,j,p1,p2,reg[10]={0,0,0,0,0,0,0,0,0,0};
     int ch[9]={0,0,0,0,0,0,0,0,0};
     static int c=0;
   clrscr();

     for(i=0;i<13;i++)
     {

       out[0][i]='#';
       out[4][i]='#';
       out[8][i]='#';
       out[12][i]='#';

       out[i][0]='#';
       out[i][4]='#';
       out[i][8]='#';
       out[i][12]='#';
     }

      for(i=0;i<13;i++)
       {
	 for(j=0;j<13;j++)
	     {
	       printf("%c",out[i][j]);
	     }
	  printf("\n");
       }

     printf("\nPlayer 1 has X and player 2 has O\n\n");

     whole_replay:
     if(c>=8)
     {
     goto end;
     }

     retrypl1:
     p1=pl1();

     switch(p1)
     {
      case 1:if(reg[1]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	      else
	      {
	      out[2][2]='X';
	      c=c+1;
	      reg[1]=1;
	      ch[0]=1;
	      break;
	      }
      case 2:if(reg[2]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	     else
	     {
	      out[2][6]='X';
	      c=c+1;
	      reg[2]=1;
	      ch[1]=1;
	      break;
	     }
      case 3:if(reg[3]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	     else
	     {
	      out[2][10]='X';
	      c=c+1;
	      reg[3]=1;
	      ch[2]=1;
	      break;
	     }
      case 4:if(reg[4]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	     else
	     {
	      out[6][2]='X';
	      c=c+1;
	      reg[4]=1;
	      ch[3]=1;
	      break;
	     }
      case 5:if(reg[5]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	     else
	     {
	     out[6][6]='X';
	     c=c+1;
	     reg[5]=1;
	     ch[4]=1;
	     break;
	     }
      case 6:if(reg[6]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	     else
	     {
	     out[6][10]='X';
	     c=c+1;
	     reg[6]=1;
	     ch[5]=1;
	     break;
	     }
      case 7:if(reg[7]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	     else
	     {
	     out[10][2]='X';
	     c=c+1;
	     reg[7]=1;
	     ch[6]=1;
	     break;
	     }
      case 8:if(reg[8]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	     else
	     {
	     out[10][6]='X';
	     c=c+1;
	     reg[8]=1;
	     ch[7]=1;
	     break;
	     }
      case 9:if(reg[9]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl1;
	     }
	     else
	     {
	     out[10][10]='X';
	     c=c+1;
	     reg[9]=1;
	     ch[8]=1;
	     break;
	     }
     }
    clrscr();
      for(i=0;i<13;i++)
       {
	 for(j=0;j<13;j++)
	     {
	       printf("%c",out[i][j]);
	     }
	  printf("\n");
       }

 if((ch[0]==1 && ch[1]==1 && ch[2]==1)||(ch[3]==1 && ch[4]==1 && ch[5]==1)||(ch[6]==1 && ch[7]==1 && ch[8]==1)||(ch[0]==1 && ch[3]==1 && ch[6]==1)||(ch[1]==1 && ch[4]==1 && ch[7]==1)||(ch[2]==1 && ch[5]==1 && ch[8]==1)||(ch[0]==1 && ch[4]==1 && ch[8]==1)||(ch[2]==1 && ch[4]==1 && ch[6]==1))
  {
   printf("\n\nPlayer 1 has Won...\nCongrates Player 1");
   goto end;
  }
     retrypl2:
     p2=pl2();
     switch(p2)
     {
      case 1:if(reg[1]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[2][2]='O';
	     c=c+1;
	     reg[1]=1;
	     ch[0]=2;
	     break;
	     }
      case 2:if(reg[2]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[2][6]='O';
	     c=c+1;
	     reg[2]=1;
	     ch[1]=2;
	     break;
	     }
      case 3:if(reg[3]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[2][10]='O';
	     c=c+1;
	     reg[3]=1;
	     ch[2]=2;
	     break;
	     }
      case 4:if(reg[4]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[6][2]='O';
	     c=c+1;
	     reg[4]=1;
	     ch[3]=2;
	     break;
	     }
      case 5:if(reg[5]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[6][6]='O';
	     c=c+1;
	     reg[5]=1;
	     ch[4]=2;
	     break;
	     }
      case 6:if(reg[6]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[6][10]='O';
	     c=c+1;
	     reg[6]=1;
	     ch[5]=2;
	     break;
	     }
      case 7:if(reg[7]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[10][2]='O';
	     c=c+1;
	     reg[7]=1;
	     ch[6]=2;
	     break;
	     }
      case 8:if(reg[8]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[10][6]='O';
	     c=c+1;
	     reg[8]=1;
	     ch[7]=2;
	     break;
	     }
      case 9:if(reg[9]==1)
	     {
	      printf("\n Entry already taken.Please retry");
	      goto retrypl2;
	     }
	     else
	     {
	     out[10][10]='O';
	     c=c+1;
	     reg[9]=1;
	     ch[8]=2;
	     break;
	     }
     }
     clrscr();
      for(i=0;i<13;i++)
       {
	 for(j=0;j<13;j++)
	     {
	       printf("%c",out[i][j]);
	     }
	  printf("\n");
       }

  if((ch[0]==2 && ch[1]==2 && ch[2]==2)||(ch[3]==2 && ch[4]==2 && ch[5]==2)||(ch[6]==2 && ch[7]==2 && ch[8]==2)||(ch[0]==2 && ch[3]==2 && ch[6]==2)||(ch[1]==2 && ch[4]==2 && ch[7]==2)||(ch[2]==2 && ch[5]==2 && ch[8]==2)||(ch[0]==2 && ch[4]==2 && ch[8]==2)||(ch[2]==2 && ch[4]==2 && ch[6]==2))
  {
   printf("\n\nPlayer 2 has Won...\nCongrates Player 2");
   goto end;
  }
     goto whole_replay;

     end:

     getch();
     return 0;
}


int pl1()
{int in1;
     retry1:
     printf("Enter the no. of block:");
     scanf("%d",&in1);

     if(in1>9)
     {
      printf("Invalid entry. Enter a no.<10");
      goto retry1;
     }

     else
     {
      return (in1);
     }



}

int pl2()
{int in2;
     retry2:
     printf("Enter the no. of block:");
     scanf("%d",&in2);

     if(in2>9)
     {
      printf("Invalid entry. Enter a no.<10");
      goto retry2;
     }

     else
     {
      return (in2);
     }
}
