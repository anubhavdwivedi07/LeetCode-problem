class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
            unordered_map<char, string> morse = {
            {'a', ".-"},   {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},
            {'e', "."},    {'f', "..-."}, {'g', "--."},  {'h', "...."},
            {'i', ".."},   {'j', ".---"}, {'k', "-.-"},  {'l', ".-.."},
            {'m', "--"},   {'n', "-."},   {'o', "---"},  {'p', ".--."},
            {'q', "--.-"}, {'r', ".-."},  {'s', "..."},  {'t', "-"},
            {'u', "..-"},  {'v', "...-"}, {'w', ".--"},  {'x', "-..-"},
            {'y', "-.--"}, {'z', "--.."}
        };

        unordered_set<string> uniqueTransformations;

        for (int i = 0; i < words.size(); i++) {
            string code = "";
            for (int j = 0; j < words[i].size(); j++) {
                code += morse[words[i][j]]; 
            }
            uniqueTransformations.insert(code);
        }

        return uniqueTransformations.size();
    }
};