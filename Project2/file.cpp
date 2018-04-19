#include "Header.h"
#include "clickhover.h"
string clickhover :: file(int k,int t)
{
	string filename;
	stringstream folderno;
	stringstream fileno;
	string c = "Folders";
	folderno << k;
	fileno << t;
	filename = c+"/"+folderno.str() + "/" + fileno.str();
	filename += ".txt";
	return filename;
}