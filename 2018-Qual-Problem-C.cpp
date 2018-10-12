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
	
	int t, A, x, y, targetx, targety, area, flag;
	cin >> t; // read t = the test cases number
	
	map<pair<int, int> , int> go; // it will be the 3x3 square of possible go choice
	 
	for (int i = 1; i <= t; ++i) {
		flag=0;
		cin >> A ; // read size of rectangle
		
		if(A==20){
			
			// set an un-prepared matrix 3x3 (value 0 =un-prepared  for all cells)
			targetx=10;
			targety=10;
			for(int i=9; i<=11; i++)
				for (int j=9; j<=11; j++)
					go[{ i, j }] = 0; 
			
			
			area=9;
			
			while(area){
				
				cout << targetx << " " << targety << endl;
				cin >> x >> y;
				
				if(x==-1 && y==-1) return -1;
				else if (x==0 && y==0) {
					flag=1;
					break;
					}
				
				if(go[{ x, y }] == 0) {
					go[{ x, y }] =1; // value 1 = mark a cell as prepared
					area--; // remove one cell from the total number of un-prepared cells
				}
					
			}
			
			if (flag==1) continue;
			
			targetx=10;
			targety=13;
			
			for(int i=9; i<=11; i++)
				for (int j=12; j<=14; j++)
					go[{ i, j }] = 0; 
			
			
			area=9;
			while(area){
				
				cout << targetx << " " << targety << endl;
				cin >> x >> y;
				
				if(x==-1 && y==-1)  return -1;
				else if (x==0 && y==0) {
					flag=1;
					break;
					}
				
				
				if(go[{ x, y }] == 0) {
					go[{ x, y }] =1; // mark as prepared
					area--;
				}	
			}
			
			
			if (flag==1) continue;
			
			targetx=10;
			targety=14;
			
			for(int i=9; i<=11; i++)
					go[{ i, 15 }] = 0; 
			
			area=3;
			while(area){
				
				cout << targetx << " " << targety << endl;
				cin >> x >> y;
				
				if(x==-1 && y==-1)  return -1;
				else if (x==0 && y==0) {
					flag=1;
					break;
					}
				
				
				if(go[{ x, y }] == 0) {
					go[{ x, y }] =1; // mark as prepared
					area--;
				}	
			}
			
			if (flag==1) continue;
				
		}
		
		
		else if(A==200) {
			targetx=10;
			targety=7;
			flag=0;
			
			// (go matrix) 22 * 9 (cells each go matrix) = 198 + 3 (a final column)
			int times =22;
			while(times){
				// set an un-prepared matrix 3x3
				targety += 3;
				for(int i=9; i<=11; i++)
					for (int j=targety-1; j<=targety+1; j++)
						go[{ i, j }] = 0; 
				
				area=9;
				while(area){
					cout << targetx << " " << targety << endl;
					cin >> x >> y;
					
					if(x==-1 && y==-1) return -1;
					else if (x==0 && y==0) break;
						
					
						if(go[{ x, y }] == 0) {
							go[{ x, y }] =1; // mark as prepared
							area--;
						}
						
					}
				

			}
			
			// set an un-prepared column
				targety++;
				int last = targety+1;
				for(int i=9; i<=11; i++)
					go[{ i, last }] = 0; 
			
			area=3;
			while(area){
				
				cout << targetx << " " << targety << endl;
				cin >> x >> y;
				
				if(x==-1 && y==-1)  return -1;
				else if (x==0 && y==0) break;
					
				if(go[{ x, y }] == 0) {
					go[{ x, y }] =1; // mark as prepared
					area--;
				}	
			}
			
		}
		
	}
	
	return 0;
}
