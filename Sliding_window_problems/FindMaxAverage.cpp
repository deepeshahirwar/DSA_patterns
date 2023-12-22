 
#include<bits/stdc++.h> 
using namespace std;  

    double findMaxAverage(vector<int>& nums, int k) { 
       int n = nums.size();
        int low=0,  high =0; 
         double  sum =0; 
         double  mx_avg =INT_MIN;  

        while(high < n){
             sum += nums[high]; 

             if(high - low + 1 < k){
                high++; 
             }  
    
             else{ 
               
                 mx_avg = max(mx_avg , sum/(double)k);
                 sum  -= nums[low]; 
 
           
                low++; 
                high++;

             }
        }  
        return mx_avg;
    }
 

int main(){  
    int n,k; 
    cin>>n>>k; 
    vector<int>nums(n); 
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }  
 
  double ans = findMaxAverage(nums, k); 
  cout<<ans<<endl; 

     return 0;  
}