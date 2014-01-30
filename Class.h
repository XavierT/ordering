
#include <vector>
#include <algorithm>
#include <cstring>

class Class
{
public:
    Class();

    ~Class();

    typedef std::pair<const char *, int> Pair_t;
    typedef std::vector<Pair_t> List_t;
    List_t List;

    void display();

    struct comparator
    {
        bool operator() (Pair_t a, Pair_t  b)
        {
            return std::strcmp(a.first,b.first) < 0;
        }
    }MyComp;

    List_t::iterator  binarySearch(List_t::iterator first,
                                  List_t::iterator end, 
                                  const char * searchString);
};

