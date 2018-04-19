#include "Header.h"
#include "clickhover.h"

void clickhover::file3(string grotating)
{
	counter = 0;
	ifstream files;
	files.open(grotating.c_str());
	if(files.is_open())
	{
		while(!files.eof())
		{
			files>>lineint[counter++];
		}
	}
	files.close();
}