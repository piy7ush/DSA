//  RECURSION 

// #include<bits/stdc++.h>
// using namespace std;

// void waytodest(int desctination, int src){
//     if(src==desctination){
//         cout<<"POCH GAYE";
//         return;
//     }

//     src++;
//     waytodest(desctination,src);
// }

// int main(){
//     int destination = 10;
//     int src =1;
//     waytodest(destination,src);

//     return 0;
// }



// FIBONACCI series

// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n){
//     if(n==0)return 0;
//     if(n==1)return 1;

//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n =4;
//     cout<<fib(n);

//     return 0;
// }



// STAIRS

// #include<bits/stdc++.h>
// using namespace std;

// int waytostairs(int stairs){
//     if(stairs<0)return 0;
//     if(stairs==0)return 1;

//     return waytostairs(stairs-1)+waytostairs(stairs-2);
// }
// int main(){
//     int stairs = 5;
//     cout<< waytostairs(stairs);
//     return 0;
// }



// count digits

// #include<bits/stdc++.h>
// using namespace std;

// void saydigits(int num,string arr[]){
//     if(num==0)return;

//     int digit = num%10;
//     num = num/10;

//     saydigits(num,arr);
//     cout<<arr[digit]<<endl;
// }

// int main(){
//     int num = 710;
//     string arr[10] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};

//     saydigits(num,arr);

//     return 0;
// }



// SORTED OR NOT

// #include<bits/stdc++.h>
// using namespace std;

// bool sortedornot(int arr[],int size){
//     if(size == 0 || size==1)return true;

//     if(arr[0]>arr[1])return false;

//     else return sortedornot(arr+1,size-1);
// }

// int main(){
//     int arr[7] = {1,2,3,4,8,6,7};
//     int size =7;
//     cout<<sortedornot(arr,size);

//     return 0;
// }



// sum

// #include<bits/stdc++.h>
// using namespace std;

// int getsum(int arr[],int size){
//     if(size==0)return 0;
//     if(size==1)return arr[0];

//     return arr[0]+getsum(arr+1,size-1);
// }

// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int size =7;
//     cout<<getsum(arr,size);
//     return 0;
// }



// LINEAR SEARCH

// #include<bits/stdc++.h>
// using namespace std;

// bool LINEARSEARCH(int arr[],int size,int K){
//     if(size==0)return false;
//     if(arr[0]==K)return true;

//     return LINEARSEARCH(arr+1,size-1,K);
// }

// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int size =7;
//     int K =8;
//     cout<<LINEARSEARCH(arr,size,K);
//     return 0;
// }



// BINARY SEARCH 


// #include<bits/stdc++.h>
// using namespace std;

// bool binarysearch(int arr[],int start, int end,int k){
//     if(start>end)return false;

//     int mid = (start+end)/2;

//     if(arr[mid]==k)return true;

//     if(arr[mid]>k){
//         return binarysearch(arr,start,mid-1,k);
//     }
//     else{
//         return binarysearch(arr,mid+1,end,k);
//     }
// }

// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int size =7;
//     int k =7;
//     cout<<binarysearch(arr,0,6,k);
//     return 0;
// }



// REVERSE STRING

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(string str,int i,int j){
//     cout<<str<<endl;
//     if(i>j)return;

//     swap(str[i],str[j]);
//     i++;
//     j--;

//     return reverse(str,i,j);
// }

// int main(){
//     string name = "piyush";
//     reverse(name,0,5);
//     // cout<<name;
//     return 0;
// }



// PALINDROME

// #include<bits/stdc++.h>
// using namespace std;

// bool pali(string str,int i,int j){
//     if(i>j)return true;

//     if(str[i]!=str[j])return false;

//     else return pali(str,i+1,j-1);
// }

// int main(){
//     string name = "aba";
//     cout<<pali(name,0,2);
    
//     return 0;
// }



// POWER

// #include<bits/stdc++.h>
// using namespace std;

// int power(int a,int b){
//     if(b==0)return 1;
//     if(b==1)return a;

//     int ans = power(a,b/2);

//     if(b%2==0)return ans*ans;
//     else return a*ans*ans;
// }

// int main(){
//     int a =2;
//     int b =2;

//     cout<<power(2,2);
//     return 0;
// }