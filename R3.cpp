// #include<bits/stdc++.h>
// using namespace std;

// bool ispresent(int arr[][3],int target,int row,int col ){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==target)return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j];
//         }
//     }
//     int size =9;

//     cout<<ispresent(arr,4,3,3);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void sum(int arr[][3],int row, int col){
//     for(int i=0;i<row;i++){
//         int sum =0;
//         for(int j=0;j<col;j++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<" "; 
//     }
// }

// int largest(int arr[][3],int row,int col){
//     int maxi = INT_MIN;
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         if(sum>maxi){
//             maxi=sum;
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

//     cout<<largest(arr,3,3);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if(n==0)return 1;
//     return n*fact(n-1);
// }

// int main(){

//     int n =4;
//     cout<<fact(n);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int power(int a, int b){
//     if(b==0)return 1;

//     return a*power(a,b-1);
// }

// int main(){
//     int a =3;
//     int b =4;
//     cout<<power(a,b);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n){
//     if(n==0)return 0;
//     if(n==1)return 1;

//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     cout<<fib(2);

//     return 0;
// }


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




// #include<bits/stdc++.h>
// using namespace std;

// void reverse(string str,int i,int j){
//     cout<<str;
//     if(i>j)return;

//     swap(str[i],str[j]);
//     i++;
//     j--;
   

//     return reverse(str,i,j);
// }

// int main(){
//     string name = "piyush";
//     reverse(name,0,5);
    
//     return 0;
// }