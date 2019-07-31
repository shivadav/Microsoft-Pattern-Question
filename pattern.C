#include<stdio.h>
#include<conio.h>

int a,x=0;

void pattern(int n,int x)
{
 if(n==a && x>1)
 {
 printf("%d ",n);
 }
 else if((n>0 && n!=a) && x>1)
      {
      n=n+5;
      pattern(n,1);
      printf("%d ",n);
      return;
      }
      else if((n==0 || n<0) && x==0)
	  {
	  printf("%d ",n);
	  n=n+5;
	  pattern(n,1);
	  //printf("%d ",n);
	  return;
	  }
	  else if(n>0 && x==0)
	  {
	  printf("%d ",n);

	  pattern(n-5,0);
	  printf("%d ",n);
	  return;
	  }

}

void main()
{
int n;
clrscr();
printf("Enter n=");
scanf("%d",&n);
a=n;
pattern(n,0);
getch();
}
