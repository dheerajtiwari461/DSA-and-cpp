#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int max_lead = 0;
    int winner = 0;
    int cumulative_score1 = 0;
    int cumulative_score2 = 0;
    
    for (int i = 0; i < N; i++) {
        int Si, Ti;
        cin >> Si >> Ti;
        
        cumulative_score1 += Si;
        cumulative_score2 += Ti;
        
        int current_lead = abs(cumulative_score1 - cumulative_score2);
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = (cumulative_score1 > cumulative_score2) ? 1 : 2;
        }
    }
    
    cout << winner << " " << max_lead << endl;
    return 0;
}