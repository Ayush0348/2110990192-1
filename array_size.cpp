#include<iostream>
using namespace std;
int main(){
    int nums[5]={10,20,30,40,50};
    cout << sizeof(nums) << endl; //in bytes

    cout << sizeof(nums)/sizeof(int); //original size

return 0;
}