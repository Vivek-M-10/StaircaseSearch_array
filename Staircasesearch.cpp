#include<iostream>
using namespace std;

pair<int,int> staircaseSearch(int a[][4], int row, int col, int key)
{
    
    // when key is out of an array
    if(key<a[0][0] or key>a[row-1][col-1])
    {
        return {-1,-1};
    }

    int i = 0;
    int j = col-1;

    //staircaseSearch

    while(i>=row-1 or j>=0 )
    {
        if(a[i][j]==key)
        {
            return {i,j};
        }
        else if(a[i][j]>key)
        {
            j--;
        }
        else{
            i++;
        }

    }
    return {-1,-1};
      
}

int main()
{
    int arr[][4] = {{10,20,30,40},{45,46,47,48},{65,70,75,78}};
    int m =4, n=4;
    
    pair<int,int> cords = staircaseSearch(arr,m,n,47);

    cout<<"("<<cords.first<<","<<cords.second<<")";
}