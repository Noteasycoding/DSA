#include<iostream>
using namespace std;

/*

1 2 3 4 5 
  2 3 4 5 
    3 4 5 
      4 5 
        5



int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;

    int row = 1;
    while (row <= n)
    {
        // *****For space*******
        int space = row - 1;
        while (space)
        {
            cout<<" "<<" ";
            space = space - 1;
        }
        
        // ****** For value*****
        int col = 1;
        while (col <= n -row + 1)
        {
            cout<<row + col - 1<<" ";
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
    while (space <= row - 1)
    {
      cout<<" "<<" ";
      space = space + 1;
    }
    
    int col = 1;
    while (col <= n- row + 1)
    {
       cout<< row + col - 1<<" ";
       col = col + 1;
    }
    cout<<endl;
    row = row + 1;
    
  }
  

}