def create_stack():
    stack = []
    stack.append('c')
    stack.append('b')
    stack.append('a')
    return stack

def main():
    stack = create_stack()
    print(stack.pop())
    print(stack.pop())
    print(stack.pop())

if __name__ == "__main__":
    main()
