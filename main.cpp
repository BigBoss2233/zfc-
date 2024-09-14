#include <bits/stdc++.h>

using namespace std;

void Zoko() {
    srand(time(NULL));
    ///#1
    /*int n;
    cin >> n;
    int a[n];
    for (int i = 0;i < n;i++) {
        a[i] = 2 + (rand() % 103);
    }
    int mn = 104, mni=0;

    for (int i = 0;i < n;i++) {
        mn = 104;
        for (int j = i;j < n;j++) {
            if (a[j] < mn) {
                mn = a[j];
                mni = j;
            }
        }
        swap(a[i], a[mni]);
    }
        cout << endl;
    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
    */

    ///#2
    /*
    int n;
    cin >> n;
    int a[n];
    for (int i = 0;i < n;i++) {
        a[i] = (rand() % 100);
    }
    int mx = 0, mxi=0;
    for (int i = 0;i < n;i++) {
        mx = 0;
        for (int j = i;j < n;j++) {
            if (a[j] > mx) {
                mx = a[j];
                mxi = j;
            }
        }
        swap(a[i], a[mxi]);
    }
        cout << endl;
    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
    */
    ///#3
    setlocale(LC_ALL, "");
    int n1 = 150;
    float f = 15.933;
    short n2= 250;
    cout << "n1 = " << n1 <<"\n";
    cout << "f = " << f << "\n";
    cout << "n2 = " << n2 << "\n";
    int d=11,m=4,y=2005;
    cout<<"Моя дата рождения: "<< d <<" "<<m<<" "<<y<< "года.\n";
    int const a=2,b=3;
    string s="WINDOWS";
    cout<<a<<" "<<b;

}


int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        Zoko();
    }
    return 0;
}
