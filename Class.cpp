#include <stdio.h>
#include <iostream>
#include "Class.h"


Class::Class()
{

}

Class::~Class()
{

}

void Class::display()
{
    for(List_t::iterator it = List.begin(); it!=List.end(); it++)
    {
        std::cout << *it <<":";
    }

    std::cout << '\n';

}

Class::List_t::iterator  Class::binarySearch(Class::List_t::iterator start,
                                             Class::List_t::iterator end,
                                             const char * searched)
{
    Class::List_t::iterator mid;
    Class::List_t::iterator returnIterator;
    bool triggerFound = false;

    returnIterator = end;

    while ((std::distance(start,end) > 0) && (triggerFound == false))
    {
        mid = start +  ((end - start) / 2);

        // searched string is bigger (or after in the lexical order)
        // than the one in mid value
        if(std::strcmp(searched, *mid) > 0)
        {
           start = mid+1;
        }
        // searched string is lower (or before in the lexical order)
        // than the one in mid value
        else if (std::strcmp(searched, *mid) < 0)
        {
            end = mid;
        }
        else
        {
            triggerFound = true;
            returnIterator = mid;
        }
    }

    return returnIterator;
}

