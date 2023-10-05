// BUBBLE SORT

// #include<bits/stdc++.h>
// using namespace std;

// void sort(int arr[],int n){
//     if(n==0 || n==1)return;

//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);
//     }
//     sort(arr,n-1);
// }

// int main(){
//     int arr[7]={7,6,5,4,3,2,1};
//     int size =7;
//     sort(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// QUICK SORT

// #include<bits/stdc++.h>
// using namespace std;

// int partion(int arr[],int s,int e){
//     int pivot = arr[s];
//     int cnt =0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivot)cnt++;
//     }
//     int pivotIndex = s+cnt;
//     swap(arr[pivotIndex],arr[s]);

//     int i = s, j=e;

//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<pivot)i++;
//         while(arr[j]>pivot)j--;

//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }


// }

// void quicksort(int arr[],int start,int end){
//     if(start>=end)return;

//     int p= partion(arr,start,end);

//     quicksort(arr,start,p-1);

//     quicksort(arr,p+1,end); 

// }

// int main(){
//     int arr[7]={1,8,3,4,5,7,6};
//     int size = 7;
//     quicksort(arr,0,size-1);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }



// SUBSETS

// class Solution {
// private:
//     void solve(vector<int>nums,vector<int>output,int index, vector<vector<int>>&ans){
//         if(index>=nums.size()){
//             ans.push_back(output);
//             return;
//         }
//         solve(nums,output,index+1,ans);
//         output.push_back(nums[index]);
//         solve(nums,output,index+1,ans);

//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>output;
//         int index =0;
//         solve(nums,output,index,ans);
//         return ans;
//     }
// };



// PERMUTATION

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

// class Solution {
// private:
// void solve(vector<int>nums,int index,vector<vector<int>>&ans){
//     if(index>=nums.size()){
//         ans.push_back(nums);
//         return;
//     }

//     for(int i=index;i<nums.size();i++){
//         swap(nums[i],nums[index]);
//         solve(nums,index+1,ans);
//         swap(nums[i],nums[index]);
//     }
// }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//          vector<vector<int>>ans;
//          int index =0;
//          solve(nums,index,ans);
//          return ans;
//     }
// };