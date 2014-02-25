#include<stdio.h>
#include"fooIn.h"

 int fooIn( struct Librery *pbook )

{
  unsigned  int i;

    for( i = ZERO; i != KILK4; ++i )
	
	{

     //Autor
        printf("Please, enter autor name and surname :\n" );
        scanf( "%s %s", pbook -> lAutNam, pbook -> lAutSur );
        scanf( "%*c" );


     //Book
      printf( "Enter book which wrote %s %s :\n",  pbook -> lAutNam, pbook -> lAutSur  );
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
