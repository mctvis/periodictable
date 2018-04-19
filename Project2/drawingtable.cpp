#include "Header.h"
#include "drawing.h"

	void drawing::periodictable()
		{
			alkali();
			alkalineearth();
			transition();
			ptmetals();
			metalloids();
			nonmetals();
			halogens();
			noble();
			lanthanides();
			actinides();
			horizontallines();
			verticallines();
		}
	void drawing::alkali()
	{
		//alkalis = al_load_bitmap("images/alkali.jpg");
		char* alkali[] = {"H", "Li", "Na", "K","Rb", "Cs", "Fr"};
		for (i=1; i<=7; i++)
		{
			x1=a;
			y1=i*a;
			x2=2*a;
			y2=(i+1)*a;
			//al_draw_filled_rectangle(x1,y1,x2,y2,violet);
			al_draw_bitmap(alkalis,x1,y1,NULL);
			al_draw_text(font, white,(x1+x2)/2,(y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(alkali+counter));
			counter++;
		}
		counter= 0;
	}
	void drawing::alkalineearth()
	{
		b=60;
		char* alkalineearth[] = {"Be", "Mg", "Ca", "Sr","Ba", "Ra"};
		for (i=2; i<=7; i++)
		{
			x1=2*a;
			y1=i*b;
			x2=3*a;
			y2=(i+1)*b;
			//al_draw_filled_rectangle(x1,y1,x2,y2,indigo);
			al_draw_bitmap(alkalineearths,x1,y1,NULL);
			al_draw_text(font, white,(x1+x2)/2,(y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(alkalineearth+counter++));
		}
		counter = 0;
	}
	void drawing::transition()
	{
		char* transition[] = {"Sc", "Y", "La", "Ac",
									"Ti", "Ze", "Hf", "Rf",
									"V",  "Nb", "Ta", "Db",
									"Cr", "Mo", "W", "Sg",
									"Mn", "Te", "Re", "Bh",
									"Fe", "Ru", "Os", "Hs",
									"Co", "Rh", "Ir", "Mt",
									"Ni", "Pd", "Pt", "Ds",
									"Cu", "Ag", "Au", "Rg",
									"Zn", "Cd", "Hg", "Cn"};
		for (i=3; i<=12; i++)
		{
			for (j=4; j<=7; j++)
			{
				x1=i*a;
				y1=j*a;
				x2=(i+1)*a;
				y2=(j+1)*a;
				//al_draw_filled_rectangle(x1,y1,x2,y2,blue);
				al_draw_bitmap(transitions,x1,y1,NULL);
				al_draw_text(font, white,(x1+x2)/2,(y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(transition+counter++));
			}
		}
		counter = 0;
	}
	void drawing::ptmetals()
	{
		b=3;
		char* ptmetals[] = {"Al", "Ga", "In", "Tl","Uut", "Sn", "Pb","Fl", "Bi", "Uup", "Lv"};
		for (i=13; i<=16; i++)
		{
			if(i==14){b=5;}
			for (j=b;j<=7;j++)
			{
				x1=i*a;
				y1=j*a;
				x2=(i+1)*a;
				y2=(j+1)*a;
				//al_draw_filled_rectangle(x1,y1,x2,y2,green);
				al_draw_bitmap(ptmetal,x1,y1,NULL);
				al_draw_text(font, white,(x1+x2)/2,(y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(ptmetals+counter));
				counter++;
			}
			b++;
		}
		counter = 0;
	}
	void drawing::metalloids()
	{
		b=2, c=3;
		char* metalloids[] = {"B", "Si", "Ge", "As", "Sb" , "Te", "Po"};
		for (i=13; i<=16; i++)
		{
			for (j=b ; j<=c; j++) 
			{
				x1=i*a;
				y1=j*a;
				x2=(i+1)*a;
				y2=(j+1)*a;
				//al_draw_filled_rectangle(x1,y1,x2,y2,yellow);
				al_draw_bitmap(metalloid,x1,y1,NULL);
				al_draw_text(font, white,(x1+x2)/2,(y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(metalloids+counter));
				if (i==13){j++;}
				counter++;
			}
			b++;
			c++;
		}
		counter = 0;
	}
	void drawing::nonmetals()
	{
		c=2;
		char* nonmetals[] = {"C", "N", "P", "O","S", "Se"};
		for (i=14; i<=16; i++)
		{
			for (j=2 ; j<=c; j++) 
			{
				x1=i*a;
				y1=j*a;
				x2=(i+1)*a;
				y2=(j+1)*a;
				//al_draw_filled_rectangle(x1,y1,x2,y2,orange);
				al_draw_bitmap(nonmetal,x1,y1,NULL);
				al_draw_text(font, white,(x1+x2)/2,(y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(nonmetals+counter));
				counter++;
			}
			c++;
		}
		counter = 0;
	}
	void drawing::halogens()
	{
		char* halogens[] = {"F", "Cl", "Br", "I","At", "Uus"};
		for (i=2; i<=7; i++)
		{
			x1=17*a;
			y1=i*a;
			x2=18*a;
			y2=(i+1)*a;
			//al_draw_filled_rectangle(x1,y1,x2,y2,red);
			al_draw_bitmap(halogen,x1,y1,NULL);
			al_draw_text(font, white,(x1+x2)/2,(y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(halogens+counter));
			counter++;
		}
		counter = 0;
	}
	void drawing::noble()
	{
		char* noble[] = {"He", "Ne", "Ar", "Kr","Xe", "Rn", "Uuo"};
		for (i=1; i<=7; i++)
		{
			x1=18*a;
			y1=i*a;
			x2=19*a;
			y2=(i+1)*a;
			//al_draw_filled_rectangle(x1,y1,x2,y2,coldgrey);
			al_draw_bitmap(nobles,x1,y1,NULL);
			al_draw_text(font, white,(x1+x2)/2,(y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(noble+counter));
			counter++;
		}
		counter = 0;
	}
	void drawing::horizontallines()
	{
		for(i=1;i<=8;i++)
		{
			b=i*60;
			d=b;
			if(i==1){c=120;}
			else if(i==2 || i==3){c=180;}
			else {c=1140;}
			al_draw_line(a,b,c,d,white,thickness);
		}
		al_draw_line(18*a,1*a,19*a,1*a,white,thickness);
		al_draw_line(13*a,2*a,19*a,2*a,white,thickness);
		al_draw_line(13*a,3*a,19*a,3*a,white,thickness);
		al_draw_line(3*a,9*a,17*a,9*a,white,thickness);
		al_draw_line(3*a,10*a,17*a,10*a,white,thickness);
		al_draw_line(3*a,11*a,17*a,11*a,white,thickness);
			
	}
	void drawing::verticallines()
	{
		b=1*60;
		for(i=1;i<20;i++)
		{
			if(i==3){b=b+60;}
			if(i==4){b=b+120;}
			if(i==13){b=b-120;}
			if(i==18){b=b-60;}
			al_draw_line(i*a,b,i*a,8*a,white,thickness);
		}
		for (j=3; j<=17; j++)
		{
			al_draw_line(j*a,9*a, j*a, 11*a,white, thickness);
		}
			
	}
	void drawing::lanthanides( )
	{
		char *lanthanides[] = {"Ce", "Pr", "Nd", "Pm","Sm", "Eu", "Gd",
			"Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu"};
			for (int j=3; j<17; j++)
			{
				x1 = j*a;
				x2 = (j+1)*a;
				y1 = 9*a;
				y2 = 10*a;
				//al_draw_filled_rectangle(x1,y1,x2,y2,blue);
				al_draw_bitmap(lanthi,x1,y1,NULL);
				al_draw_text(font, white, (x1+x2)/2, (y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(lanthanides+counter++));
			}
			counter = 0;
	}
	void drawing::actinides( )
	{
		char *lanthanides[] = {"Th", "Pa", "U", "Np","Pu", "Am", "Cm",
			"Bk", "Cf", "Es", "Fm", "Md", "No", "Lr"};
			for (int j=3; j<17; j++)
			{
				x1 = j*a;
				x2 = (j+1)*a;
				y1 = 10*a;
				y2 = 11*a;
				//al_draw_filled_rectangle(x1,y1,x2,y2,blue);
				al_draw_bitmap(acti,x1,y1,NULL);
				al_draw_text(font, white, (x1+x2)/2, (y1+y2)/2,ALLEGRO_ALIGN_CENTER, *(lanthanides+counter++));
			}
			counter = 0;
	}
	/*void drawing::ghumauney()
	{
		al_draw_rectangle(6*60,1*60,7*60,3*60,blue,thickness);
	}*/