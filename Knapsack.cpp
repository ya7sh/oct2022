#include<bits/stdc++.h>
using namespace std;

// Returns the maximum value that  
// can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 
   int i,w;
    int k[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(i==0||w==0)
            {
                k[i][w]=0;
            }
            else if(wt[i-1]<=w)
            {
                k[i][w] = max( val[i - 1] + k[i - 1][w - wt[i-1]], k[i - 1][w] );
            }
            else
            {
                k[i][w]=k[i-1][w];
            }
        }
    }
    return k[n][W];
}

int main()
 {
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        
        //calling method knapSack()
        cout<<knapSack(w, wt, val, n)<<endl;
        
	return 0;
}