#include <iostream>
#include <string>
#include <fstream>
#include "sort.h"

using namespace std;


int main()
{
    sort s;
    s.load();
    s.insertionSort();
    s.display();
    return 0;
}
