#include "StackLL.h"

	class Stack::Node{
		public:
			int data = 0;
			Node* link = nullptr;
		};
		
	Stack::~Stack()
{
    while(num_elements > 0)
      pop();
}

   int Stack::size(){
	   return num_elements;
	   };

   void Stack::push(int k){
	   //creates new node with value of int
	Node* newPtr = new Node{k};
	//if list is empty just have the front equal to new pointer
	   if (num_elements==0){
	   frontPtr = newPtr;
	   }else {
		newPtr ->link =frontPtr;
		frontPtr=newPtr;   
		   };
	      
	   num_elements++;
	   };

   void Stack::pop(){
	   Node * tmp = frontPtr;
	   frontPtr= frontPtr -> link;
	   delete tmp;
	   
	   num_elements--;
	   };

   int Stack::top(){
	   return frontPtr->data;
	   };

   void Stack::clear(){
	   
	   };
