//Colleen Bell and Jay Helm
//Sources: Lecture slides, textbook, www.cplusplus.com/reference/
#include <iostream>
using namespace std;

void bubbleSort(int a[]);
void selectionSort(int a[]);


int main(){
    int arrayAscending[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};    //creates arrays of ten items for each of the 4 conditions (I know you said 100, 200, 500, 1000, and 2000, but that's ridiculous and we'll see if I get to it.)
    int arrayReversed[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arrayRandom[10] = {2, 5, 8, 1, 9, 0, 3, 4, 7, 6};
    int arrayRandomDuplicates[10] = {9, 3, 5, 6, 5, 4, 3, 8, 1, 7};

    cout << "Results of Bubble Sort:"<< endl;                   //pretty self-explanatory, couts results of bubble sort under the 4 conditions

    cout << "\tWith array presorted:"<< endl;
    bubbleSort(arrayAscending);

    cout << "\tWith array reversed:"<< endl;
    bubbleSort(arrayReversed);

    cout << "\tWith array randomized:"<< endl;
    bubbleSort(arrayRandom);

    cout << "\tWith array randomized with duplicates:"<< endl;
    bubbleSort(arrayRandomDuplicates);   

    cout << "Results of Selection Sort:"<< endl;                //couts results of selection sort under the 4 conditions

    cout << "\tWith array presorted:"<< endl;
    selectionSort(arrayAscending);

    cout << "\tWith array reversed:"<< endl;
    selectionSort(arrayReversed);

    cout << "\tWith array randomized:"<< endl;
    selectionSort(arrayRandom);

    cout << "\tWith array randomized with duplicates:"<< endl;
    selectionSort(arrayRandomDuplicates);  
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