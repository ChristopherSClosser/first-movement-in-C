int basic_op(char op, int a, int b) {
  int sum;

  switch(op)
  {
     case '+': sum = a + b; break;
     case '-': sum = a - b; break;
     case '*': sum = a * b; break;
     case '/': sum = a / b; break;
     default: break;
  }
  return sum;
}
