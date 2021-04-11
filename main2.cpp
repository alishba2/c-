// SORTING------------------------------------------------------
// SELECTION SORT
// FIND THE SMALLEST ELEMENT AND SWAP WITH THE ELEMENT AT BIGINING OF ARRAY


// #include<iostream>
// using namespace std;

// void Input_array(int Array[]){
//     int i;
//     cout<<"Enter elements of array:"<<endl;
//     for(i=0 ; i < 6; i++){
//         cin>>Array[i];
//     }
// }

// void sorted_array(int Array[]){
//     int n,  i , temp,j;
//     n=6;
//     for(i=0; i < n-1; i++){
//         int sort=i;

//         for(j=i+1;j < n ; j++)

//         if(Array[j] < Array[sort])

//         sort = j;

//         if(sort!=i){
//             temp = Array[i];
//             Array[i] = Array[sort];
//             Array[sort] = temp;

//         }
//     }
// }

// void Display_array(int Array[]){
//     int i;
//     for(i=0 ; i < 6 ; i++)
//     cout<<Array[i]<<" ";
// }
// int main(){
//    int  array[6];
//     Input_array(array);
//     sorted_array(array);
//     Display_array(array);
//     return 0;
// }

// TWO DIMENTIONAL ARRAY

// WRITE A PROGRAM TO DECLARE TWO DIMENTIONAL ARRAY



// #include <iostream>
// using namespace std;
 
// int main()
// {
//     int x[3][3] = {{0,1,2}, {3,4,5}, {6,7,8}};
  
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << "Element at x[" << i
//                  << "][" << j << "]: ";
//             cout << x[i][j]<<endl;
//         }
//     }
  
//     return 0;
// }