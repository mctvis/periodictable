#include "Header.h"
#include "clickhover.h"


void clickhover::ghumauney(int lineint[7], double theeeta, int counter)
{
	int r[7] = {30,50,70,90,110,130,150};
	x=0, y=0, x1=0, y1=0,d=0;
	theta=0, theeta =0;
	//al_set_new_display_flags(ALLEGRO_WINDOWED);
	//ALLEGRO_DISPLAY *display=(al_create_display(800,600));
	//ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
	//ALLEGRO_TIMER *timer = al_create_timer(1.0/60.0);
	//al_register_event_source(event_queue, al_get_display_event_source(display));
	//al_register_event_source(event_queue, al_get_timer_event_source(timer));
	//ALLEGRO_BITMAP *image=al_load_bitmap("images/back.jpg");
	//al_draw_bitmap(image,0,0,NULL);
	//bool done = false, finished = false;
	//al_draw_bitmap(pro2,cx-10,cy-10,NULL);
	//al_start_timer(timer);
	/*while(!finished)
	{
		ALLEGRO_EVENT event;
		al_wait_for_event(event_queue, &event);
		if(event.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			finished = true;
		}
		else if(event.type == ALLEGRO_EVENT_TIMER)
		{*/
			for (int k = 0; k<counter; k++)
			{
				theeta = theeeta;
				theta = (2*3.1415)/lineint[k];
				for (int i = 1; i<=lineint[k]; i++)
				{
						x=r[k]*cos(theeta) + cx; //400 ,300is center,,100 is radius
						y=r[k]*sin(theeta) + cy;
						al_draw_circle(cx,cy,r[k],violet,1);
						//al_draw_bitmap(pro2,cx-10,cy-10,NULL);
						al_draw_filled_circle(x,y,5,red);
					    al_draw_filled_circle(cx,cy,10,blue);
						//al_draw_bitmap(elec,x-5,y-5,NULL);
						theeta = theta + theeta;
				}
			}
		//}
	//}
	//al_destroy_display(display);
	//al_destroy_event_queue(event_queue);
	//al_destroy_bitmap(image);
}

