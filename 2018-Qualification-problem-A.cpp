// Vaios Stergiopoulos

#include <bits/stdc++.h>

using namespace std;

int n, m, r;
string pr; // pr=program
int ans;
int D; // cd =current damage

int main()
{
	int len, flag; 
	int strength,cd;
	string pr; // pr=program
	string substring = "CS";
	cin >> m; // read m the test cases number
	 
	for (int x = 1; x <= m; ++x) {
		
		vector<int> v;
		//cout << "tc = " << x << endl;
		flag=0;		
		ans=0;
			
		cin >> D >> pr;
		
		pr.insert(pr.begin(),' '); // to work ok the find substring loop below
		
		len = pr.length();		
		
		// check current damage
		cd=0;
		strength=1;
		for(int i=0;i<len;i++){
				if(pr[i]=='S') cd+=strength;
				else if (pr[i]=='C')strength = 2*strength;
							
		}
		//cout << "cd = " << cd << endl;	
		if(cd<=D) {
							
				cout << "Case #" << x << ": "<< ans << endl;  
				continue;
		}
		
		
		
		size_t index = pr.find(substring);
		while (index!=string::npos) {
				
				v.push_back(index);
				index = pr.find(substring, index+1);
			}
		
		//cout << "v size = " << v.size() << endl;
		while(v.size()>0){
			
			
			if (flag==1) break;
			
			int pos = v.back();
			v.pop_back();
			
			while(1){
			
				pr[pos]='S';
				
				pr[pos+1]='C';
				
				ans++; // count the hacks (swaps)
				
				pos++; // pos points the character 'C'
				
				// check current damage
				cd=0;
				strength=1;
				for(int i=0;i<len;i++){
					if(pr[i]=='S') cd+=strength;
					else if (pr[i]=='C') strength = 2*strength;
							
				}
				
				//cout << "cd = " << cd << " D = " << D << endl;	
				
				if(cd<=D) {
							
				flag=1;
				break;
				}
								
				
				if(pr[pos+1]=='C' || (pos+1)==len) break;
				
			}
			
		}
		
		if(flag==1) cout << "Case #" << x << ": "<< ans << endl;  
		else cout << "Case #" << x << ": IMPOSSIBLE" << endl; 
  }
	
	return 0;
}
