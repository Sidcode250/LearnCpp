#include <iostream>

int main()
{
    using namespace std;

    string arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    string temp;

    for(int i = 0; i < size; i++){
        cout << "Enter num or q to quit: #" << i;
        getline(cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            arr[i] = temp;
        }
    }
    for(int j = 0; j < size; j++){
        cout << arr[j] << " ";
    }
    return 0;
}