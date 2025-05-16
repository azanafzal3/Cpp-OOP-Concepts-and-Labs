#include <iostream>
using namespace std;

void printRow(char ch, int count) {
    
    if (count <= 0) {
        cout << endl;
        return;
    }

  
    cout << ch << " ";
    printRow(ch+1, count-1);
}

void printPattern(int rows, int val, int count) {
    
    if (rows <= 0) {
        return;
    }

    
    printRow('A'+val-1, count);
    printPattern(rows-1, val+count, count+1);
}

void Pattern2(int rows, int val, int count) {
    printPattern(rows, val, count);
}

int main() {
    Pattern2(5, 1, 1);
    return 0;
}


   
