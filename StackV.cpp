#include "StackV.h"
	
	
	int Stack::size(){
		return data.size();
		};

   void Stack::push(int k){
	   data.insert(data.begin()+0,k);
	   };

   void Stack::pop(){
	   data.erase(data.begin()+0);
	   };

   int Stack::top(){
	   return data[0];
	   };

   void Stack::clear(){
	   while (data.size() !=0)
	   data.erase(data.begin()+0);
	   };
