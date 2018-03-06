#include "StackL.h"
	
	int Stack::size(){
		return data.size();
		};

	void Stack::push(int k){
		data.insert(k,1);
		};
	
	void Stack::pop(){
		data.remove(1);
		};
		
	int Stack::top(){
		return data.getElement(1);
		};

	void Stack::clear(){
		data.clear();
		};
