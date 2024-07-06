def calculator():
    while True:
        try:
            operand1 = float(input("Enter the first operand: "))
            operand2 = float(input("Enter the second operand: "))
            operator = input("Enter the operator (+, -, *, /): ")

            if operator == '+':
                result = operand1 + operand2
            elif operator == '-':
                result = operand1 - operand2
            elif operator == '*':
                result = operand1 * operand2
            elif operator == '/':
                if operand2 == 0:
                    raise ZeroDivisionError("Math Error: cannot divide by 0.")
                result = operand1 / operand2
            else:
                raise ValueError("Invalid character for operator.")

            print(f"({operand1}) {operator} ({operand2}) = {result}")
        except ValueError as ve:
            print(ve)
        except ZeroDivisionError as zde:
            print(zde)
        except Exception as e:
            print(f"An error occurred: {e}")

        another_calculation = input("Do you want to perform another calculation? (yes/no): ").strip().lower()
        if another_calculation != 'yes':
            break

calculator()
