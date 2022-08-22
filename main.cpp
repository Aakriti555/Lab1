#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
    linkedlist node1;
    cout<<"Q. NO. 1 \n";
    node1.isEmpty() ? cout << "The list is empty" <<endl: cout << "The list is not empty" << endl;

cout<<"Q. NO. 2 \n";
    node1.addtohead(8);
    node1.addtohead(7);
    node1.addtohead(3);
    cout<<"AFTER ADTOHEAD()"<<endl;
    node1.traverse();

cout<<"Q. NO. 3 \n";
    node1.addtotail(7);
    cout<<"AFTER ADDTOTAIL()"<<endl;
    node1.traverse();
    
cout<<"Q. NO. 4 \n";
    Node *input =node1.retrieve(7);
    node1.add(88,input);
    cout<<"AFTER ADD(data,predecessor)"<<endl;
    node1.traverse();
    
cout<<"Q. NO. 5 \n";
    node1.removefromhead();
    cout<<"AFTER removedfromhead()"<<endl;
    node1.traverse();
    

    node1.removefromtail();
    cout<<"AFTER removedfromtail()"<<endl;
    node1.traverse();
    
cout<<"Q. NO. 6 \n";
    node1.remove(8);
    cout<<"AFTER remove(data)"<<endl;
    node1.traverse();

cout<<"Q. NO. 7 \n";
    Node *input1 =node1.retrieve(88);
    cout<<"AFTER retrieve(data) \n Adress of the data is "<<input1<<endl;
    node1.traverse();

 cout<<"Q. NO. 8 \n";  
    node1.search(8)?cout<<"The data is present \n":cout<<"the data is not present\n";
    cout<<"AFTER search(data)"<<endl;
    node1.traverse();

cout<<"Q. NO. 9 \n";   
    cout<<"AFTER transverse()"<<endl;
    node1.traverse();
}