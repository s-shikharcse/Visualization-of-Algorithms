// PROJECT ON IMPLEMENTATION OF DATA STRUCTURES GRAPHICALLY.
# include<iostream.h>
# include<conio.h>
# include<graphics.h>
# include<dos.h>
# include<stdio.h>
# include<stdlib.h>
# include<ctype.h>
# include<math.h>

#define CH1 "1.STACK IMPLEMENTATION"
#define CH2	"2.STACK APPLICATION"
#define CH3	"3.QUEUE IMPLEMENTATION"
#define CH4	"4.LINK LIST IMPLEMENTATION"
#define	CH5	"5.Exit    "
#define CH6 "Enter your choice  : "
#define CH(ch) ch==1?CH1:(ch==2?CH2:(ch==3?CH3:CHO(ch)))
#define CHO(ch) ch==4?CH4:CH5

#define S  "STACK IMPLEMENTATION"
#define S1 " 1. CREATE STACK "
#define S2 " 2. PUSH"
#define S3 " 3. POP "
#define S4 " 4. EXIT TO MAIN MENU"
#define C5 " Enter your choice  : "
#define C(ch) ch==1?C1:(ch==2?C2:(ch==3?C3:C4))

#define Q  "QUEUE IMPLEMENTATION"
#define Q1 " 1. CREATE QUEUE "
#define Q2 " 2. ADD ELEMENT "
#define Q3 " 3. DELETE ELEMENT "
#define Q4 " 4. EXIT TO MAIN MENU "

#define L1 "1.ADD A NODE AT BEGIN "
#define L2 "2.ADD A NODE AT END "
#define L3 "3.ADD A NODE IN BETWEEN"
#define L4 "4.DELETE A NODE"
#define L5 "5.EXIT TO MAIN MENU"
#define L6 "ENTER YOUR CHOICE"
#define L(ch) ch==1?L1:(ch==2?L2:(ch==3?L3:(ch==4?L4:L5)))

#define L1 "1.ADD A NODE AT BEGIN "
#define L2 "2.ADD A NODE AT END "
#define L3 "3.ADD A NODE IN BETWEEN"
#define L4 "4.DELETE A NODE"
#define L5 "5.EXIT TO MAIN MENU"
#define L6 "ENTER YOUR CHOICE"
#define L(ch) ch==1?L1:(ch==2?L2:(ch==3?L3:(ch==4?L4:L5)))

class list
{
    struct node{
      int data;
      struct node *link;
    };
    int size;
    typedef struct node *nodeptr;
    nodeptr head;
    public:
    list()
    {
	head=new node;
	head->link=NULL;
	outtextxy(8,390,"Head");
	line(44,393,69,393);
	line(64,388,69,393);
	line(64,398,69,393);
	outtextxy(73,390,"NULL");
	size=0;
    }
    nodeptr create();
   // list* getnode();
    void add();
    void add(int x);
    void add(char end);
    void del();
};
void list::add()
{
    if(size<5)
    {
    nodeptr new1;
    new1=new node;
    setcolor(10);
    rectangle(288,98,602,152);
    rectangle(290,100,600,150);
    gotoxy(39,8);
    cout<<"Enter the number to be added : ";
    cin>>new1->data;
    new1->link=head->link;
    head->link=new1;
    rectangle(70,285,150,335);
    line(130,285,130,335);
    gotoxy(12,20);
    cout<<new1->data;
    size++;
    delay(500);
    int area;
    char *buff;
    area=imagesize(70,365,525,416);
    buff=new char(area);
    getimage(70,365,525,416,buff);
    for(int j=70;j<170;)
    {
	putimage(j,365,buff,XOR_PUT);
	j++;
	putimage(j,365,buff,XOR_PUT);
	delay(5);
    }


    area=imagesize(70,285,150,335);
    buff=new char(area);
    getimage(70,285,150,335,buff);
    for(int i=285;i<=365;)
    {
	putimage(70,i,buff,XOR_PUT);
	i++;
	putimage(70,i,buff,XOR_PUT);
	delay(5);
    }
    int l;
    for(l=398,i=140,j=388;i<170;i++)
    {
	 putpixel(i,393,WHITE);
	 if(i>=164)
	 {
	     putpixel(i,j,WHITE);
	     j++;
	     putpixel(i,l,WHITE);
	     l--;
	 }
	 delay(50);
    }
    setcolor(BLACK);
    rectangle(288,98,602,152);
    rectangle(290,100,600,150);
    gotoxy(39,8);
    cout<<"                                          ";
    }
    else
    {
	 outtextxy(275,175,"Sorry you cannot add more nodes");
	 getch();
	 setcolor(BLACK);
	 outtextxy(275,175,"Sorry you cannot add more nodes");
	 setcolor(WHITE);
    }
}
void list::add(char end)
{
    if(size<5)
    {
    nodeptr new1;
    new1=new node;
    setcolor(10);
    rectangle(288,98,602,152);
    rectangle(290,100,600,150);
    gotoxy(39,8);
    cout<<"Enter the number to be added : ";
    cin>>new1->data;
    nodeptr temp=head;
    while(temp->link!=NULL)
	temp=temp->link;
    temp->link=new1;
    new1->link=NULL;
    rectangle(70+(size*100),285,150+(size*100),335);
    line(130+(size*100),285,130+(size*100),335);
    gotoxy(12+(size*12),20);
    cout<<new1->data;
    delay(1000);
    int area;
    char *buff;
    area=imagesize(70+(size*100),365,525,416);
    buff=new char(area);
    getimage(70+(size*100),365,525,416,buff);
    for(int j=70+(size*100);j<170+(size*100);)
    {
	putimage(j,365,buff,XOR_PUT);
	j++;
	putimage(j,365,buff,XOR_PUT);
	delay(5);
    }

    area=imagesize(70+(size*100),285,150+(size*100),335);
    buff=new char(area);
    getimage(70+(size*100),285,150+(size*100),335,buff);
    for(int i=285;i<=365;)
    {
	putimage(70+(size*100),i,buff,XOR_PUT);
	i++;
	putimage(70+(size*100),i,buff,XOR_PUT);
	delay(5);
    }
    int l;
    for(l=398,i=140+(size*100),j=388;i<170+(size*100);i++)
    {
	 putpixel(i,393,WHITE);
	 if(i>=164+(size*100))
	 {
	     putpixel(i,j,WHITE);
	     j++;
	     putpixel(i,l,WHITE);
	     l--;
	 }
	 delay(50);
    }
    size++;
    setcolor(BLACK);
    rectangle(288,98,602,152);
    rectangle(290,100,600,150);
    gotoxy(39,8);
    cout<<"                                          ";
    }
    else
    {
	 outtextxy(275,175,"Sorry you cannot add more nodes");
	 getch();
	 setcolor(BLACK);
	 outtextxy(275,175,"Sorry you cannot add more nodes");
	 setcolor(WHITE);
    }
}


void list::add(int x)
{
    if(size<5)
    {
      nodeptr new1;
      nodeptr temp=head;
      int s=0;
      while(temp!=NULL&&temp->data!=x)
      {	temp=temp->link;
	s++;
      }
      if(temp==NULL)
      {
	 outtextxy(275,175,"The number not found");
	 getch();
	 setcolor(BLACK);
	 outtextxy(275,175,"The number not found");
	 setcolor(WHITE);
      }
      else
      {
	new1=new node;
	setcolor(10);
	rectangle(288,98,602,152);
	rectangle(290,100,600,150);
	gotoxy(39,8);
	cout<<"Enter the number to be added : ";
	cin>>new1->data;

	new1->link=temp->link;
	temp->link=new1;
	rectangle(70+(s*100),285,150+(s*100),335);
	line(130+(s*100),285,130+(s*100),335);
	gotoxy(12+(s*12),20);
	cout<<new1->data;
	delay(1000);
	int area;
	char *buff;
	area=imagesize(70+(s*100),365,525,416);
	buff=new char(area);
	getimage(70+(s*100),365,525,416,buff);
	for(int j=70+(s*100);j<170+(s*100);)
	{
		putimage(j,365,buff,XOR_PUT);
		j++;
		putimage(j,365,buff,XOR_PUT);
		delay(5);
	}

	area=imagesize(70+(s*100),285,150+(s*100),335);
	buff=new char(area);
	getimage(70+(s*100),285,150+(s*100),335,buff);
	for(int i=285;i<=365;)
	{
		putimage(70+(s*100),i,buff,XOR_PUT);
		i++;
		putimage(70+(s*100),i,buff,XOR_PUT);
		delay(5);
	}
	int l;
	for(l=398,i=140+(s*100),j=388;i<170+(s*100);i++)
	{
		putpixel(i,393,WHITE);
		if(i>=164+(s*100))
		{
			putpixel(i,j,WHITE);
			j++;
			putpixel(i,l,WHITE);
			l--;
		}
		delay(50);
	}
	size++;
	setcolor(BLACK);
	rectangle(288,98,602,152);
	rectangle(290,100,600,150);
	gotoxy(39,8);
	cout<<"                                          ";
      }
    }
    else
    {
	 outtextxy(275,175,"Sorry you cannot add more nodes");
	 getch();
	 setcolor(BLACK);
	 outtextxy(275,175,"Sorry you cannot add more nodes");
	 setcolor(WHITE);
    }
}
void list::del()
{
  if(head->link!=NULL)
  {
    nodeptr temp,temp1;
    temp=head;
    int s=0,x;
    setcolor(10);
    rectangle(288,98,602,152);
    rectangle(290,100,600,150);
    gotoxy(39,8);
    cout<<"Enter the number to be deleted : ";
    cin>>x;


    while(temp->link!=NULL&&temp->link->data!=x)
    {
	temp=temp->link;
	s++;
    }
    if(temp->link==NULL)
    {
	outtextxy(300,175,"The number not found");
	getch();
	setcolor(BLACK);
	outtextxy(300,175,"The number not found");
	setcolor(WHITE);
    }
    else
    {
	temp1=temp->link;
	temp->link=temp->link->link;
	//delete(temp1);
	int area=imagesize(70+(s*100),365,169+(s*100),416);
	char *buff;
	buff=new char(area);
	getimage(70+(s*100),365,169+(s*100),416,buff);
	putimage(70+(s*100),365,buff,XOR_PUT);
	area=imagesize(170+(s*100),365,610,416);
	buff=new char(area);
	getimage(170+(s*100),365,610,416,buff);
	for(int i=170+(s*100);i>170+(s*100)-100;)
	{
	    putimage(i,365,buff,XOR_PUT);
	    i--;
	    putimage(i,365,buff,XOR_PUT);
	    delay(5);
	}
	size--;
    }
    setcolor(BLACK);
    rectangle(288,98,602,152);
    rectangle(290,100,600,150);
    gotoxy(39,8);
    cout<<"                                         ";

  }
  else
  {
      outtextxy(300,175,"The list is empty");
      getch();
      setcolor(BLACK);
      outtextxy(300,175,"The list is empty");
      setcolor(WHITE);
  }
}



void funct1()
{
    //cleardevice();
    int gd,gm,maxx,maxy,x,y;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\tc\\");
    maxx=getmaxx();
    maxy=getmaxy();
    rectangle(0,0,maxx,maxy);
    int ch=1;
    list ptr;
    do
	{
		x=0;
		gotoxy(20,8);
		settextstyle(10,0,2);
		setcolor(9);
		outtextxy(85,10,"Link List Implementation");
		setcolor(10);
		rectangle(0,0,maxx,maxy);
		rectangle(2,2,maxx-2,maxy-2);
		rectangle(40,60,250,230);
		rectangle(38,58,252,232);
		line(40,205,250,205);
		setcolor(WHITE);
		settextstyle(0,0,1);
		outtextxy(50,75,L1);
		outtextxy(50,100,L2);
		outtextxy(50,125,L3);
		outtextxy(50,150,L4);
		outtextxy(50,175,L5);
		outtextxy(50,213,L6);
		gotoxy(29,14);
		printf("%d",ch);
		setcolor(BLUE);
		outtextxy(50,50+(ch*25),L(ch));
		while(x!=13)
		{
			fflush(stdin);
			x=getch();
			sound(150);
			delay(25);
			nosound();
			setcolor(WHITE);
			outtextxy(50,50+(25*ch),L(ch));
			if(x==80)
				ch=(ch==5?1:ch+1);
			else
			   if(x==72)
				ch=(ch==1?5:ch-1);
			setcolor(BLUE);
			outtextxy(50,50+(25*ch),L(ch));
			gotoxy(29,14);
			printf("%d",ch);
		}
		setcolor(WHITE);
		switch(ch)
		{
			case 1:ptr.add();
			       break;
			case 2:ptr.add('e');
			       break;
			case 3:int x;
			       outtextxy(50,245,"Enter the number after which to insert:");
			       gotoxy(47,16);
			       cin>>x;
			       ptr.add(x);
			       gotoxy(5,16);
			       cout<<"                                               ";
			       break;
			case 4:ptr.del();
			       break;
		}
	}while(ch!=5);
     //closegraph();
     //restorecrtmode();
}
//************************ Stack class***************************************
class stack1
{
     int max,flag;
     protected:
	 float a[10];
	 int top;
     public:
     int create();
     void push1();
     void pop1();
     inline int is_full()
     {
	  if(top==max-1)
	      return(1);
	  else
	      return(0);
     }
     inline int is_empty()
     {
	  if(top==-1)
	       return(1);
	  else
	       return(0);
     }
};
// **** defination of member functions of stack1 ****
int stack1::create()
{
     gotoxy(5,17);
     setcolor(10);
     if(flag==1)
     {   setcolor(WHITE);
	 outtextxy(50,275,"Do you want to create new stack(Y/N)");
	 char c=getch();
	 setcolor(BLACK);
	 if((c=='y')||(c=='Y'))
	 {
	    outtextxy(50,275,"Do you want to create new stack(Y/N)");
	    rectangle(500,400-(30*max),575,400);
	    for(int i=1;i<max;i++)
		line(500,400-(30*i),575,400-(30*i));
	    outtextxy(400,413-(top*30)-30,"STACK TOP ->    -1");
	    outtextxy(400,413,"STACK TOP ->    -1");
	    int area;
	    char *buff;
	    area=imagesize(510,15,565,30);
	    buff=new char[area];
	    for(;top>=0;top--)
	    {
		getimage(510,375-(top*30),565,375-(top*30)+15,buff);
		putimage(510,375-(top*30),buff,XOR_PUT);
	    }
	    delete(buff);
	  }
	  else
	  {
	    outtextxy(50,275,"Do you want to create new stack(Y/N)");
	    return(0);
	  }

     }
     setcolor(10);
     rectangle(40,260,350,300);
     rectangle(38,258,352,302);
     setcolor(WHITE);
     outtextxy(50,275,"Enter the size of stack :  _");
     outtextxy(60,285,"(maximum size 10)");
     gotoxy(34,18);
     cin>>max;
     //gotoxy(34,18);
     while(max>10)
     {
	  gotoxy(5,19);
	  outtextxy(50,315,"Please enter size upto 10 ");
	  gotoxy(34,18);
	  cout<<"    ";
	  gotoxy(34,18);
	  cin>>max;
     }
     flag=1;
     top=-1;
     setcolor(WHITE);
     for(int i=400-(30*max);i<=400;i++)
     {
	 putpixel(500,i,WHITE);
	 delay(5);
     }
     for(i=500;i<=575;i++)
     {
	 putpixel(i,400,WHITE);
	 delay(5);
     }
     for(i=400;i>=(400-(30*max));i--)
     {
	 putpixel(575,i,WHITE);
	 delay(5);
     }
     for(i=575;i>=500;i--)
     {
	 putpixel(i,400-(30*max),WHITE);
	 delay(5);
     }
     for( i=1;i<max;i++)
       for(int j=500;j<=575;j++)
       {
	 putpixel(j,400-(30*i),WHITE);
	 delay(5);
       }
     outtextxy(400,413,"STACK TOP ->    -1");
     setcolor(BLACK);
     rectangle(40,260,350,300);
     rectangle(38,258,352,302);
     outtextxy(50,275,"Enter the size of stack :  _");
     gotoxy(34,18);
     cout<<"      " ;
     outtextxy(60,285,"(maximum size 10)");
     outtextxy(50,315,"Please enter size upto 10 ");
     return(0);
}
void stack1::push1()
{
if(flag==1)
{
    if(is_full())
    {
	outtextxy(50,270,"Stack is full ");
	getch();
	setcolor(BLACK);
	outtextxy(50,270,"Stack is full ");
	setcolor(WHITE);
    }
    else
    {
     setcolor(10);
     rectangle(40,260,360,300);
     rectangle(38,258,362,302);
     setcolor(WHITE);
     outtextxy(50,275,"Enter the number to be pushed :");
     gotoxy(39,18);
     cin>>a[++top];
     int j=1;
     for(int i=500;i<575;i++)
     {
     putpixel(i,(400-(max*30)),BLACK);
     putpixel(575+j,(400-(max*30)),WHITE);
     j++;
     delay(20);
     }
     gotoxy(65,2);
     cout<<a[top];
     int area;
     char *buff;
     area=imagesize(510,15,565,30);
     buff=new char[area];
     getimage(510,15,565,30,buff);
     for(i=15;i<=375-(top*30);)
     {
	 putimage(510,i,buff,XOR_PUT);
	 i++;
	 putimage(510,i,buff,XOR_PUT);
	 delay(5);
     }
     delete(buff);
     for( i=575;i>=500;i--)
     {
     putpixel(575+j,(400-(max*30)),BLACK);
     putpixel(i,(400-(max*30)),WHITE);
     j--;
     delay(20);
     }
     area=imagesize(400,413,495,430);
     buff=new char(area);    //for stack ptr movement
     getimage(400,413-(top*30),495,430-(top*30),buff);
     for(i=413-(top*30);i>413-(top*30)-30;)
     {
	 putimage(400,i,buff,XOR_PUT);
	 i--;
	 putimage(400,i,buff,XOR_PUT);
	 delay(10);
     }
     setcolor(BLACK);
     rectangle(40,260,360,300);
     rectangle(38,258,362,302);
     outtextxy(50,275,"Enter the number to be pushed :");
     gotoxy(39,18);
     cout<<"        ";
     setcolor(WHITE);
     delete(buff);
    }
}
else
{
      outtextxy(50,270,"First create a stack");
      getch();
      setcolor(BLACK);
      outtextxy(50,270,"First create a stack");
      setcolor(WHITE);
}
} //********* end of push function **********
//******************** pop function ***********
void stack1::pop1()
{
    if(flag==1)
    {
	if(is_empty())
	{
	    outtextxy(50,270,"Stack is empty ");
	    getch();
	    setcolor(BLACK);
	    outtextxy(50,270,"Stack is empty ");
	    setcolor(WHITE);
	}
	else
	{
	    char *buff;
	    int area;
	    int j=1;
	    setcolor(10);
	    rectangle(40,260,360,300);
	    rectangle(38,258,362,302);
	    setcolor(WHITE);
	    outtextxy(50,275,"The poped element is :");
	    gotoxy(33,18);
	    cout<<a[top];

	    for(int i=500;i<575;i++)
	    {
		putpixel(i,(400-(max*30)),BLACK);
		putpixel(575+j,(400-(max*30)),WHITE);
		j++;
		delay(20);
	    }
	    area=imagesize(510,15,565,30);
	    buff=new char[area];
	    getimage(510,375-(top*30),565,375-(top*30)+15,buff);

	    for( i=375-(top*30);i>=0;)
	    {
		putimage(510,i,buff,XOR_PUT);
		i--;
		putimage(510,i,buff,XOR_PUT);
		delay(5);
	    }
	    delete(buff);
	    for( i=575;i>=500;i--)
	    {
		putpixel(575+j,(400-(max*30)),BLACK);
		putpixel(i,(400-(max*30)),WHITE);
		j--;
		delay(20);
	    }
	    area=imagesize(400,413,495,430);
	    buff=new char(area);    //for stack ptr movement
	    getimage(400,413-(top*30)-30,495,430-(top*30)-30,buff);
	    for(i=413-(top*30)-30;i<413-(top*30);)
	    {
		putimage(400,i,buff,XOR_PUT);
		i++;
		putimage(400,i,buff,XOR_PUT);
		delay(10);
	    }
	    delete(buff);
	    top--;
	    getch();
	    setcolor(BLACK);
	    rectangle(40,260,360,300);
	    rectangle(38,258,362,302);
	    outtextxy(50,275,"The poped element is :");
	    gotoxy(33,18);
	    cout<<"        ";
	}
    }
    else
    {
	outtextxy(50,270,"First create a stack");
	getch();
	setcolor(BLACK);
	outtextxy(50,270,"First create a stack");
	setcolor(WHITE);
    }
}
//**************** end of pop function *****************
class post:public stack1
{
    public:
    void create(int);
    void postfix(char *,char*);
    int isoperand(char);
    int prcd(char,char);
    void push(char);
    char pop();
};
void post :: create(int n)
{
    settextstyle(0,0,1);
    //cleardevice();
    rectangle(500,100,575,400);
    for(int i=1;i<n;i++)
	line(500,100+(i*30),575,100+(i*30));
    top=-1;
    outtextxy(450,415,"Top ->");
}
void post::push(char x)
{
    a[++top]=x;
    gotoxy(67,25-(top*2));
    cout<<x;
    setcolor(BLACK);
    outtextxy(450,415-(top*30),"Top ->");
    setcolor(WHITE);
    outtextxy(450,415-(top*30)-30,"Top ->");
    delay(2000);
}
char post::pop()
{
    setcolor(BLACK);
    gotoxy(67,25-(top*2));
    cout<<"  " ;
    outtextxy(450,415-(top*30)-30,"Top ->");
    setcolor(WHITE);
    outtextxy(450,415-(top*30),"Top ->");
    delay(2000);
    return(a[top--]);
}
int post::prcd(char op1,char op2)
{
     int a,b;
     switch(op1)
     {
	 case '$':a=4;break;
	 case '/':a=3;break;
	 case '*':a=2;break;
	 case '+':a=1;break;
	 case '-':a=1;break;
	 //case '(':a=0;break;
	 //default :a=-1;
     }
     switch(op2)
     {
	 case '$':b=4;break;
	 case '/':b=3;break;
	 case '*':b=2;break;
	 case '+':b=1;break;
	 case '-':b=1;break;
	 //case '(':b=0;
	 //default :b=-1;
     }
     if(op1=='(')
	 return(0);
     if(op2=='('&&op1!=')')
	 return(0);
     if(op2==')'&&op1!='(')
	 return(1);
     if(op1=='$'&&op2=='$')
	 return(0);
     if(a>=b)
	 return(1);
     else
	 return(0);
}
void post :: postfix(char infix[],char postr[])
{
    int i=1;
    int position,und;
    int outpos=0;
    char topsym,sym;
    create(10);
    for(position=0;(sym=infix[position])!='\0';position++)
    {
	 if(isdigit(sym))
	 {   postr[outpos++]=sym;
	     postr[outpos]='\0';
	     gotoxy(4,5+ ++i);
	     cout<<postr<<endl;
	 }
	 else
	 {
	     while(!is_empty()&&prcd(a[top],sym))
	     {
		 topsym=pop();
		 postr[outpos++]=topsym;
		 postr[outpos]='\0';
		 gotoxy(4,5+ ++i);
		 cout<<postr<<endl;
	     }
	     //if(!is_empty())
	       //	push(topsym);
	     if(is_empty()||(sym!=')'))
		push(sym);
	     else
	     {	topsym=pop();
		delay(2000);   }
	  } //end of else
    }
    while(!is_empty())
    {	postr[outpos++]=pop();
	postr[outpos]='\0';
	gotoxy(4,5+ ++i);
	cout<<postr;
    }
    postr[outpos]='\0';
    delay(1000);
    return;
}// end of postfix

class evaluate : public post
{
    public:
    void push(float);
    float pop();
    float oper(int ,float ,float);
    float eval(char[]);
};
void evaluate:: push(float x)
{
    a[++top]=x;
    gotoxy(64,25-(top*2));
    cout<<x;
    setcolor(BLACK);
    outtextxy(450,415-(top*30),"Top ->");
    setcolor(WHITE);
    outtextxy(450,415-(top*30)-30,"Top ->");
    delay(2000);
}
float evaluate::pop()
{
    setcolor(BLACK);
    gotoxy(64,25-(top*2));
    cout<<"        " ;
    outtextxy(450,415-(top*30)-30,"Top ->");
    setcolor(WHITE);
    outtextxy(450,415-(top*30),"Top ->");
    delay(2000);
    return(a[top--]);
}
float evaluate::oper(int symb,float op1,float op2)
{
    switch(symb)
    {
	case '+':return(op1+op2);
	case '-':return(op1-op2);
	case '*':return(op1*op2);
	case '/':return(op1/op2);
	case '$':return(pow(op1,op2));
	default :cout<<"illegal operation" ;
		 return(0);
    }
}

float evaluate::eval(char expr[])
{
    int c,position,i=1;
    float opnd1,opnd2,value;
    create(10);
    for(position=0;(c=expr[position])!='\0';position++)
	if(isdigit(c))
	   push(float(c-'0'));
	else
	{
	   opnd2=pop();
	   opnd1=pop();
	   gotoxy(3,6+ ++i);
	   cout<<opnd1;
	   delay(1000);
	   gotoxy(14,6+i);
	   cout<<opnd2;
	   delay(1000);
	   gotoxy(24,6+i);
	   cout<<(char)c;
	   value=oper(c,opnd1,opnd2);
	   gotoxy(34,6+i);
	   cout<<value;
	   push(value);
	}
    return(pop());
}

void funct3()
{
    cleardevice();
    post p;
    char infix[80],postr[80];
    int pos=0;
    setcolor(BLUE);
    settextstyle(10,0,2);
    outtextxy(150,25,"Application of Stack");
    rectangle(0,0,getmaxx(),getmaxy());
    rectangle(2,2,getmaxx()-2,getmaxy()-2);
    setcolor(WHITE);
    settextstyle(1,0,2);
    outtextxy(75,150,"Stack is used for conversion of infix expression 
");
    outtextxy(75,175,"to postfix and to evaluate a postfix 
expression");
    outtextxy(75,200,"You are required to enter an infix expression");
    outtextxy(75,225,"Note : You have to enter operands of single
digits");
    outtextxy(75,250,"       and use circular brackets rather than");
    outtextxy(75,275,"       square ones if needed");
    outtextxy(75,300,"       use $ for exponention operator");
    gotoxy(20,25);
    textcolor(YELLOW);
    cout<<"Press any key to continue ...." ;
    getch();
    cleardevice();
    setcolor(YELLOW);
    rectangle(0,0,getmaxx(),getmaxy());
    rectangle(2,2,getmaxx()-2,getmaxy()-2);
    setcolor(WHITE);
    gotoxy(4,2);
    textcolor(WHITE);
    cout<<"Enter the infix expression";
    gotoxy(4,3);
    while((infix[pos++]=getchar())!='\n')
    ;
    infix[--pos]='\0';
    gotoxy(4,4);
    cout<<"The original infix expression is :";
    gotoxy(4,5);
    cout<<infix;
    delay(500);
    gotoxy(4,25);
    cout<<"Executing..." ;
    setcolor(BLUE);
    outtextxy(450,50,"Conversion Stack");
    setcolor(WHITE);
    p.postfix(infix,postr);
    gotoxy(4,25);
    cout<<"             " ;
    gotoxy(4,22);
    cout<<"The  final postfix expression is :";
    gotoxy(4,23);
    cout<<postr;
    gotoxy(4,25);
    cout<<"Do you want to evaluate this expression(Y/N):";
    char ch=getch();
    evaluate e;
    if(ch=='Y'||ch=='y')
    {
	cleardevice();
	setcolor(YELLOW);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(2,2,getmaxx()-2,getmaxy()-2);
	setcolor(BLUE);
	settextstyle(1,0,2);
	outtextxy(450,50,"Evaluation Stack");
	setcolor(WHITE);
	gotoxy(4,2);
	cout<<"The original infix expression was :";
	gotoxy(6,3);
	cout<<infix;
	gotoxy(4,4);
	cout<<"The postfix expression is :";
	gotoxy(6,5);
	cout<<postr;
	gotoxy(2,7);
	cout<<" Opnd1     Opnd2     operator	value";
	delay(1000);
	gotoxy(4,24);
	cout<<"Executing...";
	delay(100);
	float ans=e.eval(postr);
	gotoxy(4,24);cout<<"               ";
	gotoxy(4,20);
	cout<<"The final answer is : "<<ans;
	gotoxy(4,24);cout<<"Press any key to continue...";
	getch();
    }
}

//******************** Queue class
*******************************************
class queue1
{
    int a[10],front,rear,flag,max;
    public:
    void add();
    void del();
    int create();
    inline int isfull()
    {
	if(rear==max-1)
	    return(1);
	else
	    return(0);
    }
    inline int isempty()
    {
	if(rear==-1)
	    return(1);
	else
	    return(0);
    }
};
int queue1 :: create()    //for queue
{
     gotoxy(24,17);
     setcolor(10);
     if(flag==1)
     {   setcolor(WHITE);
	 outtextxy(50,275,"Do you want to create new queue(Y/N)");
	 char c=getch();
	 setcolor(BLACK);
	 if((c=='y')||(c=='Y'))
	 {
	    outtextxy(50,275,"Do you want to create new queue(Y/N)");
	    rectangle(50,355,50+(50*max),390);
	    for(int i=1;i<=max;i++)
		line(50+(i*50),355,50+(i*50),390);
	    settextstyle(0,1,1);
	    outtextxy(30+(rear*50)+50,395,"rear ->");
	    outtextxy(53,395,"front ->");
	    settextstyle(0,0,1);
	    gotoxy(5,24);
	    cout<<"                                                        ";
	  }
	  else
	  {
	    outtextxy(50,275,"Do you want to create new queue(Y/N)");
	    return(0);
	  }

     }
     setcolor(10);
     rectangle(190,260,500,300);
     rectangle(188,258,502,302);
     setcolor(WHITE);
     outtextxy(200,275,"Enter the size of queue :  _");
     outtextxy(210,285,"(maximum size 10)");
     gotoxy(53,18);
     cin>>max;
     while(max>10)
     {
	  gotoxy(24,19);
	  outtextxy(200,315,"Please enter size upto 10 ");
	  gotoxy(53,18);
	  cout<<"    ";
	  gotoxy(53,18);
	  cin>>max;
     }
     flag=1;
     front=0;
     rear=-1;
     setcolor(WHITE);
     rectangle(50,355,50+(max*50),390);
     for(int i=1;i<=max;i++)
     {
     line(50+(i*50),355,50+(i*50),390);
     }
     settextstyle(0,1,1);
     outtextxy(53,395,"front ->");
     outtextxy(30,395,"rear ->");
     settextstyle(0,0,1);
     setcolor(BLACK);
     rectangle(190,260,500,300);
     rectangle(188,258,502,302);
     outtextxy(200,275,"Enter the size of queue :  _");
     gotoxy(53,18);
     cout<<"        ";
     outtextxy(210,285,"(maximum size 10)");
     outtextxy(200,315,"Please enter size upto 10 ");
     return(0);
}//  ********end of create ***********
void queue1::add()
{
if(flag==1)
{
    if(isfull())
    {
	outtextxy(200,270,"Queue is full ");
	getch();
	setcolor(BLACK);
	outtextxy(200,270,"Queue is full ");
	setcolor(WHITE);
    }
    else
    {
     setcolor(10);
     rectangle(190,260,510,300);
     rectangle(188,258,512,302);
     setcolor(WHITE);
     outtextxy(200,275,"Enter the number to be added :");
     gotoxy(58,18);
     cin>>a[++rear];
     int j=1;
     for(int i=355;i<390;i++)
     {
     putpixel(50+(max*50),i,BLACK);
     putpixel(50+(max*50),390+j,WHITE);
     j++;
     delay(20);
     }
     gotoxy(75,24);
     cout<<a[rear];
     int area;
     char *buff;
     area=imagesize(590,365,630,380);
     buff=new char[area];
     getimage(590,365,630,380,buff);
     for(i=590;i>=60+(rear*50);)
     {
	 putimage(i,365,buff,XOR_PUT);
	 i--;
	 putimage(i,365,buff,XOR_PUT);
	 delay(5);
     }
     delete(buff);
     for( i=390;i>=355;i--)
     {
     putpixel(50+(max*50),390+j,BLACK);
     putpixel(50+(max*50),i,WHITE);
     j--;
     delay(20);
     }
     area=imagesize(20,395,30,460);
     buff=new char(area);    //for rear ptr movement
     getimage(20+(50*rear),395,30+(50*rear),460,buff);
     for(i=20+(rear*50);i<20+(rear*50)+50;)
     {
	 putimage(i,395,buff,XOR_PUT);
	 i++;
	 putimage(i,395,buff,XOR_PUT);
	 delay(10);
     }
     delete(buff);
     setcolor(BLACK);
     rectangle(190,260,510,300);
     rectangle(188,258,512,302);
     outtextxy(200,275,"Enter the number to be added :");
     gotoxy(58,18);
     cout<<"        ";
     setcolor(WHITE);
    }
}
else
{
      outtextxy(200,270,"First create a Queue");
      getch();
      setcolor(BLACK);
      outtextxy(200,270,"First create a Queue");
      setcolor(WHITE);
}
} //********* end of add function **********
void queue1::del()
{
    if(flag==1)
    {
	if(isempty())
	{
	    outtextxy(200,270,"Queue is empty ");
	    getch();
	    setcolor(BLACK);
	    outtextxy(200,270,"Queue is empty ");
	    setcolor(WHITE);
	}
	else
	{
	    char *buff;
	    int area;
	    int j=1;
	    setcolor(10);
	    rectangle(190,260,510,300);
	    rectangle(188,258,512,302);
	    setcolor(WHITE);
	    outtextxy(200,275,"The deleted element is :");
	    gotoxy(52,18);
	    cout<<a[front];

	    j=1;
	    for(int i=390;i>355;i--)
	    {
		putpixel(50,i,BLACK);
		putpixel(50,355-j,WHITE);
		j++;
		delay(20);
	    }


	    area=imagesize(590,365,630,380);
	    buff=new char[area];
	    getimage(60,365,95,380,buff);
	    for(i=60;i>-30;)
	    {
		putimage(i,365,buff,XOR_PUT);
		i--;
		putimage(i,365,buff,XOR_PUT);
		delay(5);
	    }
	    delete(buff);
	    for(i=1;i<=rear;i++)
	    {
	       getimage(60+(i*50),365,95+(i*50),380,buff);
	       for(j=60+(i*50);j>60+(i*50)-50;)
	       {
		    putimage(j,365,buff,XOR_PUT);
		    j--;
		    putimage(j,365,buff,XOR_PUT);
		    delay(5);
	       }
	    }
	    area=imagesize(20,395,30,460);
	    buff=new char(area);    //for rear ptr movement
	    getimage(20+(50*rear)+50,395,30+(50*rear)+50,460,buff);
	    for(i=20+(rear*50)+50;i>20+(rear*50);)
	    {
		putimage(i,395,buff,XOR_PUT);
		i--;
		putimage(i,395,buff,XOR_PUT);
		delay(10);
	    }
	    delete(buff);
	    ///////////////////////////////////
	    j=1;
	    for( i=355-35;i<355;i++)
	    {
		putpixel(50,i,BLACK);
		putpixel(50,355+j,WHITE);
		j++;
		delay(20);
	    }

	    for(i=0;i<rear;i++)
	       a[i]=a[i+1];
	    rear--;
	    getch();
	    setcolor(BLACK);
	    rectangle(190,260,510,300);
	    rectangle(188,258,512,302);
	    outtextxy(200,275,"The deleted element is :");
	    gotoxy(52,18);
	    cout<<"        ";
	}
    }
    else
    {
	outtextxy(200,270,"First create a Queue");
	getch();
	setcolor(BLACK);
	outtextxy(200,270,"First create a Queue");
	setcolor(WHITE);
    }
}
//**************** end of del function *****************
void funct(char *C1,char *C2,char *C3,char *C4,char *title,int d,int g)
{
    cleardevice();
    int gd,gm,maxx,maxy,x,y;
    maxx=getmaxx();
    maxy=getmaxy();
    rectangle(0,0,maxx,maxy);
    int ch=1;
    stack1 s;
    queue1 q;
    gotoxy(20,8);
		settextstyle(10,0,2);
		setcolor(9);
		outtextxy(85,10,title);
		setcolor(10);
		rectangle(0,0,maxx,maxy);
		rectangle(2,2,maxx-2,maxy-2);
		rectangle(40+d,80,250+d,230);
		rectangle(38+d,78,252+d,232);
		line(40+d,205,250+d,205);
		setcolor(WHITE);
		settextstyle(0,0,1);
		outtextxy(50+d,100,C1);
		outtextxy(50+d,125,C2);
		outtextxy(50+d,150,C3);
		outtextxy(50+d,175,C4);
		outtextxy(50+d,213,C5);

    do
	{
		x=0;
		gotoxy(29+g,14);
		printf("%d",ch);
		setcolor(BLUE);
		outtextxy(50+d,75+(ch*25),C(ch));
		while(x!=13)
		{
			fflush(stdin);
			x=getch();
			sound(150);
			delay(25);
			nosound();
			setcolor(WHITE);
			outtextxy(50+d,75+(25*ch),C(ch));
			if(x==80)
				ch=(ch==4?1:ch+1);
			else
			   if(x==72)
				ch=(ch==1?4:ch-1);
			setcolor(BLUE);
			outtextxy(50+d,75+(25*ch),C(ch));
			gotoxy(29+g,14);
			printf("%d",ch);
		}
		setcolor(WHITE);

		switch(ch)
		{
			case 1:if(d==0)
				 s.create();
			       else
				 q.create();
			       break;
			case 2:if(d==0)
				  s.push1();
			       else
				  q.add();
			       break;
			case 3:if(d==0)
				  s.pop1();
			       else
				  q.del();
			       break;
		}
	}while(ch!=4);
}
// ************** End of funct function *************


//************************ Main function
************************************
void main()
{
    int gd=DETECT,gm,maxx,maxy;
    initgraph(&gd,&gm,"c:\\tc\\");
    maxx=getmaxx();
    maxy=getmaxy();
    rectangle(0,0,maxx,maxy);
    setcolor(YELLOW);
    settextstyle(7,0,1);
    delay(1000);
    outtextxy(maxx/2-textwidth("A")/2,10,"A");
    outtextxy(maxx/2-textwidth("Project on")/2,30,"Project on");
    delay(2000);
    //sound(500);
    //delay(2000);
    //nosound();
    setcolor(9);
    settextstyle(10,0,3);
    
outtextxy(maxx/2-textwidth("IMPLEMENTATION")/2,50,"IMPLEMENTATION");
    outtextxy(maxx/2-textwidth("OF")/2,100,"OF");
    outtextxy(maxx/2-textwidth("DATA  STRUCTURES")/2,150,"DATA
STRUCTURES");
    //sound(400);
    delay(1500);
    //nosound();
    setcolor(YELLOW);
    settextstyle(7,0,2);
    outtextxy(maxx/2-textwidth("Prepared by")/2,240,"Prepared by");
    setcolor(WHITE);
    settextstyle(1,0,2);
    char r[]="   NAME              ROLL NO";
    outtextxy(177,455,r);
    //delay(1000);
    char *buff;
    int area;
    area=imagesize(177,280,535,300);
    buff=new char(area);
    getimage(177,455,535,475,buff);
    int x=177,y=455;
    for(;y>=280;)
    {
      // sound(500);
       putimage(x,y,buff,XOR_PUT);
       y=y-1;
       putimage(x,y,buff,XOR_PUT);
    }
    nosound();
    delete(buff);
    for(int i=200;i<=270;i++)
    {
	putpixel(i,305,WHITE);
	delay(10);
    }
    char a[]=" Swapnil B adsure         01  ";
    outtextxy(140,455,a);
    area=imagesize(140,455,498,475);
    buff=new char(area);
    getimage(140,455,498,475,buff);
    x=140;
    y=455;
    for(;y>=320;)
    {
	 putimage(x,y,buff,XOR_PUT);
	 y=y-1;
	 putimage(x,y,buff,XOR_PUT);
    }
       delete(buff);
    char q[]="Press any key to continue . . . .";
    delay(500);
    settextstyle(6,0,1);
    setcolor(YELLOW);
    outtextxy(maxx/2-textwidth(q)/2,400,q);
    getch();
    cleardevice();
    int ch=1;
    maxx=getmaxx();
    maxy=getmaxy();
    rectangle(0,0,maxx,maxy);

	do
	{
		int x=0;
		cleardevice();
		//gotoxy(20,8);
		settextstyle(10,0,1);
		setcolor(YELLOW);
		outtextxy(225,64,"  MAIN MENU  ");
		rectangle(0,0,maxx,maxy);
		rectangle(2,2,maxx-2,maxy-2);
		rectangle(160,130,500,335);
		rectangle(158,128,502,337);
		rectangle(385,300,405,320);
		rectangle(383,298,407,322);
		line(160,285,500,285);
		setcolor(WHITE);
		settextstyle(1,0,1);
		outtextxy(180,150,CH1);
		outtextxy(180,175,CH2);
		outtextxy(180,200,CH3);
		outtextxy(180,225,CH4);
		outtextxy(180,250,CH5);
		outtextxy(180,295,CH6);

		gotoxy(50,20);
		printf("%d",ch);
		settextstyle(1,0,1);
		setcolor(BLUE);
		outtextxy(180,125+(ch*25),CH(ch));
		while(x!=13)
		{
			fflush(stdin);
			x=getch();
			sound(150);
			delay(25);
			nosound();
			setcolor(WHITE);
			outtextxy(180,125+(25*ch),CH(ch));
			if(x==80)
				ch=(ch==5?1:ch+1);
			else
			   if(x==72)
				ch=(ch==1?5:ch-1);
			setcolor(BLUE);
			outtextxy(180,125+(25*ch),CH(ch));
			gotoxy(50,20);
			printf("%d",ch);
		}
		setcolor(WHITE);
		//settextstyle(0,0,1);
		switch(ch)
		{
			case 1:funct(S1,S2,S3,S4,S,0,0);
			       break;
			case 2:funct3();
			       break;
			case 3:funct(Q1,Q2,Q3,Q4,Q,150,19);
			       break;
			case 4:closegraph();
			       funct1();
			       break;

		}
	}while(ch!=5);
    cleardevice();
    settextstyle(4,0,5);
    rectangle(0,0,maxx,maxy);
    rectangle(2,2,maxx-2,maxy-2);
    setcolor(RED);
    outtextxy(200,100,"Prepared by");
    setcolor(YELLOW);
    outtextxy(150,300,"Swapnil B adsure");
    getch();
    closegraph();
    restorecrtmode();
    //return(0);
}
