// SELECTON SORT       1st position pr sahi element leke aaye ge smallest element leke usko uski right place pr place kara denge
//  n-1 comparisions

// #include<bits/stdc++.h>
// using namespace std;

// void selectionsort(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         int mini =i;
//         for(int j =i+1;j<size;j++){
//             if(arr[j]<arr[mini])mini = j;
//         }
//         swap(arr[i],arr[mini]);
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

//     selectionsort(arr,size);
//     print(arr,size);

//     return 0;
// }



// BUBBLE SORT      compare kare ge sabhi me aur swap karte chale ge aur largest element ko last me bhej denge   

// #include<bits/stdc++.h>
// using namespace std;

// void bubblesort(int arr[],int size){
//     for(int i=1;i<size;i++){
//         for(int j=0;j<size-1;j++){
//             if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
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
//     int arr[7] = {2,4,1,6,7,8,10};
//     int size = 7;
//     bubblesort(arr,size);
//     print(arr,size);

// }



// INSERTION SORT

// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void insertionsort(int arr[],int size){
//     for(int i=1;i<size;i++){
//         int temp = arr[i];
//         int j=i-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp)arr[j+1] = arr[j];
//             else break;
//         }
//         arr[j+1]=temp;
//     }
// }

// int main(){
//     int arr[5] = {1,4,3,2,8};
//     int size =5;

//     insertionsort(arr,size);
//     print(arr,size);

//     return 0;
// }



// priority_queue<int>maxi;
// maximum element upper rahe ga


// priority_queue<int, vector<int>, greater<int>> mini;
// minimum element upper rahe ga