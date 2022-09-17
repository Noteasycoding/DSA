#include<iostream>
using namespace std;

/*

        * 
      * * 
    * * * 
  * * * * 
* * * * * 



int main(){

    int n;
    cout<<"Enter the value:";
    cin>>n;

    // *****Loop for row *******
    int row = 1;
    while (row <= n)
    {
        // *****Loop for space*******
        int space = n - row;
        while (space)
        {
            cout<<" "<<" ";
            space = space - 1;
        
        }

        // *****Loop for Star*******
        int col = 1;
        while(col <= row)
        {
            cout<<"*"<<" ";
            col = col + 1;
        }
        
        cout<<endl;
        row = row + 1;
    }
    
}

*/

int main(){

  int n;
  cout<<"Enter the number:";
  cin>>n;

  int row = 1;

  while (row <= n)
  {
    int space = 1;

    while (space <= n - row)
    {
      cout<<" "<<" ";
      space = space + 1;
    }

    int col = 1;
    while (col <= row)
    {
      cout<<"*"<<" ";
      col = col + 1;
    }
    cout<<endl;
    row = row + 1;
    
  }
  

}
