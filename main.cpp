// ------------------------------ARRAYS C++-----------------------------------------------


// arrays  taking array as input from user and shhowing output on screen

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] , i;
//     cout<<"Enter elements of array: ";
//     for( i=0;i<5;i++)
//     cin>>arr[i];

//     cout<<"Elements that you have entered in an array : "<<endl;


//     for(i=0;i<5;i++)
//     // printing index and elements of array

//     cout<<i<<"\t"<<arr[i]<<endl;
    
//     // Accessing Elements in the array

//     cout<<"Element at index 0 is :"<<arr[0]<<endl;
//     cout<<"Element at index 1 is :"<<arr[1]<<endl;
//     return 0;
// }

// write a program to take array element as input from user and print its square using function

// #include<iostream>
// using namespace std;

// Function for squaring the array
// Passing individual element
// int square(int array){

//     return array * array;

// }

// int main(){
//     int arr[5] , i;

//     cout<<"Enter elements to print square: "<<endl;
//     for(i=0;i<5;i++)
//     cin>>arr[i];
//     // Square of Elements of array

//     cout<<"Square of Elements of array"<<endl;
//     for(i=0;i<5;i++)
//     cout<<i<<"\t"<<square(arr[i])<<endl;
// }


// write a program that prints average of elemets of array

// #include<iostream>
// using namespace std;

// int average(int array[]){
//     int sum = 0;
//     for(int i=0;i<5;i++)
//     sum += array[i];
//     int avg = sum/5;
//     return avg;
// }
// int main(){

//     int arr[5]={1,2,3,4,5} , i;
//     cout<<"average of array is :"<<endl;
//     cout<<average(arr);
//     return 0;
// } 

// Take input array from user of size 5 in a function. Display the array in reverse order using another function.



// #include<iostream>
// using namespace std;

// void Initialize_array(int array[]){
//     cout<<"Enter an array: ";
//     {
//         for(int i=0 ; i < 5; i++)
//         cin>>array[i];
//     }

// }
// void reverse_array(int array[]){
    
//     for(int i =4; i >=0 ; i--)
//     {
//         cout<<array[i];
//     }
// }
// int main(){

//     int number[5];
//     Initialize_array(number);
//     reverse_array(number);

//     return 0;

// }

// Write a c++ program to take input array from user of size 5 in a function. Create another function titled Largest to
// display the largest number along with its index in the array.

// #include<iostream>
// using namespace std;

// void Input_array(int array[]){
//     cout<<"Enter an array: "<<endl;
    
//     for(int i = 0 ; i < 5 ; i++){
//         cin>>array[i];
//     }
// }
// void Largest_element(int array[]){
//     int max=array[0] , i;
//     for(i=0 ;i < 5 ;i++){
//         if (array[i]>max)
//            max = array[i];
//     }
//     cout<<"The maximum element in array: "<<max;
// }
// int main(){
//     int array[5];
//     Input_array(array);
//     Largest_element(array);
//     return 0;
// }

// Write a c++ program that takes input of 10 integer numbers from user and stores them in an array using a function.
//  Create another function titled SearchArray to search an
// integer taken from user in this array and display it’s all locations.

#include<iostream>
using namespace std;


void Input_array(int array[] , int num){

  cout<<"Enter an array: ";

      for(int i=0 ; i < num; i++)

       cin>>array[i];
     
}
void SearchArray(int array[], int num){
    int i , number ,found=-1;
    cout<<"Enter a number: "<<endl;
    cin >> number;
    for(i=0; i < num ; i++)

    {
        if (number == array[i])
        cout<<"The number you have entered is at index: "<<i<<endl;
        found = 1;
        break; 
    }
 
        cout<<"The number you have entered is not in array";
   
    
   
}
int main(){
    int array[10];

    int n = 10;
    Input_array(array , n);
    SearchArray(array , n);
}

