#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;


 //Do some stuff with L1, L2, ...
 // ...
 cout<<"list has in "<< L1.size();
 L1.insert(4,1);
 cout<<endl<<"list has in "<<L1.size();
 L1.insert(7,1);
 cout<<endl<<"list has in "<<L1.size();
 L1.insert(14,2);
 cout<<endl<<"list has in "<<L1.size()<<endl;
 //read elements from the list
 
L1.getElements();

cout<<"\n"<<L1.getElement(3);
L1.clear();
cout<<"\n"<<L1.size();
cout<<endl;
}
