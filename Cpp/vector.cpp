# include <iostream>
# include <vector>
using namespace std;

int main() {

     vector<string> cars = {"mca","first"};
  vector <int> vc={2,3,4};
     
     vc.push_back(30);
     for(int i=0;i<vc.size();i++)
     cout<<vc[i]<<endl;


      vc.pop_back();
        for(int i=0;i<vc.size();i++)
     cout<<vc[i]<<endl;

    for  (string car: cars) {
        cout<< car <<endl;
    }





return 0;
}