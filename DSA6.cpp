// SEARCH AN ELEMENT IN 2D ARRAYS

// #include<bits/stdc++.h>
// using namespace std;

// bool ispresent(int arr[][4],int target, int i, int j){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(arr[i][j]==target)return 1;
//         }
//     }
//     return 0;
// }

// int main(){

//     int arr[3][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//     }

//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<4;j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }cout<<endl;
//     // }

//     cout<<ispresent(arr,11,3,4); 

//     return 0;
// }



// SUM OF 2D ARRAY

// #include<bits/stdc++.h>
// using namespace std;

// void sum(int arr[][3],int i,int j){
//     for(int i=0;i<3;i++){
//         int sum =0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
// }

// int largestsum(int arr[][3],int i,int j){
//     int maxi =INT_MIN;

//     for(int i=0;i<3;i++){
//         int sum =0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }

//         if(sum>maxi){
//             maxi =sum;
//         }

//     }
    
//     return maxi;
// }


// int main(){

//     int arr[3][3];

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }

//     sum(arr,3,3);
//     cout<<largestsum(arr,3,3);
 
//     return 0;
// }



// BINARY SEARCH IN 2D ARRAY

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end = row*col -1;
//         int mid = (start+end)/2;

//         while(start<=end){
//             int element = matrix[mid/col][mid%col];

//             if(element == target)return 1;

//             else if(element<target)start = mid+1;

//             else end = mid-1;
            
//             mid = (start+end)/2;
//         }
//         return 0;
//     }
// };



// COUNT PRIMES TILL N 

// class Solution {
// private:
//     bool isprime(int n){
//       if(n<=1)return false;
//       for(int i=2;i<n;i++){
//           if(n%i==0)return false;
//       }
//       return true;
//     }
// public:
//     int countPrimes(int n) {
//         int count =0;
//         for(int i=2;i<n;i++){
//             if(isprime(i)){
//                 count++;
//             }
//         }
//         return count;
//     }
// };



// POINTERS
// A pointer is a variable that stores the memory address of an object

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num = 4;
//     cout<<num<<endl;

//     cout<<"address of num is : "<<&num<<endl;

//     int *ptr = &num;

//     cout<<"VALUE IS :"<<*ptr<<endl;
//     cout<<"ADDRESS IS :"<<ptr<<endl;

//     int i = 7;

//     int *p =0;
//     p = &i;
//     cout<<"ADDRESS "<<p<<endl;
//     cout<<"VALUE IS "<<*p<<endl;

//     return 0;
// }


// in char case it will print the whole value
// value update kr sakte h ptr ki function me pr vase update nhi kr sakte like p = p+1

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[8]={10,11,12};

//     cout<<"address of 1st memory block"<< arr<<endl;
//     cout<<"address of 1st memory block"<< &arr[0]<<endl;

//     cout<<*arr+1;

//     return 0;
// }


// benifits
// part of arr send kr sakte h in any function
