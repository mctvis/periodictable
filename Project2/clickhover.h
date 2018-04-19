#include "Header.h"
class clickhover
{
	int i,j,x,y,d,x1,y1,x2,y2,xpos,ypos,counter,countre,a,countering,condition,lineint[7],mouse, num[7], lineaf[7];
	int xini;
	int ymd;
	int xmr;
	int cor1;
	int cor2;
	double theta, theeta, theeeta;
	//string filename;
	string line;
	string description;
	string rotating;
	string econfig;
	ALLEGRO_EVENT event;
	ALLEGRO_EVENT eventpause;
	ALLEGRO_DISPLAY *display1;
	ALLEGRO_EVENT_QUEUE *eventclick;
	ALLEGRO_TIMER *timer;
	ALLEGRO_FONT *font;
	ALLEGRO_FONT *font1;
	ALLEGRO_BITMAP *elec;
	ALLEGRO_BITMAP *plain;
	//ALLEGRO_BITMAP *s;
	//ALLEGRO_BITMAP *p;
	//ALLEGRO_BITMAP *dd;
	//ALLEGRO_BITMAP *f;
	//ALLEGRO_BITMAP *pro2;
	ALLEGRO_BITMAP *tab1;
	ALLEGRO_BITMAP *tab2;
	ALLEGRO_BITMAP *tab3;
	ALLEGRO_BITMAP *rect;
	ALLEGRO_BITMAP *background;
	bool done;
public:
	clickhover()
	{
		font = al_load_font("Fonts/Roboto-Bold.ttf", 22, NULL);
		font1 = al_load_font("Fonts/Roboto-Bold.ttf", 15, NULL);
		condition = 0;
		a=60;
		counter = 0;
		countre = 0;
		background = al_load_bitmap("images/backf.jpg");
		//elec = al_load_bitmap("images/f.jpg");
		//pro2 = al_load_bitmap("images/pro2.png");
		tab1 = al_load_bitmap("images/tab2.jpg");
		tab2 = al_load_bitmap("images/tab.jpg");
		tab3 = al_load_bitmap("images/tab3.jpg");
		rect=  al_load_bitmap("images/rect.jpg");
		/*s= al_load_bitmap("images/s.jpg");
		p= al_load_bitmap("images/p.jpg");
		dd= al_load_bitmap("images/d.jpg");
		f= al_load_bitmap("images/f.jpg");
		*/
		//plain=al_load_bitmap("images/plain.jpg");
	}
	void ghumauney(int [], double, int);
	void hoverclick(int, int, int);
	void hover(int, int);
	void click(int , int);
	void file1(string);
	int* file2(int, int);
	string file(int,int);
	void file3(string);
	void afbau(string);
	void rectangle(int, int, ALLEGRO_BITMAP*);
	void tabs();
	void drawtext();
	~clickhover()
	{
		//al_destroy_bitmap(elec);
		//al_destroy_bitmap(pro2);
		al_destroy_bitmap(tab1);
		al_destroy_bitmap(tab2);
		al_destroy_bitmap(tab3);
		al_destroy_bitmap(rect);
		al_destroy_bitmap(background);
		//al_destroy_bitmap(plain);
	}
};