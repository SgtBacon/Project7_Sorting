#include <iostream>
using namespace std;

void PrintArray(int *array) {
    int num = 100;
    // int num = 200;
    // int num = 500;
    // int num = 1000;
    // int num = 2000;
  for (int i = 0; i < num; ++i)
    cout << array[i] << " " << endl;
}
void Merge(int array[], int LowValue, int MidValue, int HighValue){
    int comps = 0;
    int swaps = 0;

    int *tempArray = new int[HighValue-LowValue+1];

    int i = LowValue;
    int j = MidValue+1;
    int m =0;

    while(i <= MidValue && j <= HighValue){
        if(array[i] <= array[j]){
            tempArray[m++] = array[i++];
            swaps++;
            comps++;
        }
        else{
            tempArray[m++] = array[j++];
            swaps++;
            comps++;
        }
    }

    while(i <= MidValue){
        comps++;
        swaps++;
        tempArray[m++] = array[i++];
    }

    while(j <= HighValue){
        comps++;
        swaps++;
        tempArray[m++] = array[j++];
    }

    do{
        m = 0;                          //Too many arguments for a for loop
        i = LowValue;                   //Instead use a do-while loop to swap every element 
        
        array[i] = tempArray[m];        //starting at the lowest element in the array, swap it with TempArray's version of the array
        i++;                            //Increment both i and m so progress is made in both arrays
        m++;
    }while(i <= HighValue);             //do all of this while i is not equal to HighValue
}

void MergeSort(int array[], int LowValue, int HighValue){       //Merge Sort must take 3 parameters, the array itself, the lowest value within, and the highest value within
    int MidValue = 0;                                           //Create a new int that represents the Middle Value     
    if(LowValue < HighValue){                                   //Only works if LowValue is less than HighValue, because an array of 1 size is technically sorted and does not need to be sorted again
        MidValue = (LowValue+HighValue)/2;      //Crap way to find an approximate midpoint but it fits
        MergeSort(array, LowValue, MidValue);                   //Check all values to the left of the MidValue, including MidValue
        MergeSort(array, MidValue+1, HighValue);                //Check all values to the right of the MidValue, excluding MidValue
        Merge(array, LowValue, MidValue, HighValue);            //Finally, merge all values from the right and left side, collapsing the recursive loop
    }
}