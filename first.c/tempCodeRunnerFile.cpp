#include<iostream>
using namespace std;

int main()
{
    int n = 40;
    int arr [5] = {10,15,20,25,30};
    int key = 0;

for (int i=0; i < 5; i++ )
{
    if (arr[i] == n)
    {
        cout<<"Element:", i++;
        key = 1;
    }
}

if (key == 1)
cout<< "value is found\n";
else
cout<< "value is not found\n";

return 0;
}