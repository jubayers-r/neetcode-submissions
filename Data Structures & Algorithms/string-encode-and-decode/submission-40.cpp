class Solution {
public:

    string encode(vector<string>& strs) {

        string s;

        for(string& str : strs){
            
            s +=  std::to_string(str.size())+ '#' + str;
        }

        return s;

    }

    vector<string> decode(string s) {

        vector<string> strs;
        string decoded;

//stoi find substr
    for(int i = 0; i < s.size(); i++){

        int j = s.find('#', i);

        int length = std::stoi(s.substr(i, j - i));

        string word = s.substr(j + 1, length);

        strs.push_back(word);

        i = j + length;

    }


        return strs;
    }
    
    };

