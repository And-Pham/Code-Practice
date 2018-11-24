def cmd_Calculator(in_str):
    '''
    Program that emulates a simple calculator
    String input: simple operation chars "*, +, /, -" and ints delimited with spaces
    '''

    parsed_input = in_str.split(" ")

    # Setup stacks to hold operations and numbers
    num_list = [int(parsed_input[0]), ]
    op_list = [] 
    parsed_input = parsed_input[1:]

    while parsed_input or op_list:
        if not op_list or (parsed_input and precedence(parsed_input[0]) > precedence(op_list[-1])):
            # If the operator in the input is higher precedence push to the stack
            op_list.append(parsed_input[0])
            num_list.append(int(parsed_input[1]))

            # Remove the two inputs
            parsed_input = parsed_input[2:]
        else:
            # If the operator in the input is lower precedence eval stack
            temp = calc_val(num_list[-2], num_list[-1], op_list[-1])
            op_list.pop()
            num_list.pop()
            num_list.pop()

            num_list.append(temp)

        print(num_list)
        print(op_list)
        print(parsed_input)

    print(str(num_list[0]))
    return


def precedence(val):
    '''
    Helper function to determine precedence of operation
    Input: string operator
    Output: int corresponding to relative priority
    '''
    if val in ("*", "/"):
        prec = 2
    elif val in ("+", "-"):
        prec = 1
    else:
        prec = 0

    return prec

def calc_val(a, b, op):
    '''
    Performs the calculations
    Input: integers a,b; string op
    Output: resultant of numbers and operation
    '''

    if op == "*":
        result = a*b
    elif op == "/":
        result = a/b
    elif op == "+":
        result = a+b
    else:
        result = a-b

    return result
