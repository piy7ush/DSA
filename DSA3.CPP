//  BINARY SEARCH

// #include<bits/stdc++.h>
// using namespace std;

// int firstocc(int arr[],int size, int key){
//     int start =0;
//     int end = size-1;
//     int mid = (start+end)/2;

//     int ans = -1;

//     while(start<=end){
//         if(arr[mid]==key){
//             ans = mid;
//             end = mid-1;    // for finding the last occurance we just do      start = mid+1;
//         }
//         else if(arr[mid]>key)end = mid-1;

//         else start = mid+1;

//         mid = (start+end)/2;
//     }
//     return ans;
// }

// int main(){
//     int arr[7] = {1,1,2,3,4,5,6};
//     int size = 7;
//     int key = 2;
//     cout<<firstocc(arr,size,key);
// }



//  total no of occurance  ==== (last occurance index - first occurance index) +1  ;



//  PEAK ELEMENT IN AN ARRAY

// #include<bits/stdc++.h>
// using namespace std;

// int peak(int arr[],int size){
//     int start = 0;
//     int end = size-1;

//     int mid = (start+end)/2;

//     while(start<end){
//         if(arr[mid]<arr[mid+1]){
//             start = mid+1;
//         }
//         else{
//             end = mid;
//         }
//         mid = (start+end)/2;
//     }
//     return start;
// }

// int main(){
//     int arr[3]= {1,7,4};
//     int size = 3;
//     cout<<peak(arr,size);
// }



// PIVOT ELEMENT 

// #include<bits/stdc++.h>
// using namespace std;

// int pivot(int arr[],int size){
//     int start = 0;
//     int end = size-1;

//     int mid = (start+end)/2;
//     while(start<end){
//         if(arr[mid]>=arr[0])start = mid+1;

//         else end = mid;

//         mid = (start+end)/2;
//     }
//     return start;
// }

// int main(){
//     int arr[3] = {3,1,2};
//     int size = 3;
//     cout<<pivot(arr,size);

//     return 0;
// }



// SQ ROOT USING BINARY SEARCH

// #include<bits/stdc++.h>
// using namespace std;

// int findsq(int num){
//     int start =0;
//     int end = num;
//     int ans = -1;

//     int mid= start+(end - start)/2;

//     while(start<=end){
//         int sq = mid*mid;

//         if(sq == num)return mid;

//         else if(sq<num){
//             ans = mid;
//             start = mid+1;
//         }

//         else end = mid-1;
        
//         mid = start+(end-start)/2;
//     }
//     return ans;
// }

// int main(){
//     int num;
//     cin>>num;

//     cout<<findsq(num);

//     return 0;
// }



// BOOK ALLOCATION

// #include<bits/stdc++.h>
// using namespace std;

// bool ispossible(int arr[],int size,int k,int mid){
//     int studentcnt =1;
//     int booksum =0;
//     for(int i=0;i<size;i++){
//         if(booksum+arr[i]<=mid){
//             booksum+=arr[i];
//         }
//         else{
//             studentcnt++;
//             if(studentcnt >k || arr[i]>mid)return false;
//             booksum = arr[i];
//         }
//     }
//     return true;
// }

// int splitArray(int arr[],int size,int k){
//     int start =0;
//     int ans = -1;
//     int end = 32;
//     int mid = (start+end)/2;

//     while(start<=end){
//         if(ispossible(arr,size,k,mid)){
//             ans = mid;
//             end = mid -1;
//         }
//         else start = mid+1;
//         mid = (start+end)/2;
//     }
//     return ans;
// }

// int main(){
//     int arr[5] = {7,2,5,10,8};
//     int size = 5;
//     int k =2;

//     cout<<splitArray(arr,size,k);

//     return 0;
// }



// AGRESSIVE COWS 

// #include<bits/stdc++.h>
// using namespace std;

// bool ispossible(int arr[],int size, int k,int mid){
//     int cowcount =1;
//     int lastposition = arr[0];
    
//     for(int i=0;i<size;i++){
//         if(arr[i]-lastposition >= mid){
//             cowcount++;
//             if(cowcount==k)return true;
//             lastposition = arr[i];
//         }
//     }
//     return false;
// }


// int aggressive(int arr[],int size,int k){
//     int start =0;
//     int end = 6;
//     int ans = -1;

//     int mid = (start+end)/2;

//     while(start<=end){
//         if(ispossible(arr,size,k,mid)){
//             ans = mid;
//             start = mid+1;
//         }
//         else end = mid-1;
//         mid = (start+end)/2;
//     }
//     return ans;
// }

// int main(){
//     int arr[5]={1,2,3,5,6};
//     int size =5;
//     int k =2;

//     cout<<aggressive(arr,size,k);
    
//     return 0;
// }