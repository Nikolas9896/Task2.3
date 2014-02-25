#ifndef STRUCTLIBRERYh
#define STRUCTLIBRERYh 1

#define AUT_SYMB 15
#define BOO_SYMB 30
#define COMIT 300
#define KILK4 4
#define POLIV 6
#define ENTER '\n'
#define ZERO '\0'
#define ONE 1
#define OLD 1970
#define FUTUR 2015

struct Librery

    {

     unsigned int lNum;
     char lAutSur [ AUT_SYMB ];
     char lAutNam [ AUT_SYMB ];
     char lBooNam [ BOO_SYMB ];
     unsigned  int lYear;
     char lComent [ COMIT ];

	};
#endif
