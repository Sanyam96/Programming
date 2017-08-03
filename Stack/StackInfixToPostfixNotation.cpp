// Stack Infix to Postfix Notation
/*

Infix expression:The expression of the form  "a op b" . When an operator is in-between every pair of operands.

Postfix expression:The expression of the form  "a b op" . When an operator is followed for every pair of operands.

Why postfix representation of the expression?
The compiler scans the expression either from left to right or from right to left.

Consider the below expression:  "a op1 b op2 c op3 d"
If op1 = +, op2 = *, op3 = +

The compiler first scans the expression to evaluate the expression b * c, 
then again scan the expression to add a to it. The result is then added to d after another scan.
	
The repeated scanning makes it very in-efficient. 
It is better to convert the expression to postfix(or prefix) form before evaluation.

The corresponding expression in postfix form is: abc*+d+. 
The postfix expressions can be evaluated easily using a stack. 
We will cover postfix expression evaluation in a separate post.

*/
// Note that here we use std::stack  for Stack operations

#include <bits/stdc++.h>
using namespace std;
 
//Function to return precedence of operators
int prec(char c) {

    if( c == '^') {
    	return 3;
    }
    else if( c == '*' || c == '/' ) {
    	return 2;
    }
    else if( c == '+' || c == '-' ) {
    	return 1;
    }
    else {
	    return -1;
    }
}
 
// The main function to convert infix expression
//to postfix expression
void infixToPostfix( string s ) {

    std::stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    
    for(int i = 0; i < l; i++) {
        // If the scanned character is an operand, add it to output string.
        if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ) {
	        ns += s[i];
        }
 
        // If the scanned character is an ‘(‘, push it to the stack.
        else if( s[i] == '(' ) {
        	st.push('(');
        } 	        
         
        // If the scanned character is an ‘)’, pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if( s[i] == ')' ) {

            while( st.top() != 'N' && st.top() != '(' ) {
				char c = st.top();
				st.pop();
				ns += c;
            }
            if( st.top() == '(' ) {
                char c = st.top();
                st.pop();
            }
        }
         
        //If an operator is scanned
        else{

            while( st.top() != 'N' && prec(s[i]) <= prec(st.top()) ) {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
 
    }

    //Pop all the remaining elements from the stack
    while( st.top() != 'N' ) {
        char c = st.top();
        st.pop();
        ns += c;
    }
     
    cout << ns << endl;
 
}
 
//Driver program to test above functions
int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    return 0;
}
