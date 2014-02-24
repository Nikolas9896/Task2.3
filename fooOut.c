#include<stdio.h>
#include"fooOut.h"

 int fooOut( struct Librery *pbook )

{
  int i;
  printf("Books in alfabetic numeretion\n");
    for( i = ZERO; i != KILK4; ++i )

    {

        printf("%d. %s %s\t\" %s \"\t %d \tcomment: %s \n", pbook -> lNum,\
                                                       pbook -> lAutSur,\
                                                       pbook -> lAutNam,\
                                                       pbook -> lBooNam,\
                                                       pbook -> lYear,\
                                                       pbook -> lComent);
            ++pbook;

    }
	return 1;
}
