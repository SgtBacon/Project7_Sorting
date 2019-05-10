//Colleen Bell and Jay Helm
//Sources: Lecture slides, textbooks
#include <iostream>

using namespace std;

void bubbleSort(array a);

int main() {
    
}

void bubbleSort(array a){

bool exchange_flag;

    do {
        exchange_flag = false;              //will indicate whether a swap was made
        for (int i = 0; i<a.size(); i++){   //for every object in the array
            int x = i + 1;                  //creates an index number for the item next to a[i]
            if (a[i] > a[x]){               //compares a[i] and a[x]
                // swap(a[i], a[x]);        (look, Scott, I second-thought a std:: cop-out)
                int temp = a[i];            //basic swap function
                a[i] = a[x];
                a[x] = temp;
    
                exchange_flag = true;       //sets the flag to true if an exchange was needed
            }
        }
    } while (exchange_flag == true);        //repeat while exchanges were needed

}