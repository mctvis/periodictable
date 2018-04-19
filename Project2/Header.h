#include<iostream>
#include<fstream>
#include<sstream>
#include<string.h>
#include<allegro5\allegro.h>
#include<allegro5\allegro_native_dialog.h>
#include<allegro5\allegro_ttf.h>
#include<allegro5\allegro_font.h>
#include<allegro5\allegro_primitives.h>
#include<allegro5\display.h>
#include<allegro5\allegro_image.h>
using namespace std;
#define cx 350.0
#define cy 300.0
#define FPS 40
#define sheight 680
#define swidth 1200
#define thickness 2
#define violet al_map_rgb(238,130,238)
#define darkviolet al_map_rgb(148,125,211)
#define indigo al_map_rgb(75,0,130)
#define blue al_map_rgb(0,0,255)
#define green al_map_rgb(0,128,0)
#define yellow al_map_rgb(205,205,0)
#define orange al_map_rgb(255,128,0)
#define red al_map_rgb(255,0,0)
#define coldgrey al_map_rgb(128,138,135)
#define white al_map_rgb(255,255,255)
#define black al_map_rgb(0,0,0)
#define navy al_map_rgb(0,0,128)