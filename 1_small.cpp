// Hey, Gaurav, this is Jaydev.
#include<bits/stdc++.h>
using namespace std;

bool compare(const vector<int> &v1 , const vector<int> &v2){
    if(v1[0]==v2[0]){
        if(v1[1]==v2[1]){
            return v1[2] < v2[2];
        }
        return v1[1] > v2[1];
    }
    return v1[0]<v2[0];
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("TWSP_small.txt","r",stdin);
    freopen("output_small.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    vector<vector<int>> input;

    for(int i=0;i<n;i++){

        vector<int> raw;
        for(int j=0;j<3;j++){
            int temp;
            cin >> temp;
            raw.push_back(temp);
        }
        input.push_back(raw);
    }

    sort(input.begin(),input.end(),compare);

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout << input[i][j] << " ";

        }
        cout << endl;
    }


    

}
