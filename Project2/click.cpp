#include "Header.h"
#include "clickhover.h"


void clickhover::click(int k, int t)
	{
		int countthe=0;
		done = false;
		theeeta=0;
	  

		display1 = al_create_display(800,600);
	
		al_set_window_title(display1, "Detail");
		eventclick = al_create_event_queue();
		timer = al_create_timer(1.0/40.0);
		//ALLEGRO_TIMER *timer = al_create_timer(1.0/15.0);
		//al_register_event_source(eventclick, al_get_timer_event_source(timer));
		//al_register_event_source(eventclick, al_get_mouse_event_source());
		al_register_event_source(eventclick, al_get_display_event_source(display1));
		al_register_event_source(eventclick, al_get_timer_event_source(timer));
		al_register_event_source(eventclick, al_get_mouse_event_source());
		//int *line = file2(k, t+10);
		mouse = 0;
		tabs();
		description = file(k,t);
		rotating = file(k, t+20);
		econfig = rotating;
		file1(description);
		al_flip_display();
		file3(rotating);	
		while (!done)
		{
			al_wait_for_event(eventclick, &event);
			if(event.type ==  ALLEGRO_EVENT_DISPLAY_CLOSE)
			{
				done = true;
				al_destroy_display(display1);
				al_destroy_timer(timer);
				al_destroy_event_queue(eventclick);
			}
			else if(event.type == ALLEGRO_EVENT_MOUSE_AXES || event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN )
			{
				xpos = event.mouse.x;
				ypos = event.mouse.y;
				if(((xpos>0 && xpos<268) && (ypos>0 && ypos<40)) && event.mouse.button &1)
				{
					al_stop_timer(timer);
					mouse = 0;
					al_clear_to_color(black);
					tabs();
					file1(description);
					al_flip_display();
				}
				else if((((xpos>268 && xpos<536) && (ypos>0 && ypos<40)) && event.mouse.button &1))
				{
					mouse = 1;
					al_start_timer(timer);
				}
				else if(((xpos>536 && xpos<800) && (ypos>0 && ypos<40)) && event.mouse.button &1)
				{
					al_stop_timer(timer);
					mouse = 0;
					al_clear_to_color(black);
					tabs();
					afbau(econfig);
					al_flip_display();
				}
			}
			else if(event.type == ALLEGRO_EVENT_TIMER && mouse == 1)
			{
				theeeta = theeeta + 0.02;
				al_clear_to_color(black);
				tabs();
				ghumauney(lineint, theeeta, counter);
				al_flip_display();
			}
				//file1(description);
				//ghumauney(lineint, theeeta, counter);
				//al_flip_display();
				//al_clear_to_color(al_map_rgb(0,0,0));
		}
		
	}