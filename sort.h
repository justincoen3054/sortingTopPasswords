#ifndef SORT_H
#define SORT_H
#include <string>

using namespace std;

class sort
{
    private:
        string passwords[100];
    public:
        void load();
        void insertionSort();
        void display();

};

#endif // SORT_H
