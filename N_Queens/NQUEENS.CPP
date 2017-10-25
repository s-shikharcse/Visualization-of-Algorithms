#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int diag45[12],sol[12],n,chess[12][12],r1,c1,num=0,i,x1,x2,y2,y1;
int num1,num2,m=0,x3;
void main()
{
int gd=DETECT,gm,x,y;
void queens(int,int);
clrscr();
printf("Enter the size of the chess board(12 is the limit) ");
scanf("%d",&n);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx();
y=getmaxy();
setcolor(WHITE);
x1=y1=0;
x2=x/n;
y2=y/n;
if(x2>=10)
{
if(x2>y2)
x2=y2;
else
y2=x2;
for(i=0;i<=n;i++)
{
delay(250);
line(x1,y1,x1,y);
if(i==1)
num1=x1/2;
x1=x1+x2;
}
x1=x1-x2;
x3=x1;
for(i=0;i<=n;i++)
{
delay(250);
line(x1,y1,0,y1);
//x1=x1+x2;
if(i==1)
num2=y1/2;
y1=y1+y2;
}
x1=(x/n)/2;
y1=(y/n)/2;
} /* if(x2>10)*/
else
{
x2=y2=10;
for(i=0;i<=n;i++)
{
delay(250);
line(x1,y1,x2,y2);
x1=x1+10;
}
for(i=0;i<=n;i++)
{
delay(250);
line(x1,y1,0,y1);
y1=y1+10;
}

x1=5;
y1=5;
}
delay(250);
for(i=0;i<n;i++)
sol[i]=32767;
for(i=0;i<n;i++)
{for(int j=0;j<n;j++)
{chess[i][j]=j;
}}
for(int j=0;j<n;j++)
diag45[j]=sol[j]=32767;

num1=x1;
queens(0,c1);
setcolor(WHITE);
outtextxy(x3,y1,"All solutions are over ");
printf("Total number of solutions is %d ",num);
getch();
}
void queens(int r,int c)
{
delay(10);
int d45,d135,atck=0;
if(r>(n-1)||c>(n-1))
printf("Nonsensical condition reached ");
if(m==1)
{
setcolor(BLACK);
setfillstyle(1,BLACK);
fillellipse(x1+((c-1)*x2),y1+(r*y2),7,7);
}
m=0;
setcolor(WHITE);
setfillstyle(1,WHITE);
fillellipse(x1+((c)*x2),y1+(r*y2),6,6);
delay(350);
d45=r-c;
for(i=0;i<r;i++)
{
r1=abs(r-i);
c1=abs(c-sol[i]);
if((chess[r][c]!=sol[i])&&(d45!=diag45[i])&&(r1!=c1))//This condition
continue;                                            //checks for an
else                                                 //attack
{
atck=1;
break;
}}
//If the queen is safe :-
if(atck!=1)
{
sol[r]=c;
diag45[r]=r-c;
if(r==(n-1))
{
printf("A possible solution is : ");

num++;
getch();
if(c==(n-1))
{
//sol[r-1]=sol[r-1]+1;
setcolor(BLACK);
setfillstyle(1,BLACK);
fillellipse(x1+((n-1)*x2),y1+((n-1)*y2),7,7);
m=1;
//queens(r-1,sol[r-1]);
}
else
{
m=1;
queens(r,c+1);
}}

else
{
sol[r+1]=0;
queens(r+1,0);
if(c!=(n-1))
queens(r,c+1);
else
{
setcolor(BLACK);
setfillstyle(1,BLACK);
fillellipse(x1+((c)*x2),y1+(r*y2),6,6);
printf("");
}}}
//If an attack is taking place :-
else
{
setfillstyle(1,BLACK);
setcolor(BLACK);
fillellipse(x1+(c*x2),y1+(r*y2),6,6);
     if(r!=0)
     {
     if(c!=(n-1))
     queens(r,c+1);
     else
     {
     m=1;
     setbkcolor(RED);
     delay(100);
     setbkcolor(BLACK);
     printf("");
     }}

     else
     {
     if(c!=(n-1))
     printf("");
     }
getch();
}
}
