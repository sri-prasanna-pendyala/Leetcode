class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        //part of sstream library for working with strings like streams(it treats strings like streams)
        //similar to cin,cout (extract and insert data from and into string)
        stringstream ss(s1);
        //empty string to hold the words of the strings
        string word;
        unordered_map<string,int> m;
        vector<string> v;
        while(ss >> word) //extracts one string at a time(splits words by space (default))
        {
            m[word]++;
        }
        ss.clear(); //resets any error flags(like EOF)
        ss.str(""); //clears the old string content in ss
        ss.str(s2); //load the second string into the stream
        //read words from other string too and stores the count
        while(ss >> word)
        {
            m[word]++;
        }
        //find words that appeared only one in both strings
        for(auto i:m)
        {
            if(i.second==1)
            {
                v.push_back(i.first); //stores unique words
            }
        }
        return v;
    }
};