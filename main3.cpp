// characters and strings


//  C++ string to read a single word or embedded spaces
// #include<iostream>
// #include<ctype.h>
// using namespace std;

// int main()
// {
//     char str[100];
//     // cout<<"Enter a string"<<endl;
//     // cin >>str;                                     for reading a word 
//     // cout<<"You Entered :"<<str<<endl;

//     // cout<<"Enter another string:"<<endl;
//     // cin.get(str,100);                            for embedded spaces
//     // cout<<"You Entered :"<<str<<endl;
//     return 0;
// }

// For multiple lines:

// #include <iostream>
//  using namespace std;
//  const int MAX = 2000; //max characters in string
//  char str[MAX]; //string variable str
//  int main()
//  {
//  cout << "\nEnter a string:\n";
//  cin.get(str, MAX, '$'); //terminate with $
//  cout << "You entered:\n" << str << endl;
//  return 0;
// }

// string class

// #include<iostream>
// using namespace std;

// int main(){
//     string s1 , s2 ;
//     s1 = "This is string s1";
//     cout<<s1;
//     return 0;
// }

// string object getline

// #include<iostream>
// #include<iomanip>
// #include<string>

// using namespace std;
 
// int main(){
  

//     cout<<"Enter your name <first and last> ";
//     string name;
//     getline(cin , name , '$' );
//     string last_name;
//     getline(cin,last_name );
//     return 0;
// }

// Arrays of strings 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string array[7];

//     array[0]="Monday";
//     array[1]="Tuesday";
//     array[2]="Wednesday";
//     array[3]="Thursday";
//     array[4]="Friday";
//     array[5]="saturday";
//     array[6]="Sunday";

//     cout<<"DAYS OF WEEK: "<<endl;
//     for(int i = 1; i< 7 ; i++){
//         cout<<array[i]<<'\n';
//     }
//     return 0;
//     }

// string manipulation

// st.size(); to find the length of string


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string array[7];

//     array[0]="Monday";
//     array[1]="Tuesday";
//     array[2]="Wednesday";
//     array[3]="Thursday";
//     array[4]="Friday";
//     array[5]="saturday";
//     array[6]="Sunday";

//     cout<<"DAYS OF WEEK: "<<endl;
//     for(int i = 1; i< 7 ; i++){
//         cout<<array[i].size()<<'\n';
//     }
//     return 0;
//     }

// string compare method

// #include<iostream>
// using namespace std;

// int main(){
//     string str1 ("ABC Company");
//  string str2 ("ABC Co");
//  string str3 ("ABC Inc");
//  int result;

//  cout<<"Comapre Method Test 1."<<"Should return greater than\n";
//  result=str1.compare(str2);

//  cout<<"**str1.compare(str2) is: "

//  <<result<<endl;

//  cout<<"Comapre Method Test 2."
//  <<"Should return equal\n";

//  result=str1.compare(0,6,str2);

//  cout<<"**str1.compare(0,6,str2) is: "

//  <<result<<endl;
//  return 0;
// }

// string concatenation and appending string

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){

//     string str1("hello");
//     string str2("world");
//     string str3;

//     str3 = str1 + str2;
//     cout<<"concatenation of string: "<<str3<<endl;

//     str3.append(5,'!');

//     cout<<"append string"<<str3;

//     return 0;
    
// }