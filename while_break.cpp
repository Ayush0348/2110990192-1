#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i < 10)
    {
        cout << i << endl;
        i++;
        if (i == 5)
        {
            break;
        }
        
    }
    return 0; 
}