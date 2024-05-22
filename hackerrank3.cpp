//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main() {
//    int a,b;
//    // Complete the code.
//    cin>>a>>b;
//    for(int i=0;i<1;i++)
//    {
//        switch(a)
//        {
//            case 1:cout<<"one"<<endl;
//            case 2:cout<<"two"<<endl;
//            case 3:cout<<"three"<<endl;
//            case 4:cout<<"four"<<endl;
//            case 5:cout<<"five"<<endl;
//            case 6:cout<<"six"<<endl;
//            case 7:cout<<"seven"<<endl;
//            case 8:cout<<"eight"<<endl;
//            case 9:cout<<"nine"<<endl;
//        }
//    }
//    if(a%2==0)
//    {
//        cout<<"even";
//    }
//    else 
//    {
//        cout<<"odd";
//    }
//    cout<<endl;
//    if(b%2==0)
//    {
//        cout<<"even";
//    }
//    else 
//    {
//        cout<<"odd";
//    }
//    return 0;
//}

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    // Complete the code.
    cin>>a>>b;
     for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1: cout << "one" << endl; break;
                case 2: cout << "two" << endl; break;
                case 3: cout << "three" << endl; break;
                case 4: cout << "four" << endl; break;
                case 5: cout << "five" << endl; break;
                case 6: cout << "six" << endl; break;
                case 7: cout << "seven" << endl; break;
                case 8: cout << "eight" << endl; break;
                case 9: cout << "nine" << endl; break;
            }
        } else {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}

