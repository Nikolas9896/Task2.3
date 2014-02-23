#include <stdio.h>
#include "getline.h"

void getLine (char *pBoo)
{

 char ch = ZERO;

 while( ch != ENTER )

 	{
	
	ch = getchar();
    *pBoo = ch;
    ++pBoo;

 	}

 *pBoo = ZERO;
}
