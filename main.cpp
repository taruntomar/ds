#include <iostream>
#include "Human.cpp"
#include "American.cpp"
#include "ds/linkedlist.cpp"

using namespace std;

int main(){

cout << "Hello World!\n";

Linkedlist list;
list.push(1);
list.push(2);
list.push(3);
list.push(4);

list.print();

Human human(1);
Human *human1 = new American(1);

return 0;


}