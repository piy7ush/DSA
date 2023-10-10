// #include<bits/stdc++.h>
// using namespace std;

// bool check(int n){
//     if(n==0 || n==1)return false;

//     for(int i=2;i<n;i++){
//         if(n%i==0)return false;
//     }
//     return true;
// }

// int countprime(int n){
//     int count =0;

//     for(int i=0;i<=n;i++){
//         if(check(i))count++;
//     }
//     return count;
// }

// int main(){
//     int num = 1000;
//     cout<<countprime(num);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     bool isPrime =1;

//     int n;
//     cin>>n;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isPrime=0;
//             break;
//         }
        
//     }

//     if(isPrime)cout<<"PRIME";
//     else cout<<"not PRIME";


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a, b;
//     cin>>a>>b;

//     char c;
//     cin>>c;

//     switch(c){
//         case '+':cout<<a+b;
//         break;

//         case '-': cout<<a-b;
//         break;

//         case '*': cout<<a*b;
//         break;

//         default: cout<<"NOT POSSIBLE";
//     }


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
//     int a = 2;
//     int b = 2;
//     cout<<power(a,b);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool isEven(int num){
//     if(num%2==0)return 1;
//     else return 0;
// }

// int main(){
//     int num;
//     cin>>num;

//     if(isEven(num))cout<<"EVEN";
//     else cout<<"ODD";


//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int fact(int num){
//     int fact =1;
//     for(int i=1;i<=num;i++){
//         fact= fact*i;
//     }
//     return fact;
// }

// int ncr(int a,int b){
//     int num = fact(a);
//     int den = fact(b)*fact(a-b);
//     return num/den;
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
//     cout<<num<<endl;
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

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     int arr[4]={1,2,3,4};
//     int size =4;

//     print(arr,size);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int getmax(int arr[],int size){
//     int max = INT_MIN;

//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     return max;

// }

// int main(){
//     int arr[5]={1,225,3,4,5};
//     int size = 5;

//     cout<<getmax(arr,size);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool linear(int arr[],int size,int k){
//     for(int i=0;i<size;i++){
//         if(arr[i]==k)return true;
//     }
//     return false;
// }

// int main(){
//     int arr[5]={1,2,4,5,55};
//     int size =5;

//     int k = 5;
//     bool found = linear(arr,size,k);
//     if(found )cout<<"FOUND";

//     else cout<<"NOT FOUND";



//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void swap(int arr[],int size){
//     for(int i=0;i<size;i+=2){
//         if(i+1<=size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size =5;
//     swap(arr,size);
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
//     int arr[4]= {1,2,1,1};
//     int size = 4;

//     cout<<unique(arr,size);

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
//     int arr[7]={1,2,3,3,3,3};
//     int size = 6;
//     cout<<unique(arr,size);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {

//   int arr[] = {1,1,3,2,4,2,3};
//   int size = sizeof(arr)/sizeof(int);
//   int result = 0;

//   for(int i =0 ; i < size; i++)
//     result = result ^ arr[i];
  
//   cout << "Number occurs once: " << result;

//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int uniqueocc(int arr[],int size){
//     int ans = 0;
//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// } 

// int main(){
//     int arr[4] = {1,2,1,1};
//     cout<<uniqueocc(arr,4);
    

//     return 0;
// }


// #include <iostream>

// int findUniqueOccurrence(int arr[], int size) {
//     int result = 0;
    
//     for (int i = 0; i < size; i++) {
//         result ^= arr[i];
//     }
    
//     return result;
// }

// int main() {
//     int arr[4] = {1, 2, 1, 1};
//     int unique = findUniqueOccurrence(arr, 4);
    
//     std::cout << "Unique occurrence: " << unique << std::endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void sort(int arr[],int size){

//     int i=0;
//     int j =size-1;

//     while(i<j){
//         while(arr[i]==0 && i<j)i++;

//         while(arr[j]==1 && i<j)j--;

//         if(arr[i]==1 && arr[j]==0 && i<j){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }


// int main(){
//     int arr[4]= {1,0,1,0};
//     int size =4;
//     sort(arr,size);
//     print(arr,size);

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int binary(int arr[],int size,int k){
//     int s =0;
//     int e = size-1;

//     int mid = (s+e)/2;
//     while(s<=e){
//         if(arr[mid]==k)return mid;

//         else if(arr[mid]>k)e = mid-1;

//         else s = mid+1;
//         mid = (s+e)/2;
//     }
//     return -1;
// }

// int main(){
//     int arr[4]= {1,2,3,4};
//     int size = 4;
//     int k = 4;
//     cout<<binary(arr,size,k);



//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int first(int arr[],int size,int k){
//     int start =0;
//     int end =size-1;
//     int ans = -1;
//     int mid = (start+end)/2;

//     while(start<end){
//         if(arr[mid]==k){
//             ans = mid;
//             start = mid+1;
//         }

//         else if(arr[mid]>k){
//             end = mid-1;
//         }
//         else start = mid+1;

//         mid = (start+end)/2;
//     }
// }

// int main(){
//     int arr[5]={1,2,3,4,4};
//     int size = 5;
//     int k = 4;

//     cout<<first(arr,size,k);


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
//             start= mid+1;
//         }
//         else end = mid;

//         mid = (start+end)/2;
//     }
//     return start;
// }

// int main(){
//     int arr[3]={1,2,4};
//     int size =3;
//     cout<<peak(arr,size);

//     return 0;
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
//     int arr[3] = {3,4,2};
//     int size = 3;
//     cout<<pivot(arr,size);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int findsq(int num){
//     int start =0;
//     int end = num;

//     int ans = -1;

//     while(start<=end){
//         int mid = (start+end)/2;

//         int sq = mid*mid;

//         if(sq==num)return mid;

//         else if(sq<num){
//             ans = mid;
//             start = mid+1;
//         }
//         else end = mid-1;
//     }
//     return ans;
// }

// int main(){
//     int num;
//     cin>>num;
//     cout<<findsq(num);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool ispossible(int arr[],int size, int k, int mid){
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


// int splitArray(int arr[],int size,int k){
//     int start=0;
//     int end =32 ;
//     int ans = -1;

//     int mid = (start+end)/2;

//     while(start<=end){

//         if(ispossible(arr,size,k,mid)){
//             ans = mid;
//             end = mid-1;
//         }
//         else start = mid+1;

//         mid= (start+end)/2;
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

// #include<bits/stdc++.h>
// using namespace std;

// void select(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         int mini=i;
//         for(int j =i+1;j<size;j++){
//             if(arr[j]<arr[mini])mini = j;
//         }

//         if(mini!=i)swap(arr[mini],arr[i]);
//     }
// }

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[5]= {65,25,12,22,11};
//     int size = 5;

//     select(arr,size);
//     print(arr,size);

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// void insert(int arr[],int size){
//     for(int i=1;i<size;i++){
//         int temp = arr[i];
//         int j =i-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp)arr[j+1]=arr[j];
//             else break;

//         }
//         arr[j+1]=temp;
//     }
// }

//  void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// int main(){
//     int arr[5] = {1,4,3,2,8};
//     int size =5;

//     insert(arr,size);
//     print(arr,size);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int arr[],int size){
//     int start =0;
//     int end =size-1;
//     while(start<=end){
//         int temp = arr[start];
//         arr[start]= arr[end];
//         arr[end]= temp;
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
//     int arr[5]= {5,4,3,2,1};
//     int size =5;
//     reverse(arr,size);
//     print(arr,size);

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void merge(int arr1[], int size1, int arr2[],int size2, int arr3[]){
//     int i=0;
//     int j =0;
//     int k =0;

//     while (i<size1 && j<size2){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<size1){
//         arr3[k]=arr1[i];
//         i++;
//         k++;
//     }
//     while(j<size2){
//         arr3[k]=arr2[k];
//         j++;
//         k++;
//     }
// }

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }



// int main(){
//     int arr1[5]={1,2,3,4,5};
//     int arr2[4]={1,4,6,8};

//     int size1 =5;
//     int size2 =4;

//     int arr3[9];

//     merge(arr1,size1,arr2,size2,arr3);
//     print(arr3,9);    

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void move(int arr[],int size){
//     int i=0;
//     for(int j=0;j<size;j++){
//         if(arr[j]==0){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//     }
// }

//  int main(){
//     int arr[5]={0,1,0,3,12};
//     int size =5;
//     move(arr,5);
//     print(arr,5);
// }

// vector<int>temp(nums.size());

// for(int i=0;i<nums.size();i++){
//     temp[(i+k)%nums.size()]=nums[i];
// }
// nums = temp;


// #include<bits/stdc++.h>
// using namespace std;

// bool check(int arr[],int size){
//     int count =0;
//     for(int i=1;i<size;i++){
//         if(arr[i-1]>arr[i])count++;
//     }
//     if(arr[size-1]>arr[0])count++;

//     return count==1;
// }

// int main(){
//     int arr[4]={5,1,3,4};
//     int size =4;

//     cout<<check(arr,size);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int getlen(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[10]="piyush";
//     int len = getlen(name); 
//     cout<<len;
    


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// char tolowercase(char ch){
//     if(ch>'a' && ch<'z')return ch;

//     else return ch-'A'+'a';
// }

// int main(){

//     cout<<"CHAR TO LOWER CASE : "<<tolowercase('b')<<endl;
//     cout<<"CHAR TO LOWER CASE : "<<tolowercase('D')<<endl;
    


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// char getmax(string s){
//     int arr[26] = {0};

//     for(int i=0;i<s.length();i++){
//         char ch = s[i];

//         int num = 0;
//         if(ch>='a' && ch <='z')num = ch-'a';

//         else num = ch-'A';
//         arr[num]++;
//     }
//     int maxi = -1;
//     int ans =0;
//     for(int i=0;i<26;i++){
//         if(arr[i]>maxi){
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char final = 'a'+ans;
//     return final;
// }

// int main(){
//     string s;
//     cin>>s;

//     cout<<getmax(s);

//     return 0;
// }