
#include <stdio.h>
#include <iostream>
#include "Class.h"


int main()
{
    Class OneRandom;

	printf( "\nHello World\n\n" );
    

    OneRandom.List.push_back("one");
    OneRandom.List.push_back("two");
    OneRandom.List.push_back("three");

    OneRandom.display();

    std::sort(OneRandom.List.begin(), OneRandom.List.end(), OneRandom.MyComp);

    OneRandom.display();

    Class::List_t::iterator it = OneRandom.binarySearch(OneRandom.List.begin(),OneRandom.List.end(),"two");

    std::cout  <<"begin \t" << &OneRandom.List[0] <<"\n";
    std::cout  <<"end \t" << &OneRandom.List[3] <<"\n";

    std::cout << "result \n";

    std::cout <<  *it <<" found \n";

    it = OneRandom.binarySearch(OneRandom.List.begin(),OneRandom.List.end(),"glob");

    if(it != OneRandom.List.end() )
        std::cout << *it <<" found \n";
    else
        std::cout <<  "not found\n";






    return 0;
}

