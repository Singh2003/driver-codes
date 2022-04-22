#include <iostream>
#include<iomanip>

#include<bits/stdc++.h>
using namespace std;

void solve (int opening_hh, int opening_mm, int duration_hh, int duration_mm) {
    // Your code goes here
     int h;
    int m;
    h=opening_hh+duration_hh;
    m=opening_mm+duration_mm;
   
    if(h>=24)
        h=h-24;
    if(m>=60)
    {m=m-60;
     h=h+1;
    }
    if(h>=24)
    h=h-24;
    
    if(h<10)
    h=00+h;
    if(m<10)
     m=00+m;
    
    std::cout<<setw(2)<<setfill('0')<<h<<"\t"<<setw(2)<<setfill('0')<<m;
    
  
    // Print the output here
}

// The main function reads the input in the required format.
// Just complete the solve function above.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        solve(a, b, c, d);
        cout << "\n";
    }
}
