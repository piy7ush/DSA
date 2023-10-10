// SELECTION SORT    smallest element leke right place pr rakhe ge


#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int mini =i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[mini])mini =j;
        }
        swap(arr[i],arr[mini]);
    }
}

int main(){
    int arr[5]={5,1,4,2,8};
    int size =5;
    sort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}




// BUBBLE SORT     largest element leke usko last me place kare ge


// #include<bits/stdc++.h>
// using namespace std;

// void sort(int arr[],int size){

//     for(int i=1;i<size;i++){
//         for(int j=0;j<size-1;j++){
//             if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
//         }
//     }
// }

// int main(){
//     int arr[5]={5,1,4,2,8};
//     int size =5;
//     sort(arr,size);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";

//     }


//     return 0;
// }




// INSERTION SORT   1st element ko sorted mane ge bakki ko compare kare ge uske chota huva to left me nhi to right me


// #include<bits/stdc++.h>
// using namespace std;

// void sort(int arr[],int size){
//     for(int i=1;i<size;i++){
//         int temp = arr[i];
//         int j = i-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else break;
//         }
//       arr[j+1]=temp;
//     }
// }

// int main(){
//     int arr[5]={5,1,4,2,8};
//     int size =5;
//     sort(arr,size);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";

//     }
//     return 0;
// }