#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string n;
    int a;
    cin  >> n >> a;

    string hh,mm;
    
        hh += n[0];
        hh += n[1];
        mm += n[3];
        mm += n[4];


    int init_min = stoi(hh) * 60 + stoi(mm);
    init_min += a;
    string h , m;

    if(init_min > 1440){
        init_min %= 1440;
        h = to_string((init_min /60)%24);
        
        m = to_string(init_min % 60);

        if(h.length() == 1){
            h= '0' + h;
        }
        if(m.length() == 1){
            m = '0' + m;
        }

        cout << h <<':'<<m << endl;
        return 0;
    }
    else{
        h = to_string( (init_min / 60 )%24);
        m = to_string(init_min % 60);

        if(h.length() == 1){
            h= '0' + h;
        }
        if(m.length() == 1){
            m = '0' + m;
        }

        cout << h <<':'<<m << endl;
        return 0;
    }

    return 0;
}