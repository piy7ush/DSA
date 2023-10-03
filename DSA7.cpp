// Static Memory Allocation is done before program execution.
// Dynamic Memory Allocation is done during program execution. 
// In static memory allocation, once the memory is allocated, the memory size can not change. 
// In dynamic memory allocation, when memory is allocated the memory size can be changed.


// #define PI 3.14    macros == extra space nhi leta

// global variable ak hi baar bane ga pr kafi function access kar sakte h by using pass by references

// local variable jiski life span bas ak block me hi hoti h

// inline functions are used to reduce the function calls overhead
// no extra memory usage



// RECURSION 

// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int n){
//     if(n==0)return 1;
//     return n * factorial(n-1);
// }

// int main(){
//     int n =4;
//     cout<<factorial(n);

//     return 0;
// }


// POWER

// #include<bits/stdc++.h>
// using namespace std;

// int power(int n,int a){
//     if(n==0)return 1;
//     return a*power(n-1,a);
// }

// int main(){
//     int n =3;
//     int a = 5;
//     cout<<power(n,a);

//     return 0;
// }

// COUNT NO

// #include<bits/stdc++.h>
// using namespace std;

// void print(int n){
//     if(n==0)return;

//     print(n-1);
//     cout<<n;    
// }

// int main(){
//     int n =5;
//     print(n);

//     return 0;
// }