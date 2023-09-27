// prime no 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     bool isprime =1;
//     int n;
//     cin>>n;

//     for(int i=2;i<n;i++){
//         if(n%i == 0){
//             cout<<"not prime";
//             isprime=0;
//             break;
//         }
//     }
//     if(isprime)cout<<"prime";
//     else cout<<"not prime";
// }

// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i == 0)return 0;
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n))cout<<"Prime no";
//     else cout<<"NOT PRIME";

//     return 0;
// }



//  Switch Case

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num =1;

//     switch (num){
//         case 1: cout<<" The no is 1";
//         break;

//         case 2: cout<<" The no is 2";
//         break;

//         default: cout<<"This is default case";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b;

//     cout<<"Enter the first no : "<<endl;
//     cin>>a;

//     cout<<"Enter the second no :"<<endl;
//     cin>>b;

//     char c;
//     cout<<"Enter the char ";
//     cin>>c;

//     switch(c){
//         case '+': cout<< a+b <<endl;
//         break;

//         case '-': cout<<a-b<<endl;
//         break;

//         case '*': cout<<a*b<<endl;
//         break;

//         case '/': cout<<a/b<<endl;
//         break;

//         default: cout<<"NOT POSSIBLE";
//     }
//     return 0;
// }



// power(a,b)

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int a,b;
//     cin>>a>>b;

//     int ans =1;

//     for(int i=1;i<=b;i++){
//         ans = ans*a;
//     }
//     cout<<" the ans is "<<ans<<endl;
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int power(int a,int b){
//     int ans =1;
//      for(int i=1;i<=b;i++){
//         ans = ans*a;
//      }
//      return ans;
// }

// int main(){
//     int a, b;
//     cin>>a>>b;
    
//     int ans = power(a,b);
//     cout<<ans;
//     return 0;
// }



// even odd 

// #include<bits/stdc++.h>
// using namespace std;

// bool isEven(int num){
//     if(num%2==0)return 1;

//     else return 0;
// }

// int main(){
//     int num;
//     cin>>num;

//     if(isEven(num))cout<<"EVEN NO";
//     else cout<<"ODD NO";

//     return 0;
// }



// NCR  or factorial

// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// int ncr(int a,int b){
//     int num = factorial(a);
//     int den = factorial(b) * factorial(a-b);

//     int ans = num/den;
//     return ans;
// }

// int main(){

//     int final = ncr(5,2);
//     cout<<final<<endl;

//     return 0;
// }



// PASS BY VALUE

// no change in the original num, copy jati h num ki 
// if we do pass by reference there will be change in num ----use & 

// #include<bits/stdc++.h>
// using namespace std;

// void passbyval(int num){
//     num++;
//     cout<<" THE NO IS :"<<num<<endl;
// }

// int main(){
//     int num;
//     cin>>num;

//     passbyval(num);

//     cout<<"THE VALUE OF NUM : "<<num;

//     return 0;
// }
