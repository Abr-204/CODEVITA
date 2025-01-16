#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

double dst(const vector<tuple<double,double,double>>pts,int n){
    double tot_dst=0.0;
    for(int i=0;i<n-1;i++){
        double x1 = get<0>(pts[i]);
        double y1 = get<1>(pts[i]);
        double z1 = get<2>(pts[i]);

        double x2 = get<0>(pts[i + 1]);
        double y2 = get<1>(pts[i + 1]);
        double z2 = get<2>(pts[i + 1]);
        double leg_dst=0.0;
        if(z1==z2){
            double r=sqrt(x1-x2)+sqrt(y1-y2);
            leg_dst=(M_PI*r)/3;
        }
        else{
            leg_dst=abs(x1-x2)+abs(y1-y2);
        }
        tot_dst+=round(leg_dst*100)/100.0;
    }
    return tot_dst;
}

int main() {
	int n;
    cin >> n;

    vector<tuple<double, double, double>> pts(n);
    for (int i = 0; i < n; ++i) {
        double x, y, z;
        cin >> x >> y >> z;
        pts[i] = make_tuple(x, y, z);
    }

    double tot_dst = dst(pts,n);
    cout << fixed << setprecision(2) << tot_dst << endl;

    return 0;

}
