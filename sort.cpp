#include "sort.h"
#include <iostream>
#include <string>
#include <fstream>


void sort::load() {
    string line;
    int n = 0;

    ifstream myfile;
    myfile.open("top_passwords.txt");

    while (myfile.good()) {
        getline(myfile, line);
        passwords[n] = line;
        n++;
    }
    myfile.close();
}

void sort::insertionSort() {
    string key;
    int j = 0;

    for (int i = 0; i<100; i++) {
        key = passwords[i];
        j = i-1;

        while(j>=0 && passwords[j]>key) {
            passwords[j+1] = passwords[j];
            j=j-1;
        }
        passwords[j+1] = key;
    }
}

void sort::display() {
    for (int a = 0; a<100; a++) {
        cout << passwords[a] <<endl;
    }
}
