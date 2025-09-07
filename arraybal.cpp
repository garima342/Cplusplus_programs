#include<iostream>
using namespace std;

/*1. Array ka size even hoga
2. Array ko traverse krnge n/2 tk
3. left side ka sum nikalenge, aur voh right side ke sum ke equal hona chaihye balanced hone ke liye
4. unbalanced hua toh leftside ka sum - rightside ka sum return kr denge, ki ye number add hoga*/
int main(){
    int arr[]= {5, 6, 2, 9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    if(n%2==0) {
        int leftsum=0;
        int rightsum=0;
        for (int i=0; i<n/2; i++){
            leftsum += arr[i];
        }
        for (int i=n/2; i<n; i++){
            rightsum +=arr[i];
        }
        
        if(leftsum==rightsum){
            cout<<"Array is balanced"<<endl;
            cout<<"Sum of left side is:"<<leftsum<<endl;
            cout<<"Sum of right side is:"<<rightsum<<endl;
        }
        else{
            cout<<"Array seems to be unbalanced"<<endl;
            int arrbal = leftsum-rightsum;
            cout<<"Add "<<arrbal<<" to right side to balance the array"<<endl;
        }
    }
    else{
        cout<<"This array can't be balanced, as it contains odd number of elements"<<endl;
    }
    system("pause");
    return 0;
}