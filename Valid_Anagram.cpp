//first Solution using sort function 

class Solution {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin() , s.end());
        sort(t.begin() , t.end());


        if ( s == t){
            return true;
        }

        return false;
        
    }
};


//second Solution using ASCII code

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
            return false;


        vector <int> freq (26 , 0);

        for ( int i = 0 ; i <s.length() ; i++) {

            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }


        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
                return false;
        }
        return true;
    
    }
};

//third Solution using map

class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        int map[]=new int[26];
        for(char x : s.toCharArray()){
            map[x-'a']++;
        }
        for(char x : t.toCharArray()){
            map[x-'a']--;
        }
        for(int i:map){
            if (i!=0){
                return false;
            }
        }
        return true;
        }
}