#include <iostream>
#include <iterator>
#include <algorithm>
#include <array>
using std::array;


array<int, 10> MyArray = {100, 92, 20, 1, 0, 47, 47, 74, 75, 76};

int FindPivot(int array[], int LowValue, int HighValue){
    LowValue = array[0];    //Set The lower bound equal to the first element within the array
    int i = LowValue+1;
    int pivot = array[LowValue];
    for(int j = LowValue+1;j<= HighValue;j++){
        if(array[j] < pivot){
            std::swap(array[i], array[j]);
            i += 1;
        }
    }
    std::swap(array[LowValue], array[i-1]);
    return i-1;

}

void PrintArray(const int (&array)[]){
    int i=0;                    //Did this because a for loop would not work
    i=array[0];
    do{
        std::cout << array[i] << std:: endl; // so instead of using a for loop to iterate through, I use a do-while loop that
        i++;                                 //prints out the current index of the array before iterating, up until the array at index i is NULL
    } while(array[i] != NULL);

}
void QuickSort(int array[], int LowValue, int HighValue){
    if (LowValue < HighValue){
        int pivot = FindPivot(array, LowValue, HighValue);
        QuickSort(array, LowValue, pivot);          //Call this function for the all values within the array between the low value and the pivot value, including the pivot
        QuickSort(array, pivot+1, HighValue);       //Call this function for all values within the array between the value after the pivot, to the last value, not including the pivot
    }
};