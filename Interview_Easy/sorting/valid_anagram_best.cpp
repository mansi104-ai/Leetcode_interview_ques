class Solution{
    public :
        bool isAnagram(string s , string t){
            if (s.length()!= t.length()){
                return false;
            }
            uint32_t a[26]={0};
            uint32_t b[26]={0};
            for(uint32_t i=0;i<s.length();i++){
                a[s[i]-97]++;
                b[t[i]-97]++;
            }
            for(uint32_t i=0;i<s.length();i++){
                if(a[s[i]-97]!= b[s[i]-97]){
                    return false;
                }
            }return true;
        }
};