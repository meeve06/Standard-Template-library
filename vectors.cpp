#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
	// 1)creating a vector
	vector <int> v;
	
	// 2) inserting values in our vector
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	
	// 3) displaying elements using begin and end
	cout<<"output of front() and back() is\n";
	
	for(int j=0;j<v.size();j++)
	{
		cout<<v.at(j)<<" "<<"\n";
		
		
	}
	
	cout<<"the size of vector using size(): "<<v.size()<<"\n\n";
	cout<<"the capacity of vector using capacity(): "<<v.capacity()<<"\n\n";
	cout<<"the max_size of vector using max_size(): "<<v.max_size()<<"\n\n";
	
	//resizing the vector
	cout<<"the size of vector before resizing: "<<v.size()<<"\n\n";
	v.resize(5);
	cout<<"the size of vector after resizing: "<<v.size()<<"\n\n";
	
	// ways to access elements in a vector
	// 1) the conventional method
	cout<<"Using indexing v[]: "<<v[2]<<"\n\n";
	
	// 2) using the at operator
	cout<<"using at function at(): "<<v.at(2)<<"\n\n";
	
	// 3) using front() and back()
	cout<<"Output with front()--> "<<v.front()<<"\n\n";
	cout<<"Output with back()--> "<<v.back()<<"\n\n";
	
	//modifiers in vectors
	
	//1)assign()- it assigns new values and replaces the old ones
	v.assign(5,10);  // all values are assigned with 5 now
	cout<<"\n\n"<<"Output after using assign() function is:\n";
	for(int j=0;j<v.size();j++)
	{
		cout<<v[j]<<"\n";
		
		
	}
//	for(auto i=v.begin();i!=v.end();i++)
//	{
//		cout<<*i<<" ";
//	}

     v.push_back(15); 
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // removes last element 
    v.pop_back(); 
  
    // prints the vector 
    cout << "\nThe vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 5 at the beginning 
    v.insert(v.begin(), 5); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // removes the first element 
    v.erase(v.begin()); 
}
