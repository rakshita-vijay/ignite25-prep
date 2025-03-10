def print_para():
  print("+ - - - - - - - - - - - - - - - - - - +")

  num1 = int(input("Enter the first number: "))
  num2 = int(input("Enter the second number: "))

  print("\nYour choices for operations are:")
  print("1) Addition (+)")
  print("2) Subtraction (-)")
  print("3) Multiplication (*)")
  print("4) Division to get quotient (/)")
  print("5) Division to get remainder (%)\n")

  op = input("Enter the operation: ")

  return num1, num2, op

def do_calc(num1, num2, op):
  if op == '+':
    return num1 + num2
  elif op == '-':
    return num1 - num2
  elif op == '*':
    return num1 * num2
  elif op == '/':
    return num1 / num2 if num2 != 0 else "Undefined (division by zero)"
  elif op == '%':
    return num1 % num2 if num2 != 0 else "Undefined (modulo by zero)"
  else:
    print("Invalid Operator Input")
    return None

def main():
  choice = 1

  while choice:
    num1, num2, op = print_para()

    res = do_calc(num1, num2, op)

    if res is not None:
      print(f"\n{num1} {op} {num2} = {res}")

    print("+ - - - - - - - - - - - - - - - - - - +")

    choice = int(input("\nDo you wish to do another operation? Enter 1 for yes, 0 for no: "))
    print()

    if choice == 0:
      print("+ - - - - - - - - - - - - - - - - - - +")

if __name__ == "__main__":
  main()
