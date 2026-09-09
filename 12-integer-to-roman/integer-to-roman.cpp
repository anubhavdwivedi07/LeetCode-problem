class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> roman = {
    {1, "I"}, {5, "V"}, {10, "X"}, {50, "L"},
    {100, "C"}, {500, "D"}, {1000, "M"}
};
    int count = 0;
    int n = num;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    vector<int> value;
     n  = num;
    int k = 1;
    for (int i = 1; i < count; i++)
        k *= 10;
    for(int i =0;i<count;i++)
    {
        int f = (n/k) * k;
        value.push_back(f);
        n = n-f;
        k=k/10;
    }
    int s = value.size();
    vector<string> ans;
    for(int i = 0;i<s;i++)
    {
        if (value[i] < 5)
        {
                if (value[i] == 4)
                 {
                         ans.push_back(roman[1] + roman[5]);  
                }
            else
            {
                string ones;
                for (int k = 0; k < value[i]; k++)
                ones += roman[1];
                ans.push_back(ones);                 
            }
        }
    else if (5 <= value[i] && value[i] < 10)
    {
        if (value[i] == 9)
        {
            ans.push_back(roman[1] + roman[10]);  
        }
        else
        {
            int j = value[i] - 5;
            string ones;
            for (int k = 0; k < j; k++)
            ones += roman[1];
            ans.push_back(roman[5] + ones);      
        }
}

        else if (10 <= value[i] && value[i] < 50)  
        {
             if(50-value[i]==10)
            {
                ans.push_back(roman[10]+roman[50]);
            }
            else 
            {
                int j = (value[i]-10) / 10;
                string tens;
                for (int k = 0; k < j; k++)
                tens += roman[10];
                ans.push_back(roman[10] + tens);
            }
        }
        else if (50 <= value[i] && value[i] < 100)  
        {
            if(100-value[i]==10)
            {
                ans.push_back(roman[10]+roman[100]);
            }
            else 
            {
                int j = (value[i]-50) / 10;
                string tens;
                for (int k = 0; k < j; k++)
                tens += roman[10];
                ans.push_back(roman[50] + tens);
            }
        }
        else if (100 <= value[i] && value[i] < 500)
        {
            if (500 - value[i] == 100)
        {
             ans.push_back(roman[100] + roman[500]);   
        }
            else
            {
            int j = (value[i] - 100) / 100;
            string hundreds;
            for (int k = 0; k < j; k++)
                hundreds += roman[100];
            ans.push_back(roman[100] + hundreds);     
            }
        }
else if (500 <= value[i] && value[i] < 1000)
{
    if (1000 - value[i] == 100)
    {
        ans.push_back(roman[100] + roman[1000]);   
    }
    else
    {
        int j = (value[i] - 500) / 100;
        string hundreds;
        for (int k = 0; k < j; k++)
            hundreds += roman[100];
        ans.push_back(roman[500] + hundreds);      
    }
}
   else
    {
        int j = value[i] / 1000;                        
        string thousands;
        for (int k = 0; k < j; k++)
            thousands += roman[1000];
        ans.push_back(thousands);                       
    }
    }
     string result;
    for (auto &s : ans) result += s;
    return result;
    
    }
};