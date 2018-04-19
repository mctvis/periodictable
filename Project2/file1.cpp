#include "Header.h"
#include "clickhover.h"
void clickhover:: file1(string fdescription)
				{
					int i=3,j=3;
					ifstream files;
					files.open(fdescription.c_str());
					if(files.is_open())
					{
						while(!files.eof())
						{
							getline(files, line);
							const char * c = line.c_str();
							al_draw_text(font1, al_map_rgb(255,255,255),i*30,j*30,ALLEGRO_ALIGN_LEFT, c);
							j++;
						}
					}
				files.close();
			}