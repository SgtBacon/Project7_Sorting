//Colleen Bell and Jay Helm
//Sources: Lecture slides, textbook, www.cplusplus.com/reference/
#include <iostream>
#include "MergeSort.h"
using namespace std;

void bubbleSort(int a[]);
void selectionSort(int a[]);


int main(){
    int arrayAscending[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};    //creates arrays of ten items for each of the 4 conditions (I know you said 100, 200, 500, 1000, and 2000, but that's ridiculously time-consuming and we'll see if I get to it.)
    int arrayReversed[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arrayRandom[10] = {2, 5, 8, 1, 9, 0, 3, 4, 7, 6};
    int arrayRandomDuplicates[10] = {9, 3, 5, 6, 5, 4, 3, 8, 1, 7};

    int arrayAscendingHundred[100] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};    //creates arrays of one hundred items for each of the 4 conditions, which was indeed ridiculously time-consuming and there's probably a better way I could have done that
    int arrayReversedHundred[100] = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arrayRandomHundred[100] = {10, 15, 27, 35, 64, 53, 61, 78, 83, 91, 0, 17, 21, 19, 14, 1, 16, 11, 18, 13, 20, 12, 22, 32, 29, 25, 26, 2, 28, 24, 30, 31, 23, 33, 36, 3, 43, 73, 38, 93, 40, 47, 42, 34, 44, 45, 4, 41, 84, 49, 50, 57, 52, 5, 58, 55, 65, 51, 54, 95, 60, 6, 68, 63, 46, 56, 66, 76, 62, 69, 70, 71, 75, 37, 74, 72, 67, 77, 7, 97, 80, 81, 82, 8, 48, 88, 86, 87, 85, 89, 90, 9, 92, 39, 94, 59, 96, 79, 98, 99};
    int arrayRandomDuplicatesHundred[100] = {10, 15, 27, 35, 64, 53, 61, 78, 83, 91, 0, 17, 21, 10, 14, 1, 27, 11, 18, 13, 15, 12, 22, 32, 10, 25, 27, 2, 28, 24, 30, 31, 10, 33, 27, 3, 43, 73, 15, 93, 40, 47, 42, 34, 44, 45, 4, 10, 84, 49, 15, 57, 52, 5, 58, 55, 27, 10, 54, 95, 60, 6, 68, 63, 46, 56, 66, 76, 62, 69, 70, 71, 75, 27, 74, 72, 67, 15, 7, 97, 80, 81, 15, 8, 48, 88, 27, 87, 85, 89, 90, 9, 92, 39, 94, 59, 96, 79, 98, 15};

    cout << "Results of Bubble Sort with 10 items:"<< endl;                   //pretty self-explanatory, couts results of bubble sort under the 4 conditions

    cout << "\tWith array presorted:"<< endl;
    bubbleSort(arrayAscending);

    cout << "\tWith array reversed:"<< endl;
    bubbleSort(arrayReversed);

    cout << "\tWith array randomized:"<< endl;
    bubbleSort(arrayRandom);

    cout << "\tWith array randomized with duplicates:"<< endl;
    bubbleSort(arrayRandomDuplicates);   

    cout << "Results of Selection Sort with 10 items:"<< endl;                //couts results of selection sort under the 4 conditions

    cout << "\tWith array presorted:"<< endl;
    selectionSort(arrayAscending);

    cout << "\tWith array reversed:"<< endl;
    selectionSort(arrayReversed);

    cout << "\tWith array randomized:"<< endl;
    selectionSort(arrayRandom);

    cout << "\tWith array randomized with duplicates:"<< endl;
    selectionSort(arrayRandomDuplicates); 

    cout << "Results of Bubble Sort with 100 items:"<< endl;                   //couts results of bubble sort under the 4 conditions with 100 items in array

    cout << "\tWith array presorted:"<< endl;
    bubbleSort(arrayAscendingHundred);

    cout << "\tWith array reversed:"<< endl;
    bubbleSort(arrayReversedHundred);

    cout << "\tWith array randomized:"<< endl;
    bubbleSort(arrayRandomHundred);

    cout << "\tWith array randomized with duplicates:"<< endl;
    bubbleSort(arrayRandomDuplicatesHundred);   

    cout << "Results of Selection Sort with 100 items:"<< endl;                //couts results of selection sort under the 4 conditions with 100 items in the array

    cout << "\tWith array presorted:"<< endl;
    selectionSort(arrayAscendingHundred);

    cout << "\tWith array reversed:"<< endl;
    selectionSort(arrayReversedHundred);

    cout << "\tWith array randomized:"<< endl;
    selectionSort(arrayRandomHundred);

    cout << "\tWith array randomized with duplicates:"<< endl;
    selectionSort(arrayRandomDuplicatesHundred); 

}

void bubbleSort(int a[]){

    bool exchange_flag;
    int comps = 0;
    int swaps = 0;

    do {
        exchange_flag = false;              //will indicate whether a swap was made
        for (int i = 0; i < a.size(); i++){ //for every object in the array
            int x = i + 1;                  //creates an index number for the item next to a[i]
            if (a[i] > a[x]){               //compares a[i] and a[x]
                // swap(a[i], a[x]);        (look, Scott, I second-thought a std:: cop-out)
                int temp = a[i];            //basic swap function
                a[i] = a[x];
                a[x] = temp;
    
                swaps++;                    //increments swaps in the swap "if"
                exchange_flag = true;       //sets the flag to true if an exchange was needed
            }
            comps++;                        //increments comps regardless of if it was true
        }
    } while (exchange_flag == true);        //repeat while exchanges were needed

    cout << "\t\tSorted Array:" << endl;

    for (int i = 0; i < a.size(); i++){     //prints contents of array
        cout << a[i] << endl;
    }

    cout << "\t\tComparisons Made:" << comps << endl;   //prints comps and swaps
    cout << "\t\tSwaps Made:" << swaps << endl;
}

void selectionSort(int a[]){
    int comps = 0;
    int swaps = 0;

    for (int i = 0; i < a.size(); i++){     //increments starting point
        int x = i + 1;                      //sets starting pont for the next loop (coulda done this in the loop condition but it looked messy)

        for (x; x < a.size(), x++){         //increments through remaining values in array
            if (a[x] < a[i]){               //checks if value is greater than current smallest
                int temp = a[i];            //basic swap function
                a[i] = a[x];
                a[x] = temp;

                swaps++;                    //increments swaps in the swap 'if'
            }
            comps++;                        //increments comps regardless
        }
    }

    cout << "\t\tSorted Array:" << endl;

    for (int i = 0; i < a.size(); i++){     //prints contents of array
        cout << a[i] << endl;
    }

    cout << "\t\tComparisons Made:" << comps << endl;   //prints comps and swaps
    cout << "\t\tSwaps Made:" << swaps << endl;
}