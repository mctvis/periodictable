#include "Header.h"
#include "clickhover.h"

void clickhover::hover(int k, int t)
	{
		int posX[7] = {450,450,390,510,390,510,450};
		int posY[7] = {120,160,80,80,120,120,200};
		int i = 0;
		int j = 0;
		string filename;
		string line;
		stringstream a;
		stringstream b;
		string c = "Folders";
		a << k;
		b << t;
		filename = c+ "/" +a.str() + "/" + b.str();
		filename += ".txt";
		ifstream files;
		files.open(filename.c_str());
		if(files.is_open())
		{

			//al_draw_filled_rectangle(4*60, 60, 7*60, 220, navy);
			al_draw_bitmap(rect,6*60, 60,NULL);
			al_draw_rectangle(6*60, 60, 9*60, 220, black,2);
			if(condition == 0)
			{
				drawtext();
			}
			while(!files.eof())
			{
				getline(files, line);
				const char * c = line.c_str();
				if((posX[i]==450 && posY[j]==120) || (posX[i] == 450 && posY[j] == 160))
					al_draw_text(font, al_map_rgb(255,255,255),posX[i],posY[j],ALLEGRO_ALIGN_CENTER, c);
				else
				{
					al_draw_text(font1, al_map_rgb(255,255,255),posX[i],posY[j],ALLEGRO_ALIGN_CENTER, c);
				}
				i++;
				j++;
			}

		}
		files.close();
	}