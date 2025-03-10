def calculator():
  print("Simple Calculator:- Enter two numbers and an operation:")

  try:
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    operation = input("Enter operation (+, -, *, /): ")

    if operation == '+':
      result = num1 + num2
    elif operation == '-':
      result = num1 - num2
    elif operation == '*':
      result = num1 * num2
    elif operation == '/':
      if num2 == 0:
        print("Error: Division by zero is not allowed.")
        return
      result = num1 / num2
    else:
      print("Invalid operation. Please enter one of +, -, *, /.")
      return

    print(f"Result: {result}")

  except ValueError:
    print("Invalid input! Please enter numeric values.")

if __name__ == "__main__":
  calculator()

# ask for more operations to perform and make them add the new operations as an exercise
