#include <iostream>

using namespace std;

int main()
{
    int rows,cols;
    int count=0;
    
    cin>>rows>>cols;
    
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            count=count+1;
            cout<<count<<" ";
        }
        cout<<endl;
    }

    return 0;
}