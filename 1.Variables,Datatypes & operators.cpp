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

