#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
float sum=0,w=0,s,wn,v[8],td=0,e,i,j,n,w1[8],j1[8],arr[8],arr1[8],e1,count,d2,y1;
float var,a[8][8],d[8],p[8],n1,c,c1,w2;
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
void draw(float,float);
void dijkstra(float s,float e,float v1[8],float d1[8],float p1[8],float a1[8][8],float n);
void ssp();
void path();
void initial();
printf("There are 8 routers in each subnet");
n=8;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
a[i][j]=32767;
}}
printf("Enter the weight between 0 & 1 : ");
scanf("%f",&a[0][1]);
a[1][0]=a[0][1];
printf("Enter the weight between 0 & 3 : ");
scanf("%f",&a[0][3]);
a[3][0]=a[0][3];
printf("Enter the weight between 1 & 5 : ");
scanf("%f",&a[1][5]);
a[5][1]=a[1][5];
printf("Enter the weight between 1 & 2 : ");
scanf("%f",&a[1][2]);
a[2][1]=a[1][2];
printf("Enter the weight between 2 & 4 : ");
scanf("%f",&a[2][4]);
a[4][2]=a[2][4];
printf("Enter the weight between 2 & 3 : ");
scanf("%f",&a[2][3]);
a[3][2]=a[2][3];
printf("Enter the weight between 3 & 7 : ");
scanf("%f",&a[3][7]);
a[7][3]=a[3][7];
printf("Enter the weight between 4 & 5 : ");
scanf("%f",&a[4][5]);
a[5][4]=a[4][5];
printf("Enter the weight between 4 & 7 : ");
scanf("%f",&a[4][7]);
a[7][4]=a[4][7];
printf("Enter the weight between 5 & 6 : ");
scanf("%f",&a[5][6]);
a[6][5]=a[5][6];
printf("Enter the weight between 6 & 7 : ");
scanf("%f",&a[6][7]);
a[7][6]=a[6][7];
printf("Enter source and destination node from network 1 ");
scanf("%f %f",&s,&e);
clrscr();
initgraph(&gd,&gm,"c:\tc\bgi");
setcolor(WHITE);
fillellipse(20,100,7,7);fillellipse(85,50,7,7);
fillellipse(150,100,7,7);fillellipse(85,150,7,7);
fillellipse(320,100,7,7);fillellipse(385,50,7,7);
fillellipse(450,100,7,7);fillellipse(385,150,7,7);
w1[0]=20;w1[1]=85;w1[2]=150;w1[3]=85;w1[4]=320;
w1[5]=385;w1[6]=450;w1[7]=385;
j1[0]=100;j1[1]=50;j1[2]=100;j1[3]=150;j1[4]=100;j1[5]=50;
j1[6]=100;j1[7]=150;
initial();
setcolor(GREEN);
for(i=0;i<n;i++)
{
v[i]=32767;
d[i]=32767;
p[i]=0;
}
w=s;
d[s]=0;
v[s]=s;
td=0;
dijkstra(s,e,v,d,p,a,n);
path();
c=w1[e];
c1=j1[e];
printf("One more packet ?(Type 1 if yes) ");
scanf("%f",&count);
path();
if(count==1)
ssp();
path();
w=e;
setcolor(GREEN);
count=0;
printf("Enter source and destination node from network 2 ");
scanf("%f %f",&s,&e);
a[0][1]=2;
a[0][3]=6;
a[1][2]=2;
a[1][5]=7;
a[2][3]=1;
a[2][4]=2;
a[4][5]=3;
a[5][6]=3;
a[4][7]=2;
a[6][7]=2;
a[3][7]=4;
a[1][0]=2;
a[3][0]=6;
a[2][1]=2;
a[5][1]=7;
a[3][2]=1;
a[4][2]=2;
a[5][4]=3;
a[6][5]=3;
a[7][4]=2;
a[7][6]=2;
a[7][3]=4;
setcolor(WHITE);
fillellipse(20,400,7,7);fillellipse(85,350,7,7);
fillellipse(150,400,7,7);fillellipse(85,450,7,7);
fillellipse(320,400,7,7);fillellipse(385,350,7,7);
fillellipse(450,400,7,7);fillellipse(385,450,7,7);
w1[0]=20;w1[1]=85;w1[2]=150;w1[3]=85;w1[4]=320;
w1[5]=385;w1[6]=450;w1[7]=385;
j1[0]=400;j1[1]=350;j1[2]=400;j1[3]=450;j1[4]=400;j1[5]=350;
j1[6]=400;j1[7]=450;
initial();
setcolor(GREEN);
for(i=0;i<n;i++)
{
v[i]=32767;
d[i]=32767;
p[i]=0;
}
w=s;
d[s]=0;
v[s]=s;
td=0;
line(c,c1,w1[s],j1[s]);
delay(2000);
dijkstra(s,e,v,d,p,a,n);
path();
if(count==1)
ssp();
path();
getch();
}
void dijkstra(float s,float e,float v1[8],float d1[8],float p1[8],float a1[8][8],float n)
{
while((p1[e])==0)
{
for(i=0;i<n;i++)
{
if((a1[w][i]+td)<d1[i]&&i!=w&&a1[w][i]!=32767)
{
d1[i]=a1[w][i]+td;
d2=d1[i];
v1[i]=w;
}}
sum=32767;
for(i=0;i<n;i++)
{
if(d1[i]<sum&&i!=s&&p1[i]!=1)
{
sum=d1[i];
wn=i;
}}
p1[wn]=1;
td=d1[wn];
w=wn;
}
}
void draw(float w,float v1)
{
float s,x,y;
s=(j1[v1]-j1[w])/(w1[v1]-w1[w]);
if(s<0)
s=s*-1;
x=w1[w];
y=j1[w];
moveto(x,y);
if(x==w1[v1])
{
while(y!=j1[v1])
{
if(y>j1[v1])
{
line(x,y,x,y-1);
delay(10);
y=y-1;
}
else
{
line(x,y,x,y+1);
delay(10);
y=y+1;
}}}
if(y==j1[v1])
{
while(x!=w1[v1])
{
if(x>w1[v1])
{
line(x,y,x-1,y);
delay(10);
x=x-1;
}
else
{
line(x,y,x+1,y);
delay(10);
x=x+1;
}}}
if(x<w1[v1]&&y<j1[v1])
{
while(x!=w1[v1])
{
line(x,y,x+1,y+s);
delay(10);
x=x+1;
y=y+s;
}}
if(x>w1[v1]&&y>j1[v1])
{
while(x!=w1[v1])
{
line(x,y,x-1,y-s);
delay(10);
x=x-1;
y=y-s;
i=i+1;
}}
if(x>w1[v1]&&y<j1[v1])
{
while(x!=w1[v1])
{
line(x,y,x-1,y+s);
delay(10);
x=x-1;
y=y+s;
i=i+1;
}}
if(x<w1[v1]&&y>j1[v1])
{
while(x!=w1[v1])
{
line(x,y,x+1,y-s);
delay(10);
x=x+1;
y=y-s;
i=i+1;
}
}}
void ssp()
{
d2=y1=32767;
setcolor(RED);
e1=e;
for(i=0;i<n;i++)
{
arr1[i]=v[i];
arr[i]=v[i];
}
while(e1!=s)
{
var=a[e1][arr1[e1]]=a[arr1[e1]][e1];
a[e1][arr1[e1]]=a[arr1[e1]][e1]=32767;
for(i=0;i<n;i++)
{
v[i]=32767;
d[i]=32767;
p[i]=0;
}
w=s;d[s]=0;
v[s]=s;
td=0;
dijkstra(s,e,v,d,p,a,n);
if(d2<y1)
{
y1=d2;
for(i=0;i<n;i++)
arr[i]=v[i];
}
a[e1][arr1[e1]]=a[arr1[e1]][e1]=var;
e1=arr1[e1];
}}
void path()
{
while(w!=s)
{
if(count==0)
{
draw(w,v[w]);
w=v[w];
}
else
{
draw(w,arr[w]);
w=arr[w];
}}}
void initial()
{
line(w1[0],j1[0],w1[1],j1[1]);
line(w1[0],j1[0],w1[3],j1[3]);
line(w1[1],j1[1],w1[5],j1[5]);
line(w1[1],j1[1],w1[2],j1[2]);
line(w1[2],j1[2],w1[4],j1[4]);
line(w1[2],j1[2],w1[3],j1[3]);
line(w1[3],j1[3],w1[7],j1[7]);
line(w1[4],j1[4],w1[5],j1[5]);
line(w1[4],j1[4],w1[7],j1[7]);
line(w1[5],j1[5],w1[6],j1[6]);
line(w1[6],j1[6],w1[7],j1[7]);
}

