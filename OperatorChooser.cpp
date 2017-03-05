void output(float);
float add(float, float);
float sub(float, float);
float mult(float, float);
float div(float, float);

void operator_chooser(char op, float a, float b)
{
    // Deciding which operator to use based on user's choice.
    if (op == '+')
        output(add(a, b));
    if (op == '-')
        output(sub(a, b));
    if (op == '*')
        output(mult(a, b));
    if (op == '/')
        output(div(a, b));
}
