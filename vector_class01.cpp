#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    // 23m-57s

      int a[4];
    vector<int> v;
    v.push_back ( 2 );
    v.push_back ( 3 );
    v.push_back ( 5 );
    v.push_back ( 6 );
    cout << v[2] << " " << v[3] << endl;

    // 24m-49s
     int a[4];
    vector<int> v;
    v.push_back ( 2 );
    v.push_back ( 3 );
    v.push_back ( 5 );
    v.push_back ( 6 );
    cout << v[2] << " " << v[3] << endl;
    v[1] = 11;
    v[2] = 10 * v[2];
    cout << v[1]<< " "<< v[2] << " " << v[3] << endl;

    // 30-18s
    int a[4];
    vector<int> v;
    v.push_back ( 2 );
    v.push_back ( 3 );
    v.push_back ( 5 );
    v.push_back ( 6 );
    v[1] = 11;
    v[2] = 10 * v[2];
    cout << v[1]<< " "<< v[2] << " " << v[3] << endl;

    v.push_back ( 1 );
    v.push_back ( 4 );
    v.push_back ( 7 );
    v.push_back ( 8 );

    cout << v.size() << endl; // vector size count 
    for (int i = 0; i < v.size(); i++) cout << v[i] << " "; // print vector
    cout << endl;

    // 32-09s
    // vector input and output 

    int n;
    vector<int> v;
    v.push_back ( 2 );
    v.push_back ( 3 );
    v.push_back ( 5 );
    v.push_back ( 6 );

    v.push_back ( 1 );
    v.push_back ( 4 );
    v.push_back ( 7 );
    v.push_back ( 8 );

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a ;
        cin >> a;
        v.push_back(a);
    }

    cout << v.size() << endl; // vector size count 
    for (int i = 0; i < v.size(); i++) cout << v[i] << " "; // print vector
    cout << v.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // 34m-25s
    
    // vector input and output 

    int n;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    vector<int> v = {2,3,4,5};
    cout << v.size() << " " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        int a ;
        cin >> a;
        v.push_back(a);
        cout << v[i] << " " ;
    }

    cout << v.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }


    cout << endl;

    // 36m-14s
    
    vector<int> v = {2,3,4,5,6};
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    // 39m-10s

    vector<int> v = {2,3,4,5,6};
    v.clear();
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;


    vector<int> a = {2,3,4,5,6};
    a.clear();
    cout << a.empty() << endl;

    v = {3,4};
    cout << v.empty() << endl;

  //
   vector<int> v = {2,3,4,5,6};
    v.clear();
    cout << v.size() << endl;
    vector<int> v = { 2,3,4,5};
    v.resize(10);

    vector<int> a = {2,3,4,5,6};
    a.clear();
    cout << a.empty() << endl;
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    v = {3,4};
    cout << v.empty() << endl;

    // 
    int n;
    cin >> n;
    vector <int> v(n);

    vector<int> v = { 2,3,4,5};
    v.resize(10);

    for (int i = 0; i < v.size(); i++)
    {
            cin >> v[i];
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }

    cout << endl;    
    //

    int n;
    cin >> n;
    vector <int> v(n);

    vector<int> v(10,-1);

    for (int i = 0; i < v.size(); i++)
    {
            cin >> v[i];
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
        cout << v[i] << " ";
    }
    cout << endl;    

    // 
     vector<int> v(10,-1);
    vector<int> v = {2, 3, 4, 5};
    vector<int> tmp;
    tmp = v;

    cout << tmp.size() << endl;
    for (int i = 0; i < tmp.size(); i++)
    {
        cout << tmp[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
            cout << v[i] << " ";
    }
    cout << endl;
    
    //
    // *** 1hr-0m-36s;

    vector<int> v = {2, 3, 4, 5};
    vector<int> tmp;
    tmp = v;

    cout << tmp.size() << endl;
    for (int i = 0; i < tmp.size(); i++)
    vector<int> v = {2,3,4,5,6,7,8};

    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << tmp[i] << " ";
        cout << *it << " ";
    }
    cout << endl;

    // // 1hr-4m-25s
    vector<int> v = {2,3,4,5,6};

    for(int u : v) cout << u+2 << " ";
    cout << endl;

    // // *** 1h-6m-36s

    vector<int> v = {2,3,4,5};

    for(auto u :  v) cout << u << " ";

    cout << endl;


    // 1hr-14m-00s

    int n;
    vector<int> v;

    while (cin >> n)
    {
        if(n == 0) break;
        v.push_back( n );
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
            cout << v[i] << " ";
        cout << v[i] << " ";
    }
    cout << endl;

    //
    // *** 1hr-0m-36s;

    vector<int> v = {2,3,4,5,6,7,8};

    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // // 1hr-4m-25s
    vector<int> v = {2,3,4,5,6};

    for(int u : v) cout << u+2 << " ";
    vector<int> v = {6,1,2,5,2,4,3,6,3,2};
    sort(v.begin(), v.end()); // O(nlog2(n))
    for(auto u : v) cout << u << " ";
    cout << endl;

    // // *** 1h-6m-36s

    vector<int> v = {2,3,4,5};


    for(auto u :  v) cout << u << " ";

    cout << endl;


    // 1hr-14m-00s

    int n;
    vector<int> v;

    while (cin >> n)
    {
        if(n == 0) break;
        v.push_back( n );
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

   //
     vector<int> v = {6,1,2,5,2,4,3,6,3,2};
    sort(v.begin(), v.end()); // O(nlog2(n))
    sort(v.begin()+2, v.begin()+5); // O(nlog2(n))
    for(auto u : v) cout << u << " ";
    cout << endl;
    //
     vector<int> v = {6,1,2,5,2,4,3,6,3,2};
    sort(v.begin()+2, v.begin()+5); // O(nlog2(n))
    sort(v.begin(), v.end(), greater<int>()); // O(nlog2(n))
    for(auto u : v) cout << u << " ";
    cout << endl;

    //
    vector<int> v = {6,1,2,5,2,4,3,6,3,2};
    sort(v.begin(), v.end(), greater<int>()); // O(nlog2(n))
    sort(v.rbegin(), v.rend()); // O(nlog2(n))
    for(auto u : v) cout << u << " ";
    cout << endl;
    //
    vector<int> v = {6,1,2,5,2,4,3,6,3,2};
    sort(v.rbegin(), v.rend()); // O(nlog2(n))
    vector<int> v = {4,1,3,5,2};
    reverse(v.begin(), v.end()); // O(nlog2(n))
    for(auto u : v) cout << u << " ";
    cout << endl

    //
    vector<int> v = {4,1,3,5,2};
    reverse(v.begin(), v.end()); // O(nlog2(n))

    // 1hr-43m-36s
    vector<int> v = {2,3,4,5};
    cout << *v.begin() << endl;
    v.erase (v.begin()+2);
    v.pop_back();

    cout << v.size() << endl;
    for(auto u : v) cout << u << " ";
    cout << endl;




     // 1hr-39m-54s
    cout << " erase 1st element" << endl ;
    vector<int> v = {2,3,4,5};

    v.erase (v.begin()) ;
    for(auto u : v) cout << u <<" ";

    // 1hr-39m-54s
    cout << " erase 1st element" << endl ;
    vector<int> v = {2,3,4,5};

    v.erase (v.begin()) ;
    for(auto u : v) cout << u <<" ";


    // 1hr-35m-12s

     vector<int> v = {2,3,4,5};

    cout << v.back() << endl; // O(1);

    v.pop_back();
    cout << v.back() << endl;
    cout << "print first element" << endl;
    cout << *v.begin() << endl; //O(1);


    //  // 1hr-35m-52s
    int a[] = {2,3,1};

    sort(a, a+3, greater<int>());
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }

    // 1hr-43m-36s
    vector<int> v = {2,3,4,5};
    cout << *v.begin() << endl;
    v.erase (v.begin()+2);
    v.pop_back();

    cout << v.size() << endl;
    for(auto u : v) cout << u << " ";
    cout << endl;




     // 1hr-39m-54s
    cout << " erase 1st element" << endl ;
    vector<int> v = {2,3,4,5};

    v.erase (v.begin()) ;
    for(auto u : v) cout << u <<" ";

    // 1hr-39m-54s
    cout << " erase 1st element" << endl ;
    // 1hr-46m-4s
    vector<int> v = {2,3,4,5};

    v.erase (v.begin()) ;
    for(auto u : v) cout << u <<" ";


    // 1hr-35m-12s

     vector<int> v = {2,3,4,5};

    cout << v.back() << endl; // O(1);

    v.pop_back();
    cout << v.back() << endl;
    cout << "print first element" << endl;
    cout << *v.begin() << endl; //O(1);


    //  // 1hr-35m-52s
    int a[] = {2,3,1};

    sort(a, a+3, greater<int>());
    for (int i = 0; i < 3; i++)
    reverse (v.begin(), v.end());
    while (!v.empty())
    {
        cout << a[i] << " ";
        cout << v.back() << " ";
        v.pop_back();
    }

    return;
