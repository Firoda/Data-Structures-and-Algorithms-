#include <bits/stdc++.h>

using namespace std;

// Complete the averageOfTopEmployees function below.
void averageOfTopEmployees(vector<int> rating) {
    double avg = 0;
    int count = 0;
    for(int i=0;i<rating.size();i++)
    {
        if(rating[i]>=90)
        {avg+=rating[i]; count++;}
        
    }
    
    cout.precision(2);
    cout << fixed << avg/count;

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> rating(n);

    for (int rating_itr = 0; rating_itr < n; rating_itr++) {
        int rating_item;
        cin >> rating_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        rating[rating_itr] = rating_item;
    }

    averageOfTopEmployees(rating);

    return 0;
}
