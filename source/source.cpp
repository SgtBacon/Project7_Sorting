//Colleen Bell and Jay Helm
//Sources: Lecture slides, textbooks
#include <iostream>
using namespace std;

void bubbleSort(array a);
void selectionSort(array a);


int main(){

}

void bubbleSort(array a){

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

    cout << "Sorted Array:" << endl;

    for (int i = 0; i < a.size(); i++){     //prints contents of array
        cout << a[i] << endl;
    }

    cout << "Comparisons Made:" << comps << endl;   //prints comps and swaps
    cout << "Swaps Made:" << swaps << endl;
}

void selectionSort(array a){
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

    cout << "Sorted Array:" << endl;

    for (int i = 0; i < a.size(); i++){     //prints contents of array
        cout << a[i] << endl;
    }

    cout << "Comparisons Made:" << comps << endl;   //prints comps and swaps
    cout << "Swaps Made:" << swaps << endl;
}