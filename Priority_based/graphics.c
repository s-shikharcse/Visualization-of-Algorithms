#include "struct.h"
#include <stdio.h>
#include <graphics.h>
extern struct process pr2[20]; 
extern struct process pr[20];
void sorting (int, struct process*, int);

void displaygraphics (int n, struct process* pr1){
	int gd = DETECT, gm = VGAMAX;
	int x, y, i, j;
	int color_change = 0;
    struct process *base = pr1;    
	char m[] = "Visualization of CPU Scheduling Priority Based Algorithm ";
	char msg[] = "Order of Execution of processes.....";
    char p[100];
    char id[50];
	initgraph (&gd, &gm, 0);
	setbkcolor(15);
	moveto (0, 0);
	x = getmaxx (); 
	y = getmaxy ();
	setcolor (GREEN);
	rectangle (0, 0, x, y);
	setlinestyle(0,0,2);
	line (0, y / 3, x, y / 3);
	setfontcolor (RED);
	for(i=0; i<n; ++i,++base){       
		sprintf (p, "Process %d", i + 1);
		setfontcolor(BLACK);
		outtextxy (x / n * i, 20, p);
		sprintf (p, "ID %5u", base->pid);
		setfontcolor(RED);	
		outtextxy (x / n * i, 50, p);
		sprintf (p, "AT %5u", base->at);
		outtextxy (x / n * i, 60, p);
		sprintf (p, "BT %5u", base->bt);
		outtextxy (x / n * i, 70, p);
		sprintf (p, "Priority %5u", base->Priority);
		setfontcolor(MAGENTA);
		outtextxy (x / n * i, 90, p);
		setlinestyle(3,0,2);
		line (x / n * i, 0, x / n * i, y / 3);
	}
/* For Second Block */
    setfontcolor(BLACK);
    outtextxy (x / 3-120, 5 + y / 3, m);
    setcolor (BLUE);
    setlinestyle(0,0,2);
    //bar3d(x / 3 + 50, y / 3 + 30, x / 3 + 100, y / 3 + 100,20,1);
    sorting (n, pr1, 20);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){ 
        	if ( (pr1[i].Priority) == (pr2[j].Priority) ){
                setcolor (CYAN);
                bar3d(x / 3 + 50, y / 3 + 40, x / 3 + 180, y / 3 + 100,20,1);
				sprintf (id, "PID %d", pr2[j].pid);
				outtextxy (x / 3 + 100, y / 3 + 60, id); 
                delay (2000);
                //setfontcolor (BLUE); 
             }
        }
		if(!color_change){
            setfontcolor (BLUE);
            color_change = 1;
        }
        else{
            setfontcolor(RED);
            color_change = 0;
        }    
    }
 
/* For Lower Block */
    outtextxy (x / 3 , 5 + 2*(y / 3)-20, msg);    
    setfontcolor(BLACK);
    setcolor (GREEN);
    setlinestyle(0,0,2);
    line (0, 2 * y / 3, x, 2 * y / 3);
	for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
        	if ( (pr1[i].Priority) == (pr2[j].Priority) ){
                    sprintf (id, "PID %d", pr2[j].pid);
                    outtextxy (x / n * i, 2 * (y / 3) + 50, id); 
                    delay (2000);
            }
        }
        setlinestyle(3,0,2);
		line (x / n * i, 2 * y / 3, x / n * i ,y);
	}
	delay (2000);
	setfontcolor(RED);
	outtextxy (x - 150, y - 40, "Shikhar Sharma");
    outtextxy (x - 150, y - 30, "NIT Hamirpur");
    outtextxy (x - 150, y - 20, "H.P, INDIA(177005)");
    getch();
	closegraph ();
}

// Insertion Sort Algorithm
void sorting (int n, struct process pr1[], int a)                 
{
    int temp, i, j;   
    for (i = 1; i < n; i++){
        temp = pr1[i].Priority; 
        j = i - 1;
        while (temp < pr1[j].Priority && j >= 0){
            pr1[j + 1].Priority = pr1[j].Priority;
            j = j - 1;
        }
        pr1[j + 1].Priority = temp;
    }
}

