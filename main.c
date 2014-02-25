#include <string.h>
#include"structLibrery.h"
#include"fooIn.h"
#include"fooOut.h"

 int main()

{


#include"structLibrery.c"
fooIn ( pbook );

  int n, m, code;
    struct Librery temp;
    int tempNum;

    for( n = ONE; n != KILK4; ++n )
    {
            for (m = ZERO; m != KILK4 - n; ++m )
            {

              code = strcmp( book[ m + ONE ].lAutSur, book[ m ].lAutSur );


                     if( code < ZERO )

                     {

                                temp = book[ m + ONE ] ;
                                book[ m + ONE ] = book[ m ];
                                book[ m ] = temp;


                    }


            }

      }

fooOut( pbook );

return ZERO;
}

