// REVISION

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     bool isPrime =1;
//     int n;
//     cin>>n;


//     for(int i=2;i<n;i++){
//         if(n%i==0)
//         isPrime=0;
//         break;        
//     }
//     if(isPrime)cout<<"PRIME";
//     else cout<<"not prime";

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// bool check(int n){
//     if(n<=1)return false;

//     for(int i=2;i<n;i++){
//         if(n%i==0)return false;
//     }
//     return true;
// }

// int printcount(int n){
//     int count =0;
//     for(int i=2;i<=n;i++){
//         if(check(i))count++;
//     }
//     return count;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<printcount(n);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int power(int a,int b){
//     int ans =1;
//     for(int i=1;i<=b;i++){
//         ans = ans*a;
//     }
//     return ans;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = power(a,b);
//     cout<<ans;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool check(int n){
//     if(n%2==0)return true;
//     else return false;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(check(n))cout<<"EVEN";
//     else cout<<"ODD";

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int ncr(int a,int b){
//     int n = fact(a);
//     int d = fact(b)*fact(a-b);
//     int s = n/d;
//     return s;
// }

// int main(){
//     int final = ncr(5,2);
//     cout<<final;


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void passbyvalue(int &num){
//     num++;
//     cout<<"THE NO IS"<<num<<endl;
// }

// int main(){
//     int num;
//     cin>>num;
//     passbyvalue(num);
//     cout<<num;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int getmin(int arr[],int size){
//     int min = arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     return min;
// }

// int main(){
//     int arr[10]={2,3,4,5,1,7,8,9,10};
//     int size =9;
//     cout<<getmin(arr,size);

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int arr[],int size){
//     int s = 0;
//     int e = size-1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }
// void swapalt(int arr[],int size){
//     for(int i=0;i<size;i+=3){
//         // if(i+1<=size){
//             swap(arr[i],arr[i+1]);
//         // }
//     }

// }

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[4]={1,2,3,4};
//     int size =4;
//     swapalt(arr,size);
//     print(arr,size);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int unique(int arr[],int size){
//     int ans =0;
//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int arr[5]={1,2,2,3,3};
//     int size =5;
//     cout<<unique(arr,size);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int dup(int arr[],int size){
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
//     int arr[7]={1,1,2,3,4,5,6};
//     int size = 7;
//     cout<<dup(arr,size);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// vector<int>inter(int arr[],int size,int arr1[],int size1){
//     vector<int>ans;
//     int i=0;
//     int j=0;
//     while(i<size && j<size1){
//         if(arr[i]==arr1[j]){
//             ans.push_back(arr[i]);
//             i++;
//             j++;
//         }
//         else if(arr[i]<arr1[j])i++;

//         else j++;
//     }
//     return ans;
// }

// int main(){
// int arr[3]={1,2,4};
// int arr1[4]= {1,2,3,4};
// int size =3;
// int size1=4;
// vector<int>ans = inter(arr,size,arr1,size1);
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";

// }


// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void sort(int arr[],int size){
//     int i=0;
//     int j = size-1;

//     while(i<j){
//         while(arr[i]==0 && i<j){
//             i++;
//         }
//         while(arr[j]==1 && i<j)j--;

//         if(arr[i]==1 && arr[j]==0 && i<j){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }
// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[5]={0,1,0,1,0};
//     int size = 5;
//     sort(arr,size);
//     print(arr,size);

//     return 0;
// }


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

//         else end = mid;

//         mid = (start+end)/2;
//     }
//     return start;

// }

// int main(){
//     int arr[3]={1,7,4};
//     int size = 3;
//     cout<<peak(arr,size);

//     return 0;
// }


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
//     int arr[3]= {8,78,400};
//     int size = 3;
//     cout<<peak(arr,size);
// }


// #include<bits/stdc++.h>
// using namespace std;

// int pivot(int arr[],int size){
//     int start = 0;
//     int end = size-1;

//     int mid = (start+end)/2;

//     while(start<end){
//         if(arr[mid]>arr[0]){
//             start = mid+1;

//         }
//         else end = mid;
        
//         mid = (start+end)/2;
//     }
//     return start;
// }

// int main(){
//     int arr[3]= {2,3,3};
//     int size = 3;
//     cout<<pivot(arr,3);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int findsq(int num){
//     int start = 0;
//     int end = num;

//     int mid = (start+end)/2;
//     int ans = -1;

//     while(start<=end){

//         int sq = mid*mid;

//         if(sq==num)return mid;

//         else if (sq<num){
//             ans = mid;
//             start = mid+1;
//         }
//         else end = mid-1;

//         mid= (start+end)/2;

//     }
// }

// int main(){
//     int num;
//     cin>>num;
//     cout<<findsq(num);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool isposs(int arr[],int size,int k,int mid){
//     int student = 1;
//     int sum = 0;
//     for(int i=0;i<size;i++){
//         if(sum+arr[i]<=mid){
//             sum+=arr[i];
//         }
//         else{
//             student++;
//             if(student>k || arr[i]>mid)return false;
//             sum = arr[i];
//         }
//     }
//     return true;
// }

// int splitarr(int arr[],int size,int k){
//     int start = 0;
//     int end = 32;
//     int ans = -1;

//     int mid = (start+end)/2;

//     while(start<=end){

//         if(isposs(arr,size,k,mid)){
//             ans = mid;
//             end = mid-1;
//         }
//         else start = mid+1;

//         mid = (start+end)/2;

//     }
//     return ans;
// }


// int main(){
//     int arr[5]= {7,2,5,10,8};
//     int size =5;
//     int k = 2;
//     cout<<splitarr(arr,size,k);

//     return 0;
// }