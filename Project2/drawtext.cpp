#include "Header.h"
#include "clickhover.h"			
void clickhover::drawtext()
{
	condition = 1;
	al_draw_line(540,130,570,130,white,1);
	al_draw_text(font1,yellow,575, 120, NULL, "Atomic Radius");
	al_draw_line(540,90,570,90,white,1);
	al_draw_text(font1,yellow,575, 80, NULL, "Atomic Wt");
	al_draw_line(540,210,570,210,white,1);
	al_draw_text(font1,yellow,575, 200, NULL, "Density");
	al_draw_line(330,90,360,90,white,1);
	al_draw_text(font1,yellow,220, 80, NULL, "Atomic Number");
	al_draw_line(330,130,360,130,white,1);
	al_draw_text(font1,yellow,220, 120, NULL, "Melting Point");
}