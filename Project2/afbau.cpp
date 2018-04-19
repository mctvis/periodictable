#include "Header.h"
#include "clickhover.h"

void clickhover::afbau (string filename)
	
{
	int num[7];int lineaf[7];
	al_draw_text(font, blue, 86, 100, NULL, "s");
	al_draw_text(font, yellow, 156, 100, NULL, "p");
	al_draw_text(font, green, 296, 100, NULL, "d");
	al_draw_text(font, red, 456, 100, NULL, "f");

	al_draw_text(font, white, 20,  160, NULL, "1");
	al_draw_text(font, white, 20,  220, NULL, "2");
	al_draw_text(font, white, 20, 280, NULL, "3");
	al_draw_text(font, white, 20, 340, NULL, "4");
	al_draw_text(font, white, 20, 400, NULL, "5");
	al_draw_text(font, white, 20, 460, NULL, "6");
	al_draw_text(font, white, 20, 520, NULL, "7");
	counter = 0;
	ifstream files;
	files.open(filename);
	if(files.is_open())
	{
		while(!files.eof())
		{
			files>>lineaf[counter];
			num[counter] = lineaf[counter];
			counter++;
		}
	}
	
	files.close();

	xini = 80;
	ymd = 60;
	xmr = 15;
	cor1 = xini;
	cor2 = 150;
		
	for(j = 0;j < 7; j++)
	{
		elec = al_load_bitmap("images/s.jpg");
		cor1 = xini;
		for (i = 0; i < num[j] ; i++)
	{
		rectangle(cor1,cor2,elec);
		cor1 = cor1 + xmr;
		if(i == 1)
		{
				cor1 = cor1 + 5;
				elec = al_load_bitmap("images/p.jpg");
		}
		if (i == 7)
		{
				cor1 = cor1 + 5;
				elec = al_load_bitmap("images/d.jpg");

		}
		if (i == 17)
		{
				cor1 = cor1 + 5;
				elec = al_load_bitmap("images/f.jpg");
		}

	}
		cor2 = cor2+ymd;
	}
		
}

void clickhover:: rectangle (int tak1, int tak2, ALLEGRO_BITMAP *elect)
{
	x1 = tak1;
	y1 = tak2;
	x2 = x1 + 10;
	y2 = y1 + 40;
	al_draw_bitmap(elect,x1,y1,NULL);
	//al_draw_filled_rectangle(x1,y1,x2,y2,blue);
	al_flip_display();
}
