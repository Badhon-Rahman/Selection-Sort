#include <iostream>

using namespace std;

int main()
{
    int sortingArray[100], ArraySize;

    cout << "Enter the size of array:";
    cin >> ArraySize;
    cout << "Enter " << ArraySize << " array element:";
    for(int i = 0; i < ArraySize; i++){
        cin >>  sortingArray[i];
    }

    for(int i = 0; i < ArraySize-1; i++){
        for(int j = i+1; j < ArraySize; j++){
            if(sortingArray[i] > sortingArray[j]){
                int temp = sortingArray[i];
                sortingArray[i] = sortingArray[j];
                sortingArray[j] = temp;
            }
        }
    }
    cout << "After sorting the array in assending order:" ;
    for(int i = 0; i < ArraySize; i++){
        cout << sortingArray[i] << " ";
    }
    return 0;
}
