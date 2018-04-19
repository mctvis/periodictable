#include "Header.h"
#include "clickhover.h"
#include "drawing.h"
int main()
{
	al_init();
	int x, y, mousebutton=0, t=0;
	al_init_primitives_addon();
	al_init_font_addon();
	al_init_ttf_addon();
	al_install_mouse();
	al_init_image_addon();

	al_set_new_display_flags(ALLEGRO_WINDOWED);
	ALLEGRO_DISPLAY *display = al_create_display(swidth,sheight);
	al_set_window_title(display, "The Interactive Modern Periodic Table");
	ALLEGRO_TIMER *timer = al_create_timer(1.0/FPS);
	ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_mouse_event_source());
	ALLEGRO_BITMAP *background = al_load_bitmap("images/back6.jpg");
	al_draw_bitmap(background,0,0,NULL);
	bool closed = false;
	/*al_set_window_title(display, "EEROOR");
	al_show_native_message_box(display, "Error" ,
		"Display Settings" ,
		"Could not create Allegro Window",
		"OKKAY",1);
	*/
	
	ALLEGRO_FONT *font2= al_load_font("Fonts/Roboto-Bold.ttf", 15, NULL);
	ALLEGRO_FONT *font3= al_load_font("Fonts/Roboto-Bold.ttf", 11, NULL);
	ALLEGRO_FONT *font4= al_load_font("Fonts/Roboto-Bold.ttf", 13, NULL);
	al_draw_text(font2, white,815,20,NULL, "INTERACTIVE MODERN PERIODIC TABLE V 1.0");
	al_draw_text(font4, white,10,610,NULL, "APP DESIGNED BY:");
	al_draw_text(font3, white,10,630,NULL, "AFeastOfFriends");
	al_draw_text(font3, white,10,650,NULL, "Kathmandu University");
	//al_flip_display();
	drawing d1;
	clickhover c1;
	while(!closed)
	{
		al_register_event_source(event_queue, al_get_mouse_event_source());
		al_set_target_backbuffer(display);
		d1.periodictable();
		al_flip_display();
		ALLEGRO_EVENT events;
		al_wait_for_event(event_queue, &events);
		if(events.type == ALLEGRO_EVENT_MOUSE_AXES || events.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
		{
			mousebutton=0;
			x = events.mouse.x;
			y = events.mouse.y;
			if(events.mouse.button &1) {mousebutton =1; al_unregister_event_source(event_queue, al_get_mouse_event_source());}
			c1.hoverclick(x,y,mousebutton);
			mousebutton = 0;
		}
		else if(events.type== ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			closed = true;
		}

	}
	//al_destroy_display(periodic);
	//al_destroy_bitmap(background);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	al_destroy_font(font2);
	return 0;
}