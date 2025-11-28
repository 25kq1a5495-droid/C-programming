#include<stdio.h>
//#include<stdlib.h>
void main()
{   
    register int mainvar;
    void printnum();
    mainvar=10;
    printnum();
    printf("\n in main is :%d",mainvar);
}
 void printnum()
 {
    register int mainvar;
    mainvar=10;
    printf("in mainvar:%d",mainvar);
 }
                                                                                                            










    