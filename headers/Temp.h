//In temp we tried to do a merge sort. It did not work.
// #include <iostream>
// #include <iterator>
// #include <algorithm>
// #include <array>
// using std::array;

//     int SwapCount = 0;
//     int ComparisonCount = 0;

// int FindPivot(array<int, 10> myarray, int LowValue, int HighValue){
//     int i = LowValue;
//     int j = HighValue;
//     int temp;    
//     int pivot = myarray[(LowValue + HighValue)/2];
//     while (i <= j){
//         while(myarray[i] < pivot){
//             i++;
//         }
//         while(myarray[i] > pivot){
//             j--;
//         }
//         if ( i <= j) {
//             temp = myarray[i];
//             myarray[i] = myarray[j];
//             myarray[j] = temp;
//             i++;
//             j++;
//         }
//     }
//     std::swap(myarray[LowValue], myarray[i-1]);
//     SwapCount++;
//     std::cout << "Current Swap count: " << SwapCount << std::endl;
//     return i-1;

// }

// void PrintArray(int newarray[]){
//     int i=0;                    //Did this because a for loop would not work
//     do{
//         std::cout << newarray[i] << std:: endl; // so instead of using a for loop to iterate through, I use a do-while loop that
//         i++;                                 //prints out the current index of the array before iterating, up until the array at index i is NULL
//     } while(i != 10);
// }
// void QuickSort(int myarray[], int LowValue, int HighValue){
//     if (LowValue < HighValue){
//         int pivot = FindPivot(myarray, LowValue, HighValue);
//         QuickSort(myarray, LowValue, pivot);          //Call this function for the all values within the array between the low value and the pivot value, including the pivot
//         QuickSort(myarray, pivot+1, HighValue);       //Call this function for all values within the array between the value after the pivot, to the last value, not including the pivot
//     }
//     PrintArray(myarray);
//     std::cout << SwapCount;
//     std::cout << ComparisonCount;

//     int i = LowValue;
//     int j = HighValue;
//     int temp;    
//     int pivot = (LowValue + HighValue)/2;
//     while (i <= j){
//         while(myarray[i] < pivot){
//             i++;
//         }
//         while(myarray[i] > pivot){
//             j--;
//         }
//         if ( i <= j) {
//             temp = myarray[i];
//             myarray[i] = myarray[j];
//             myarray[j] = temp;
//             i++;
//             j++;
//         }
//     }
//     if (LowValue < j){
//         QuickSort(myarray, LowValue, j);
//     }
//     if(i < HighValue){
//         QuickSort(myarray, i, HighValue);
//     }
//     PrintArray(myarray);
// };