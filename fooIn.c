#include<stdio.h>
//#include<string.h>
#include"fooIn.h"
//#include"getline.h"
 int fooIn( struct Librery *pbook )

{
 int i;
 char tChar1[ BOO_SYMB ];
 char *pBoo;
 const char enter = '\n';
 const char empty0 = '\0';

	for( i = 0; i != KILK; ++i )
	
	{
	 //Autor
        printf("Please, enter autor name and surname :\n");
        scanf( "%s %s", pbook -> lAutNam, pbook -> lAutSur );
        scanf( "%*c" );
        printf( "Enter book which wrote %s %s :",  pbook -> lAutNam, pbook -> lAutSur  );
        //scanf( "%s", pbook -> lBooNam );
       // scanf("%['/n']",pbook -> lBooNam);

     //Book
     //*pBoo = pbook->lBooNam;
      scanf("%[^\n]", pbook -> lBooNam);
      scanf( "%*c" );
      printf("%s\n", pbook -> lBooNam );


     // Year
      printf("Enter year created of book : \n");
      scanf("%d", &(*pbook).lYear);
      scanf( "%*c" );
      printf("Year: %d\n", pbook -> lYear);

     //Commit
   // *pBoo = pbook -> lComment;
    // printf("Write your comment about the book: \n");
   //  gets(tChar1);
     ++pbook;
     //tChar1 = 32;
//getline() get.char putgets gets;
	}
 return i;

}
