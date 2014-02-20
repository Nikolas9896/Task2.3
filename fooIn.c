#include<stdio.h>
#include"fooIn.h"

 int fooIn( struct Librery *pbook )

{
 int i;
 char tChar1; 
 const char enter = '\n';
 const char empty0 = '\0';
	int jahhha = 0;
 const int zero = 0;	

	for( i = 0; i != KILK; ++i )
	
	{
	 //Autor
		printf("Please Enter Autor :");

		while ( tChar1 != enter && i !=KILK )
		
		{
		 tChar1 = getchar( );
		 pbook -> lAutor[ jahhha ] = tChar1;
		 ++jahhha;
		
		}
	 	
	
	 pbook -> lAutor[ jahhha ] = empty0;
	 printf("Your autor %i is : %s", i, pbook -> lAutor);
	 //tChar1 = getchar();
	/* printf("CHAR BUG = %c",tChar1);
 
	 // Year 
	 printf("Please enter YEAR created of book : ");

	 scanf("%d", &(*pbook).lYear);
	 printf("Year: %d\n", pbook -> lYear);*/
	 ++pbook;
	 jahhha = zero;
	//tChar1 = 32;
//getline() get.char putgets gets;
	}
 return i;

}
