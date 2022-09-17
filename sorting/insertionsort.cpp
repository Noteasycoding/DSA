#include<iostream>
using namespace std;
 
void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void insertion(int arr [], int n){

    int i = 1;
    while(i < n){
        int temp = arr[i];

        int j = i - 1;
        while (j >= 0)
        {
            if(arr[j] > temp){
                arr[j + 1] = arr[j];
            }
            else break;
            j = j - 1;
        }
        arr[j + 1] = temp;
        i = i + 1;
        
    }
}

// void insertionSort(int arr[], int n){

//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if(arr[j] > temp){
//                 arr[j + 1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
        
//     }
    
// }

int main(){
 
    int arr[] = {5, 4, 3, 2, 1, 0};
    int n = sizeof(arr)/sizeof(int);

   
    // insertionSort(arr, n); // Using for loop
    insertion(arr, n);     // Using while loop
    printArray(arr, n);
    cout<<endl;
 
}
