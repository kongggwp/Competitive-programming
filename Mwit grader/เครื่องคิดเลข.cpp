#include <bits/stdc++.h>
using namespace std;
vector<string> Tokenize(string expression , unordered_map<string , int>opMap)
{
    vector<string>tokens = {};
    string temp = "";
    for(char c : expression)
    {
        if(c == ' ')continue;
        else if(opMap.find(string(1,c))!=opMap.end())
        {
            if(temp!="")
                tokens.push_back(temp);
            temp = "";
            tokens.push_back(string(1,c));
        }
        else temp+=c;
    }
    if(temp!="")
        tokens.push_back(temp);
    return tokens;
}

vector<string> InfixToPostfix(vector<string>infix , unordered_map<string,int>opMap)
{
    vector<string>postfix={};
    vector<string>stack = {"("};
    infix.push_back(")");
    for(string token : infix)
    {
        if(opMap.find(token) == opMap.end())
        {
            postfix.push_back(token);
        }
        else if(token == "(")
        {
            stack.push_back("(");
        }
        else if(token == ")")
        {
            while(stack.back()!="(")
            {
                postfix.push_back(stack.back());
                stack.pop_back();
            }
            stack.pop_back();
        }
        else
        {
            while(!stack.empty() && opMap[token] <=opMap[stack.back()])
            {
                postfix.push_back(stack.back());
                stack.pop_back();
            }
            stack.push_back(token);
        }
    }
    return postfix;
}

double CalculatePostfix(vector<string>postfix , unordered_map<string,int>opMap)
{
    vector<double>evaluationStack = {};
    
    for(string token : postfix)
    {
        if(opMap.find(token)!=opMap.end())//operator
        {
            double n1 = evaluationStack[evaluationStack.size()-1];
            double n2 = evaluationStack[evaluationStack.size()-2];

            switch (token[0])
            {
            case '+':
                n2 = n2+n1;
                break;
            case '-':
                n2 = n2-n1;
                break;
            case '*':
                n2 = n2*n1;
                break;
            case '/':
                n2 = n2/n1;
                break;
            default:
                break;
            }
            evaluationStack.pop_back();
            evaluationStack.pop_back();
            evaluationStack.push_back(n2);
        }
        else
        {
            evaluationStack.push_back(stod(token.c_str()));
        }
    }
    return evaluationStack[0];
}

int main(){
    unordered_map<string,int>opMap = {
        {"*",2},
        {"/",2},
        {"+",1},
        {"-",1},
        {"(",-1},
        {")",-1}
    };
    string expression;
    getline(cin , expression);
    vector<string> tokens = Tokenize(expression , opMap);
    tokens = InfixToPostfix(tokens, opMap);
    double result = CalculatePostfix(tokens,opMap);
    printf("%.3lf",result);
}
