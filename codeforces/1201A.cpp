#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    // Read student answers
    vector<string> answers(n);
    for (int i = 0; i < n; i++) {
        cin >> answers[i];
    }
    
    // Read points for each question
    vector<int> points(m);
    for (int i = 0; i < m; i++) {
        cin >> points[i];
    }
    
    int totalScore = 0;
    
    // For each question, find the most frequent answer
    for (int j = 0; j < m; j++) {
        map<char, int> count;
        
        // Count frequency of each answer for current question
        for (int i = 0; i < n; i++) {
            count[answers[i][j]]++;
        }
        
        // Find the most frequent answer
        int maxFreq = 0;
        for (auto& pair : count) {
            maxFreq = max(maxFreq, pair.second);
        }
        
        // Add to total score (max frequency * points for this question)
        totalScore += maxFreq * points[j];
    }
    
    cout << totalScore << endl;
    return 0;
}