#include<iostream>
using namespace std;

/*

1 1 1 1 1 
  2 2 2 2 
    3 3 3 
      4 4 
        5



int main(){

    int n;
    cout<<"Enter the value:";
    cin>>n;

    // *****Loop for row *******
    int row = 1;
    
    while (row <= n)
    {

         // *****Loop for space*******
        int space = row - 1;
        while (space)
        {
            cout<<" "<<" ";
            space = space - 1;
        
        }
     
        // *****Loop for Star*******
        int col = 1;
        while(col <= n -row + 1)
        {
            cout<<row <<" ";           
            col = col + 1;
        }

       
        
        cout<<endl;
        row = row + 1;
    }
    
}

*/

int main(){

  int n;
  cout<<"Enter a number:";
  cin>>n;

  int row = 1;
  while (row <= n)
  {
    int space = 1;
    while (space <= row - 1)
    {
        cout<<" "<<" ";
        space = space + 1;
    }

    int col = 1;
    while (col <= n - row + 1)
    {
        cout<< row <<" ";
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
    
  }
  
}