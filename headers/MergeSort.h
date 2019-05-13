#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> LeftVector, vector<int> RightVector){
    int comps;                  //Counter for Comparisons done
    int swaps;                  //Counter for Swaps done
    
    vector<int> NewVector;

    int i = 0;
    int m = 0;

    while( i < LeftVector.size() && m < RightVector.size()){
        if(LeftVector[i] < RightVector[m]){
            NewVector.push_back(LeftVector[i]);
            i++;
        }
        else{
            NewVector.push_back(RightVector[m]);
            m++;
        }
    }

     while(i < LeftVector.size()){
         NewVector.push_back(LeftVector[i]);
         i++;
     }
     while(m < RightVector.size()){
         NewVector.push_back(RightVector[m]);
         m++;
     }
    return NewVector;

}
vector<int> merge_sort(vector<int> Vector){        //Decided to use vectors because arrays were giving too much trouble somehow
    if(Vector.size() == 1 || Vector.size() == 0){                         //Base case, if the Vector's size is 1 or 0, then return that vector, as a vector with one element is sorted
        return Vector;
    }
    else{
        vector<int>::iterator MidPoint = Vector.begin() + (Vector.size() / 2);  //Create a standard iterator to locate the midpoint
        vector<int> Left_Vector(Vector.begin(), MidPoint);                      //Create a new int vector to represent the left side of the vector
        vector<int> Right_Vector(MidPoint, Vector.end());                     //Create a new int vector to represent the right side of the vector

        vector<int> LeftSide = merge_sort(Left_Vector);                //recursively break down each half of the vector until there is only one element in each side
        vector<int> RightSide = merge_sort(Right_Vector);
        return merge(LeftSide, RightSide);                      //Return both sides as a single, sorted vector
    }
}