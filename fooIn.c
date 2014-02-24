#include<stdio.h>
#include"fooIn.h"

 int fooIn( struct Librery *pbook )

{
    int i;
    for( i = ZERO; i != KILK4; ++i )
	
	{
      //Number
        pbook->lNum = i + ONE;


     //Autor
        printf("Please, enter autor name and surname for %d book :\n", pbook -> lNum );
        scanf( "%s %s", pbook -> lAutNam, pbook -> lAutSur );
        scanf( "%*c" );


     //Book
      printf( "Enter book which wrote %s %s :",  pbook -> lAutNam, pbook -> lAutSur  );
      scanf("%[^\n]", pbook -> lBooNam );
      scanf( "%*c" );
      printf("%s\n", pbook -> lBooNam );


     //Year of creation
      printf("Enter year creation of book : \n");
      scanf("%d", &(*pbook).lYear);
      scanf( "%*c" );
      printf("Year: %d\n", pbook -> lYear);

     //Comment about book
      printf("Enter your coment : \n");
      scanf( "%[^\n]", pbook -> lComent );
      scanf( "%*c" );
      printf( "%s\n", pbook -> lComent );

      //next one
     ++pbook;
	}
 return i;
}
