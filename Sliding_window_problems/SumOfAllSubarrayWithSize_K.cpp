/* given an array arr[] of size n
 and integer k , the task is to calculate
 the sum of  all subarrays of size k */
#include<bits/stdc++.h> 
using namespace std; 
int main(){  
    int n,k; 
    cin>>n>>k; 
    vector<int>arr(n); 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }  

     //sliding window approach 
     int low=0,  high =0; // Window indices
       vector<int>AllSum; // Current window sum 
        int sum =0;
        while(high < n){
             sum += arr[high]; 

             if(high - low + 1 < k){
                high++; //Expand the window 
             }  
    
             else{ 
                // Window size is now equal to the desired window size
               // Calculate the answer for the window
                AllSum.push_back(sum); 
                sum  -= arr[low];  // removed (low idx calculation)
 
             // Move the window by incrementing indices i and j
                low++; 
                high++;

             }
        } 
         
         for(auto it : AllSum) cout<<it<<" ";

    
     return 0;
}