// ROTATE ARRAY

// #include<bits/stdc++.h>
// using namespace std;

// // void reverseArray(int arr[], int size) {
// //     int start = 0;
// //     int end = size - 1;

// //     while (start < end) {
// //         int temp = arr[start];
// //         arr[start] = arr[end];
// //         arr[end] = temp;
// //         start++;
// //         end--;
// //     }
// // }

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[5]= {5,4,3,2,1};
//     int size =5;

//     // reverseArray(arr,size);
//     // print(arr,size);

//     for(int start = 0, end = size - 1; start < end; start++, end--) {
//         std::swap(arr[start], arr[end]);
//     }
//     print(arr,size); 

//     return 0;
// }



// MERGE TWO SORTED ARRAYS

// #include<bits/stdc++.h>
// using namespace std;

// void merge(int arr1[],int size1,int arr2[],int size2,int arr3[]){
//     int i=0;
//     int j =0;
//     int k =0;
     
//     while(i<size1 && j<size2){
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
//         arr3[k]=arr2[j];
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



// MOVE ZEROES

// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void move(int arr[],int size){
//     int i =0;
//     for(int j=0;j<size;j++){
//         if(arr[j]!=0){
//             int temp = arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//             i++;
//         }
//     }
// }

// int main(){
//     int arr[5]={0,1,0,3,12};
//     int size =5;
//     move(arr,5);
//     print(arr,5);
// }



// ROTATE AN ARRAY K TIMES

// vector<int>temp(nums.size());

// for(int i=0;i<nums.size();i++){
//     temp[(i+k)%nums.size()] = nums[i];
// }
// nums = temp;



// ROTATED AND SORTED

// #include<bits/stdc++.h>
// using namespace std;

// bool rotatedandsorted(int arr[],int size){
//     int count =0;
//     for(int i=1;i<size;i++){
//         if(arr[i-1]>arr[i])count++;
//     }
//     if(arr[size-1]>arr[0])count++;

//     return count==1;
// }

// int main(){
//     int arr[4]={2,1,3,4};
//     int size =4;

//     cout<<rotatedandsorted(arr,size);

//     return 0;
// }



// FINDING LENGTH OF STRING  & REVERSE A STRING

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(char name[],int size){
//     int start =0;
//     int end = size-1;
//     while(start<=end){
//         swap(name[start],name[end]);
//         start++;
//         end--;
//     }
// }

// int getlength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[20]= "piyush";
//     int len = getlength(name);

//     reverse(name,len);
//     cout<<name;

//     return 0;
// }



// PALINDROME OR NOT

// #include<bits/stdc++.h>
// using namespace std;

// int getlength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// bool checkpalindrome(char name[],int len){
//     int start = 0;
//     int end = len -1;

//     while(start<=end){
//         if(name[start]!=name[end]){
//             return 0;
//         }
//         else{
//             start++;
//             end--;
//         }
//     }
//     return 1;
// }

// int main(){
//     char name[20]= "pap";
//     int len = getlength(name);

//     cout<<checkpalindrome(name,len);

//     return 0;
// }



// CHAR TO LOWER CASE

// #include<bits/stdc++.h>
// using namespace std;

// char tolowercase(char ch){
//     if(ch>='a' && ch<='z')return ch;

//     else return ch -'A'+'a';  //capital letter ko smaller me karne ke kaam aata h 
// }

// int main(){
//     cout<<"CHAR TO LOWER CASE : "<<tolowercase('b')<<endl;
//     cout<<"CHAR TO LOWER CASE : "<<tolowercase('B')<<endl;

//     return 0;
// }



// MAXIMUM CHAR IN AN STRING

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