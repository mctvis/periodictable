#include "Header.h"
class drawing
{
	ALLEGRO_FONT *font;
	ALLEGRO_FONT *font1;
	int i,j,a,b,c,d,x1,y1,x2,y2,counter;
	ALLEGRO_BITMAP *alkalis;
	ALLEGRO_BITMAP *alkalineearths;
	ALLEGRO_BITMAP *transitions;
	ALLEGRO_BITMAP *ptmetal;
	ALLEGRO_BITMAP *metalloid;
	ALLEGRO_BITMAP *nonmetal;
	ALLEGRO_BITMAP *halogen;
	ALLEGRO_BITMAP *nobles;
	ALLEGRO_BITMAP *lanthi;
	ALLEGRO_BITMAP *acti;
	public:
		drawing()
		{
			font = al_load_font("Fonts/Roboto-Bold.ttf", 22, NULL);
			font1 = al_load_font("Fonts/Roboto-Bold.ttf", 15, NULL);
			a=60;
			counter=0;
			alkalis = al_load_bitmap("images/alkali.png");
			alkalineearths = al_load_bitmap("images/alkalineearth.png");
			transitions = al_load_bitmap("images/transition.png");
			ptmetal = al_load_bitmap("images/ptmetal.png");
			metalloid = al_load_bitmap("images/metalloid.png");
			nonmetal = al_load_bitmap("images/nonmetal.png");
			halogen = al_load_bitmap("images/halogen.png");
			nobles = al_load_bitmap("images/noble.png");
			lanthi = al_load_bitmap("images/lanti.jpg");
			acti = al_load_bitmap("images/anti.jpg");
		}
		~drawing()
		{
			al_destroy_bitmap(alkalis);
			al_destroy_bitmap(alkalineearths);
			al_destroy_bitmap(transitions);
			al_destroy_bitmap(ptmetal);
			al_destroy_bitmap(metalloid);
			al_destroy_bitmap(nonmetal);
			al_destroy_bitmap(halogen);
			al_destroy_bitmap(nobles);
		}
		void periodictable();
		void alkali();
		void alkalineearth();
		void transition();
		void ptmetals();
		void metalloids();
		void nonmetals();
		void halogens();
		void noble();
		void lanthanides();
		void actinides();
		void horizontallines();
		void verticallines();
		void ghumauney();
};