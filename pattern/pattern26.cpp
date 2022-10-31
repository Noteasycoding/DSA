#include <iostream>
using namespace std;

/*

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/
/*
int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;

    int row = 1;
    while (row <= n)
    {
        // For space******
        int space = n - row;
        while (space)
        {
            cout<<" "<<" ";
            space = space - 1;

        }
        // first triangle *****
        int col = 1;
        while (col <= row)
        {
            cout<<col<<" ";
            col = col + 1;
        }


        // Second triangle*****
        int start = 1;
        while (start <= row - 1)
        {
            cout<<row - start<<" ";
            start = start + 1;
        }




        cout<<endl;
        row = row + 1;
    }

}

*/

int main()
{

    int n;
    cout << "Enter the number:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout << " "
                 << " ";
            space = space + 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col = col + 1;
        }

        int col2 = 1;
        while (col2 <= row - 1)
        {
            cout << row - col2 << " ";
            col2 = col2 + 1;
        }

        cout << endl;
        row = row + 1;
    }
}
