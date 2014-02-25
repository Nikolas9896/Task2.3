#include<stdio.h>
#include"fooOut.h"

 int fooOut( struct Librery *pbook )

{
unsigned  int i;
  printf( "\n\n\n\n\nBooks in alfabetic numeretion by autor surname: \n" );


    for( i = ZERO; i != KILK4; ++i )

    {
        if(pbook -> lYear > OLD && (pbook ->lYear < FUTUR))
        {
        pbook -> lNum = i + ONE;
        printf("%d. %s %s\t\" %s \"\t %d \tcomment: %s \n", pbook -> lNum,\
                                                            pbook -> lAutSur,\
                                                            pbook -> lAutNam,\
                                                            pbook -> lBooNam,\
                                                            pbook -> lYear,\
                                                            pbook -> lComent);
        }

            ++pbook;

    }
	return 1;
}
