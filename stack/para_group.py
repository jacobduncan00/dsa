def isValidGrouping(grouping):
    if len(grouping) % 2 != 0:
        return False
    stack = []

    for char in grouping:
        if char == "{" or char == "(":
            stack.append(1)
        elif char == "}" or char == ")":
            stack.pop()


    if len(stack) == 0:
        return True
    else:
        return False


def main():
    str1 = "{}"
    str2 = "{{()}}"
    str3 = "{{{)}}}"
    str4 = "{()()()}{}"
    print(isValidGrouping(str1), str1)
    print(isValidGrouping(str2), str2)
    print(isValidGrouping(str3), str3)
    print(isValidGrouping(str4), str4)


if __name__ == "__main__":
    main()
