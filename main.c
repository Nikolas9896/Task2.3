//#include<stdio.h>
//#include<string.h>
#include"structLibrery.h"
#include"fooIn.h"
#include"fooSort.h"
#include"fooOut.h"

 int main()

{

//#include"fooIn.h"
#include"structLibrery.c"
fooIn ( pbook );
fooSort( pbook );
fooOut( pbook );

return 0;
}

