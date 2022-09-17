#include<iostream>
using namespace std;

/*

        1 
      2 2 
    3 3 3 
  4 4 4 4 
5 5 5 5 5 



int main(){

    int n;
    cout<<"Enter the value:";
    cin>>n;

    int row = 1;
    while (row <= n)
    {
        // for space********
        int space = n - row;
        while (space)
        {
            cout<<" "<<" ";
            space = space - 1;

        }
        
        // for values******
        int col = 1;
        while (col <= row)
        {
            cout<<row<<" ";
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
    while (space <= n - row )
    {
      cout<<" "<<" ";
      space = space + 1;

    }
    int col = 1;
    while (col <= row)
    {
      cout<<row <<" ";
      col = col + 1;
    }
    cout<<endl;
    row = row + 1;

  }
  
}
