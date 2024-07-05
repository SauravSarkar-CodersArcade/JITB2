#include <iostream>
using namespace std;
bool isPathSafe(int ** arr, int x, int y, int n){
    if (x < n && y < n && arr[x][y] == 1){
        return true;
    }
    return false;
}
bool ratInMaze
(int ** arr, int x, int y, int n, int ** resArray){
    // If the rat has reached the destination
    if ( x == (n-1) && y == (n-1)){
        resArray[x][y] = 1;
        return true;
    }
    // Check whether the current position is safe
    if (isPathSafe(arr, x, y, n)){
        resArray[x][y] = 1;
        // Forward Traversal
        if (ratInMaze(arr,x+1,y,n,resArray)){
            return true;
        }
        // Downward Traversal
        if (ratInMaze(arr,x,y+1,n,resArray)){
            return true;
        }
        resArray[x][y] = 0; // Back Tracking
        return false;
    }
    return false;
}
int main() {
    int n;
    cout << "Enter the n value:" << endl;
    cin >> n;
    int ** arr = new int * [n];
    for (int i=0; i<n; i++){
        arr[i] = new int[n]; // Each dynamic row
    }
    cout << "Enter the maze array values: " << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int ** resArray = new int * [n];
    for (int i=0; i<n; i++){
        resArray[i] = new int [n];
        for (int j=0; j<n; j++){
            resArray[i][j] = 0;
        }
    }
    if (ratInMaze(arr, 0,0,n,resArray)){
        // True -> Solution Exists, Print the resultant
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout << resArray[i][j] << " ";
            }cout << endl;
        }
    }else{
        cout << "No solution exists." << endl;
    }
    return 0;
}
