
/*#include <iostream>
using namespace std;
void duplicate (int a, int b, int c) {
    a*=2;
    b*=2;
    c*=2;
}
int main(){
    int x=1, y=3, z=7;
    duplicate(x,y,z);
    cout<< "x= "<< x<< " ,y= "<< y<< " ,z="<<z;
   
    return 0;
} */


/*#include <iostream>
using namespace std;
string concatenate( const string& a,const string& b){
    return a+b;
}
int main(){
   string a= "hi";
   string b= "bye";
   string result= concatenate(a,b);
   cout<< result;  
} */

/*#include <iostream>
using namespace std;
void odd(int x);
void even(int x);
int main(){
    int i;
    do{
        cout<< "please enter a number(0 to exit):";
        cin>> i;
        odd(i);
    }while (i!=0);
    return 0;
            
    }
void odd (int x)
{
    if ((x%2)!=0) cout<< "It is odd.\n";
    else even(x);       
}
void even(int x)
{
    if ((x%2)==0) cout<< "It is even.\n";
    else odd(x);
}*/

#include <iostream>
using namespace std;
int main(){
    int n=5;
    int factorial=1;
    
for (int i=1; i <= n; i++)  {
    factorial*=i;
}
    cout<< "The factorial of "<< n<< "is: "<< factorial;

}

