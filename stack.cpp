#include <iostream>
#include<stack>
using namespace std;
void printStackElements(stack<int>stack){
  while(!stack.empty()){
  cout<<stack.top()<<endl;
  stack.pop();
  }
}
int main(){
//empty,size,push,pop, top
stack<int>numbersStack;
if(numbersStack.empty())
// cout<<"stack is empty"<<endl;
// cout<<"stack size = "<< numbersStack.size()<<endl;
printStackElements(numbersStack);
numbersStack.push(1);
numbersStack.push(2);
numbersStack.push(3);
numbersStack.pop();
numbersStack.pop();
numbersStack.pop();
  return 0;
}
