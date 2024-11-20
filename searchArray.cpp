#include <iostream>

int fin(int numbers[], int size, int key);

int main()
{
    using namespace std;
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int key;
    cout<<"Which number to search:";
    cin >> key;
    int index = fin(numbers,size,key);
    if(index == -1){
        cout << "Not found" << endl;
    }
    else{
        cout << index;
    }
    return 0;
}

int fin(int numbers[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(numbers[i] == key){
            return i;}
    }
    return -1;
}