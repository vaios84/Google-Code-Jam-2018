// Vaios Stergiopoulos

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	/*
	 * If the synchronization is turned off, the C++ standard streams are allowed 
	 * to buffer their I/O independently, 
	 * which may be considerably faster in some cases. 
	 */
	
	std::ios_base::sync_with_stdio(false);
	
	int t, n, temp, f, index;
	cin >> t; // read t = the test cases number
	 
	for (int i = 1; i <= t; ++i) {
		
		//cout << "tc = " << i << endl;
		cin >> n ; // read n = numbers.
		
		vector <int> v;
		
		for(int x=0; x<n; x++){
			
			cin >> temp;
			v.push_back(temp);
			
			}
			
			
		/*
		// print the vector
		cout << "vector at the beginninng " << endl;
		for(int x=0; x<n; x++){
			
			
			cout << v[x] << " ";
			
			}
		
		cout << endl;
	   */
	   
	   // TroubleSort
		temp=0;
		bool done=false;
		while(!done){
			done = true;
			for(int j=0; j<v.size()-2; j++){
				if(v[j]>v[j+2]){
					done=false;
					temp=v[j];
					v[j]=v[j+2];
					v[j+2]=temp;
				}
			
			}	
			
		}
		
		/*
		// print the vector
		cout << "vector after TroubleSort" << endl;
		for(int x=0; x<n; x++){
			
			
			cout << v[x] << " ";
			
			}
		
		cout << endl;
		*/
		
		// check if the vector is in ascending order
		f=1;
		index=0;
		for(int j=1; j<v.size();j++){
			
			if(v[j-1] > v[j]) {
					index = j-1;
					f=0; // error then we will print the errors index 
					break;
				}
			
		}
		
		if (f) cout << "Case #" << i << ": " << "OK" << endl;  
		else cout << "Case #" << i << ": " << index << endl;  
		v.clear();
    
	}
	
	return 0;
}
