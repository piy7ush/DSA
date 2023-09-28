// ARRAYS 

// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     // fill_n(arr,3,1);   used to assign some value to the arr
//     int size = 7;
//     print(arr,size);
//     return 0;
// }



// MAX AND MIN

// #include<bits/stdc++.h>
// using namespace std;

// int getmax(int arr[],int size){
//     // int max = INT_MIN;

//     // for(int i=0;i<size;i++){
//     //     if(arr[i]>max){
//     //         max = arr[i];
//     //     }
//     // }
//     int maxi = INT_MIN;
//     for(int i=0;i<size;i++){
//         maxi = max(maxi,arr[i]);
//     }

//     return maxi;
// }

// int getmin(int arr[],int size){
//     // int min = INT_MAX;
    
//     // for(int i=0;i<size;i++){
//     //     if(arr[i]<min){
//     //         min = arr[i];
//     //     }
//     // }
//     int mini = INT_MAX;
    
//     for(int i=0;i<size;i++){
//         mini = min(arr[i],mini);
//     }
//     return mini;
// }

// int main(){
//     int size;
//     cin>>size;

//     int arr[100];

//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"MAX VALUE :"<<getmax(arr,size)<<endl;
//     cout<<"MIN VALUE :"<<getmin(arr,size)<<endl;

//     return 0;
// }



// LINEAR SEARCH

// #include<bits/stdc++.h>
// using namespace std;

// bool linearsearch(int arr[],int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)return true;
//     }
//     return false;
// }

// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int size = 7;
//     int key;
//     cin>>key;

//     bool found = linearsearch(arr,size,key);

//     if(found)cout<<"KEY FOUND";
//     else cout<<"NOT FOUND";

//     return 0;
// }



// REVERSE ARRAY

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int arr[],int size){
//     int start =0;
//     int end = size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int size =7;

//     reverse(arr,size);
//     print(arr,size);

//     return 0;
// }



// SWAP ALTERNATES

// #include<bits/stdc++.h>
// using namespace std;

// void swapalternate(int arr[],int size){
//     int temp;
//     for(int i=0;i<size;i+=2){
//         if(i+1<=size)
//         swap(arr[i],arr[i+1]);
//         // temp = arr[i];
//         // arr[i]=arr[i+1];
//         // arr[i+1]=temp;
//     }
// }

// void printarr(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int size = 8;

//     swapalternate(arr,size);
//     printarr(arr,size);

//     return 0;
// }



// unique element

// #include<bits/stdc++.h>
// using namespace std;

// int unique(int arr[],int size){
//     int ans =0;
//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];  //using xor operator we can find the unique element
//     }
//     return ans;
// }

// int main(){
//     int arr[7]={1,1,2,2,3,3,4};
//     int size = 7;
//     cout<<unique(arr,size);
//     return 0;
// }



// find dulicates

// #include<bits/stdc++.h>
// using namespace std;

// int duplicate(int arr[],int size){
//     int ans =0;
//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     for(int i=0;i<size;i++){
//         ans = ans^i;
//     }
//     return ans;
// }

// int main(){
//     int arr[7]= {1,1,2,3,4,5,6};
//     int size =7;
//     cout<<duplicate(arr,size);

//     return 0;
// }



// INTERSECTION OF TWO ARRAYS

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// vector<int> intersection(int arr1[],int size1,int arr2[],int size2 ){
//     vector<int>ans;
//     int i=0;
//     int j=0;
//     while(i<size1 && j<size2){
//         if(arr1[i]==arr2[j]){
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else if(arr1[i]<arr2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     return ans;
// }


// int main(){
//     int arr1[5] = {1,2,3,4,5};
//     int arr2[5] = {1,2,3,7,8};
//     int size1 = 5;
//     int size2 = 5;

//     vector<int>result = intersection(arr1,size1,arr2,size2);

//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }cout<<endl;

//     return 0;
// }



// SORT 0 and 1

// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void sort(int arr[],int size){
//     int i =0;
//     int j =size-1;

//     while(i<j){
//         while(arr[i]==0 && i<j){
//             i++;
//         }
//         while(arr[j]==1 && i<j){
//             j--;
//         }
//         if(arr[i]==1 && arr[j]==0 && i<j){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }

// int main(){
//     int arr[7]= {1,0,1,0,1,0,1};
//     int size =7;
//     sort(arr,size);
//     print(arr,size);

//     return 0;
// }



// SORT COLORS 

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int count0=0;
//         int count1=0;
//         int count2=0;

//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0)count0++;
//             if(nums[i]==1)count1++;
//             if(nums[i]==2)count2++;
//         }

//         for(int i=0;i<count0;i++)nums[i]=0;
//         for(int i=count0;i<count1+count0;i++)nums[i]=1;
//         for(int i=count0+count1;i<nums.size();i++)nums[i]=2;

//     }
// };



// BINARY SEARCH   O(log n)

// #include<bits/stdc++.h>
// using namespace std;

// int binarysearch(int arr[], int size, int element){
//     int start =0;
//     int end = size-1;

//     int mid = (start+end)/2;  // we can also write it as     int mid = start+(end-start)/2;

//     while(start<=end){
//         if(arr[mid]==element)return mid;

//         else if(arr[mid]>element)end = mid-1;

//         else start = mid+1;

//         mid = (start+end)/2;
//     }
//     return -1;
// }

// int main(){
//     int arr[7]={1,2,3,4,5,6,8};
//     int size = 7;
//     int element = 5;

//     cout<<binarysearch(arr,size,element)<<endl;

//     return 0;
// }