
#include<iostream>
#include<vector> // need to declare the vector header file 
using namespace std;
int main()
{
    //vector <int> v1 {10,20,30}; // will creating vector no need to specifies the no. of blocks
    //NOTE: the capacity of the vector before the initialize is set to default 1 but, now we have initialize 
    //the vector to 3 so the vector will set the capacity to 3 not to 1. It grow in the way 3,6,12,24...
    /*  More vector declarations 
    vector <int> v1; // This will create zero length vector

    vector <char> cv(5);
        - Creates a 5 element char vector 
    vector <char> cv(4,'a'); 
        -Initialize 4 element char vectoe with 'a'
    push_back 
        push_back is a member function, which can be used to add value to the vector at the end.
    pop_back()
        removes last element from the list        
    size()
        it return the number of element currently in the vector    
    clear()
        clear the element in the vector
    at()
        it return the i index given to at(10);
     front()
        first element 
    bacK()
        last element           
*/
   // vector <int> v1;
   // cout<<"Current capacity is "<<v1.capacity()<<endl; // shows the number of element a vector can hold before it doubles it.
   // v1.push_back(10);
   // cout<<"Current capacity is "<<v1.capacity()<<endl;    
   // v1.push_back(20); // here the current capacity will be 2 next capacity will be double to 4
   // cout<<"Current capacity after 2nd push_back is "<<v1.capacity()<<endl;
   // v1.push_back(30);
   // cout<<"current capacity after 3rd push_back is  "<<v1.capacity()<<endl; // Here 4 is going to printed

  
/*cout<<"current capacity is "<<v1.capacity()<<endl;
v1.pop_back();
cout<<"after pop\n";  //pop will remove the last element from the list,capacity is same
cout<<"Current capacity is "<<v1.capacity()<<endl;
v1.pop_back();
cout<<"Current capacity is "<<v1.capacity()<<endl;
v1.pop_back();
cout<<"After 3rd pop\nCurrent capacity is "<<v1.capacity()<<endl;
cout<<"The total No. of element in the vector are\n"<<v1.size()<<endl;
cout<<"The elements are:\n";
for(int i=0; i < v1.size(); i++){
    cout<<v1[i]<<endl;
}
v1.clear(); // element in vector now clear
cout<<"Current capacity is "<<v1.capacity()<<endl;
cout<<"Total element are "<<v1.size()<<endl;
cout<<"Current capacity is "<<v1.capacity()<<endl;
*/
 
  vector <int> v1;
    cout<<"current capacity is "<<v1.capacity()<<endl;
    for(int i=0; i<=9; i++){
        v1.push_back(10*(i+1)); }
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<endl;
    }
    cout<<"\n\n";
    vector <int> :: iterator it=v1.begin(); 
    /* This will point to first element iterator has begin and end fun. */
    v1.insert(it+3,35);
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<endl;
    }
}
