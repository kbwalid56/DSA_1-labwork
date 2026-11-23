#include <iostream>
#include <stack>
#include <string>
using namespace std;

int performOperation(int operand1, int operand2, char operation)
{
    switch (operation)
    {
    case '+':
        return operand1 + operand2;
    case '-':
        return operand1 - operand2;
    case '*':
        return operand1 * operand2;
    case '/':
        return operand1 / operand2;
    default:
        return 0;
    }
}

int evaluatePostfixExpression(const string& expression)
{
    stack<int> stack;

    for (char c : expression)
    {
        if (isdigit(c))
        {
            stack.push(c - '0');
        }
        else
        {
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            int result = performOperation(operand1,operand2,c);
            stack.push(result);
        }
    }
    return stack.top();
}

int main()
{
    string expression2 = "73*4+";
    int result = evaluatePostfixExpression(expression2);
    cout<<"Result of Postfix Expression\""<<expression2<<"\" is: "<<result<<endl;

    return 0;
}
