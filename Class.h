
#include <vector>
#include <algorithm>
#include <cstring>

class Class
{
public:
    Class();

    ~Class();

    typedef std::vector<const char *> List_t;
    List_t List;

    void display();

    struct comparator
    {
        bool operator() (const char * a, const char * b)
        {
            return std::strcmp(a,b) < 0;
        }
    }MyComp;

    List_t::iterator  binarySearch(List_t::iterator first,
                                          List_t::iterator end, 
                                          const char * searchString);
};

