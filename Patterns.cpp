//SQUARE PATTERN 1234\n1234
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j ;
        }
        cout<<"\n";
    }
    return 0;
}

-------------------------------

//Stars in Square
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*" <<" ";
        }
        cout<<"\n";
    }
    return 0;
}

--------------------------------

// Character ABCD\nABCD
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        char a = 'A';
        for (int j = 0; j < 4; j++)
        {
            cout << a;
            a += 1;
        }
        cout << "\n";
    }
    return 0;
}

----------------------------------

// 123\n456\n789
#include <iostream>
using namespace std;
int main()
{
    int n=3;
    int a=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a<<" ";
            a += 1;
        }
        cout << "\n";
    }
    return 0;
}

-----------------------------------

//Triangle pattern (star)
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        cout << "\n";
    }
    return 0;
}  

-------------------------------------

//Triangle (numbers) 1\n22\n333\n4444
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<i;
        }
        cout << "\n";
    }
    return 0;
}

-------------------------------

//Triangle (numbers) 1\n12\n123\n1234
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        cout << "\n";
    }
    return 0;
}

------------------------------------

//Reverse Triangle pattern
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for (int i = 1; i<=n; i++)
    {
        for (int j =i; j >=1; j--)
        {
            cout<<j;
        }
        cout << "\n";
    }
    return 0;
}

--------------------------------

//Floyd's Triangle
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num+=1;
        }
        cout<<"\n";
    }
    return 0;
}

---------------------------------

// Inverted Triangle pattern (11111\n2222\n333\n44\n5)
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << (i+1);
        }
        cout << "\n";
    }
    return 0;
}

--------------------------------------

//Pyramid Triangle
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int num=1;
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

--------------------------------------

// Hollow Diamond Pattern
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
