string sumOfThrees(string n)
{
    vector<int>a;
    long long m = stoll(n);
    while(m){
        a.push_back(m % 3);
        m /= 3;
    }
    for(int i = 1; i < a.size(); i++)
        if(a[i - 1] == 2)
            return "Impossible";
    string s = "";
    for(int i = a.size() - 1; i >= 0; i--){
        if(a[i] != 0) s += "3^" + to_string(i) +  "+";
    }
    s.pop_back();
    return s;
}
