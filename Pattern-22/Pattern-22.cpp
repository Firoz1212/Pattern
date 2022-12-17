//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        int max=100;
       int size = 2 * n - 1;
int front = 0;
int back = size - 1;
int a[max][max];
while (n != 0) 
{
    for (int i = front; i <= back; i++) {
    for (int j = front; j <= back; j++) {
        if (i == front || i == back ||
            j == front || j == back)
        a[i][j] = n;
    }
    }
    ++front;
    --back;
    --n;
}
for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
    cout << a[i][j]<<" ";
    }
    cout << endl;
}


}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends