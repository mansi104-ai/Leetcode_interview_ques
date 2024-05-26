class Solution {
public:
    string compressedString(string word) {
        int counter = 0;
        string comp;
        
        if(word.length() == 0){
            return "";
        }
        for(int i = 0; i < word.length(); i++){
            counter++;
            if(i == word.length()-1 ||word[i] != word[i+1]|| counter ==9){
                comp += to_string(counter) + word[i];
                counter = 0;
            }
        }
        return comp;
    }
};
