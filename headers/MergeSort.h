#include <iostream>
#include <vector>
using namespace std;

// void PrintArray(int *array) {
//     int num = 100;
//     // int num = 200;
//     // int num = 500;
//     // int num = 1000;
//     // int num = 2000;
//   for (int i = 0; i < num; ++i)
//     cout << array[i] << " " << endl;
// }
// void Merge(int array[], int LowValue, int MidValue, int HighValue){
//     int comps = 0;
//     int swaps = 0;

//     int *tempArray = new int[HighValue-LowValue+1];

//     int i = LowValue;
//     int j = MidValue+1;
//     int m =0;

//     while(i <= MidValue && j <= HighValue){
//         if(array[i] <= array[j]){
//             tempArray[m++] = array[i++];
//             swaps++;
//             comps++;
//         }
//         else{
//             tempArray[m++] = array[j++];
//             swaps++;
//             comps++;
//         }
//     }

//     while(i <= MidValue){
//         comps++;
//         swaps++;
//         tempArray[m++] = array[i++];
//     }

//     while(j <= HighValue){
//         comps++;
//         swaps++;
//         tempArray[m++] = array[j++];
//     }

//     do{
//         m = 0;                          //Too many arguments for a for loop
//         i = LowValue;                   //Instead use a do-while loop to swap every element 
        
//         array[i] = tempArray[m];        //starting at the lowest element in the array, swap it with TempArray's version of the array
//         i++;                            //Increment both i and m so progress is made in both arrays
//         m++;
//     }while(i <= HighValue);             //do all of this while i is not equal to HighValue
// }

// void MergeSort(int array[], int LowValue, int HighValue){       //Merge Sort must take 3 parameters, the array itself, the lowest value within, and the highest value within
//     int MidValue = 0;                                           //Create a new int that represents the Middle Value     
//     if(LowValue < HighValue){                                   //Only works if LowValue is less than HighValue, because an array of 1 size is technically sorted and does not need to be sorted again
//         MidValue = (LowValue+HighValue)/2;      //Crap way to find an approximate midpoint but it fits
//         MergeSort(array, LowValue, MidValue);                   //Check all values to the left of the MidValue, including MidValue
//         MergeSort(array, MidValue+1, HighValue);                //Check all values to the right of the MidValue, excluding MidValue
//         Merge(array, LowValue, MidValue, HighValue);            //Finally, merge all values from the right and left side, collapsing the recursive loop
//     }
// }

vector<int> merge(vector<int>& Vector, vector<int>& Vector2){
    int comps;                  //Counter for Comparisons done
    int swaps;                  //Counter for Swaps done
    
    vector<int> NewVector;

    int i = 0;
    int m = 0;

    while( i < Vector.size() && m < Vector2.size()){
        if(Vector[i] < Vector2[m]){
            NewVector.push_back(Vector[i]);
            i++;
        }
        else{
            NewVector.push_back(Vector2[m]);
            m++;
        }
    }

    while(i < Vector.size()){
        NewVector.push_back(Vector[i]);
        i++;
    }
    while(m < Vector2.size()){
        NewVector.push_back(Vector2[m]);
        m++;
    }
    return NewVector;

}
vector<int> merge_sort(vector<int>& Vector){        //Decided to use vectors because arrays were giving too much trouble somehow
    if(Vector.size() == 1){                         //Base case, if the Vector's size is 1, then return that vector, as a vector with one element is sorted
        return Vector;
    }
    else{
        vector<int>::iterator MidPoint = Vector.begin() + (Vector.size() / 2);  //Create a standard iterator to locate the midpoint
        vector<int> Left_Vector(Vector.begin(), MidPoint);                      //Create a new int vector to represent the left side of the vector
        vector<int> Right_Vector(MidPoint+1, Vector.end());                     //Create a new int vector to represent the right side of the vector

        auto LeftSide = merge_sort(Left_Vector);                //recursively break down each half of the vector until there is only one element in each side
        auto RightSide = merge_sort(Right_Vector);
        return merge(LeftSide, RightSide);                      //Return both sides as a single, sorted vector
    }
}