
#include <stdio.h>
#include <iostream>
#include "Class.h"


int main()
{
    Class OneRandom;


    OneRandom.List.push_back(std::make_pair("1_test", 1));
    OneRandom.List.push_back(std::make_pair("100_test", 2));
    OneRandom.List.push_back(std::make_pair("350_test", 3));

    OneRandom.display();

    std::sort(OneRandom.List.begin(), OneRandom.List.end(), OneRandom.MyComp);

    OneRandom.display();

    Class::List_t::iterator it = OneRandom.binarySearch(OneRandom.List.begin(),OneRandom.List.end(),"two");

    std::cout << "result \n";

    std::cout <<  it->first <<" found \n";

    it = OneRandom.binarySearch(OneRandom.List.begin(),OneRandom.List.end(),"glob");

    if(it != OneRandom.List.end() )
        std::cout << it->first <<" found \n";
    else
        std::cout <<  "not found\n";


    return 0;
}

