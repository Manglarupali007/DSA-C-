//Boilerplate Code
#include<iostream>
using namespace std;
int main(){
    return 0;
}

---------------------------
    
//Variables : containers to store data
#include<iostream>
using namespace std;
int main(){
int age=20;    
float marks=93.5;   
char grade='A';
string name="Aman";
cout<<age<<"\n";
cout<<marks<<"\n";
cout<<grade<<"\n";
cout<<name<<"\n";
return 0;
}

------------------------------

//size of datatypes - (Primitive Datatypes)
#include<iostream>
using namespace std;
int main(){
cout<<sizeof(int)<<"\n";        //output:4
cout<<sizeof(char)<<"\n";       //output:1
cout<<sizeof(float)<<"\n";      //output:4
cout<<sizeof(double)<<"\n";     //output:8
cout<<sizeof(bool)<<"\n";       //output:1
    return 0;
}

-----------------------------

// Type Casting : Converting data from one type to another
// 1.Conversion - implicit, from small datatype to big datatype
#include<iostream>
using namespace std;
int main(){
char grade='A';
int value=grade;
cout<<value;    //output: 65(ASCII VALUE)
return 0;
}

-----

//2.Casting - explicit, from big datatype to small datatype
#include<iostream>
using namespace std;
int main(){
double price=100.99;
int value=(int)price;
cout<<value;    //output: 100
return 0;
}

-------------------------------

//USER INPUT
#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    cout<<"Your age is "<<age;
    return 0;
}

-------------------------------

//OPERATORS 
// 1. Arithmetic
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    cout<<"sum: "<<(a+b)<<"\n";
    cout<<"difference: "<<(a+b)<<"\n";
    cout<<"product: "<<(a*b)<<"\n";
    cout<<"division: "<<(a/b)<<"\n";
    cout<<"modulus: "<<(a%b)<<"\n";
    return 0;
}

-----

// 2.Relational
#include <iostream>
using namespace std;
int main()
{
    cout << (3 < 5) << "\n";  
    cout << (3 > 5) << "\n";
    cout << (3 <= 5) << "\n";
    cout << (3 >= 5) << "\n";
    cout << (3 == 5) << "\n";
    cout << (3 != 5) << "\n";
    return 0;
}

-----

// 3.Logical
#include <iostream>
using namespace std;
int main()
{
    cout << !(3 < 1) << "\n"; //NOT
    cout << ((3 < 1) || (3 > 5)) << "\n"; //OR
    cout << ((3 < 1) && (3 > 5)) << "\n"; //AND
    return 0;
}

-------------------------------

//Unary operators
#include<iostream>
using namespace std;
int main(){
    int a=25;
    cout<<(a++)<<"\n";
    cout<<(++a)<<"\n";
    cout<<(a--)<<"\n";
    cout<<(--a)<<"\n";
    return 0;
}

-------------------------------

📝 PRACTICE

// 1.SUM OF TWO NUMBERS
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=15;
    int sum=a+b;
    cout<<sum;
    return 0;
}

-------------------------------

