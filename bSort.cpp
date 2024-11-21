#include <iostream>

void sort(int array[],int size);

int main()
{
    using namespace std;
    int array[] = {10,9,2,8,3,7,4,6,5,1};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    for(int ele : array){
        cout << ele << " ";
    }
    return 0;
}

void sort(int array[],int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j]>array[j+1]){
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }   
}