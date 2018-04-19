#include "Header.h"
#include "clickhover.h"

void clickhover:: hoverclick(int x, int y, int mousebutton)
	{
		done= false;
		x1 = x/60;
		y1 = y/60;
		if((x1 == 1 || x1 == 18) && (y1>=1 && y1<8)){}
		else if((x1 >= 3 && x1< 13) && (y1<8 && y1>=4)){y1-=3;}
		else if(((x1 >=13 && x1< 18) || x1 == 2) && (y1<8 && y1>=2)){y1-=1;}
		else if((y1 >= 9 && y1 < 11) && (x1>=3 && x1<17))
		{
			x1-=2;
			y1+=10;
			int temp;
			temp = x1;
			x1 = y1;
			y1=temp;
		}
		else {done = true;}
		if (!done)
		{
			hover(x1,y1);
			if(mousebutton == 1) {click(x1, y1+20);}
		}
		/*
		if(((x>=3*a && x< 17*a) && (y>=9*a && y<=10*a)) || ((x>=3*a && x<17*a) && (y>=10*a && y<=11*a)))
		{
				if(y>=9*a && y<=10*a)
				{
					hover (19, (x/60)-2);
					if(mousebutton == 1)
					{
						click(19, (x/60) + 18);
					}
				}
				else if(y>=10*a && y<=11*a)
				{
					hover(20,(x/60)-2);
					if(mousebutton == 1)
						click(20, (x/60)+18);
				}
		}
		for (i=1; i<=18; i++)
		{
			if(i==1 || i==18){j=1;}	
			else if(i==2 || (i>=13 && i<=17)){j=2;}
			else if(i>=3 && i<=12){j=4;}
			if((x>i*a && y>j*a) && (x<(i+1)*a && y<8*a))
			{
				counter = 0;
				for(j;j<=7; j++)
				{
					counter++;
					if((y>j*a) && (y<(j+1)*a))
					{
						hover (i,counter);
						if(mousebutton == 1)
							click(i, 10+counter);
					}
				}
			}
		}*/
	}