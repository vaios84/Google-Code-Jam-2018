// Vaios Stergiopoulos


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	double A, theta, fi, ang, xcoord, ycoord;
	
	cin >> t; // read t = the test cases number
	 
	for (int i = 1; i <= t; ++i) {
    cin >> A; // read A area of shadow
   
   if (A==1.0000000){
	    cout << "Case #" << i << ":" <<endl;
	    cout  << "0.5 0 0" << endl;
		cout << "0 0.5 0" << endl;
		cout << "0 0 0.5" << endl;
	   
	   continue;
	   }
   
    // because area = a*b and a=1 => area A=b side
    // m=b/2 that is m =A/2
  
    theta = acos(A/1.414213); // sqrt(2) = 1.414213 and it is the diagone of the cube if we use pithagoreio theorima
    
    //cout << "theta = " << std::setprecision(16) << theta << endl; // in radians 
    
    fi = 0.785398163; // 0.785398163 radians = 45 degrees (apo isosceles trigwno)
    ang = theta+fi; // in radians 
    
    ycoord = 0.5 * sin(ang); // y coord of center
    
    xcoord = 0.5 * cos(ang); // x coord of center
    
    cout << "Case #" << i << ":" <<endl;
    
    cout <<  std::setprecision(16) << (-1)*xcoord << " " << ycoord << " 0" << endl;
    cout <<  std::setprecision(16) << ycoord << " " << xcoord << " 0" << endl;
    cout <<  std::setprecision(16) << "0 0 0.5" << endl;
      
  }
  
	return 0;
}
