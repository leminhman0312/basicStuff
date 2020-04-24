# PROGRAM TO CHECK FOR BALANCED PAREN

# define a class to do pop, push operation
class Stack():
    def __init__(self):
        self.item = []
    def push(self,item):
        self.item.append(item)
    def pop(self):
        return self.item.pop()
    def is_empty(self):
        return self.item == []
    def peek(self):
        if not self.is_empty():
            return self.item[-1]
    def get_stack(self):
        return self.item

# define function to match closing paren 
def is_match(p1, p2):
    if p1 == "(" and p2 == ")":
        return True
    elif p1 == "[" and p2 == "]":
        return True
    elif p1 == "{" and p2 == "}":
        return True
    else:
        return False

# define main function to check for balanced paren
def checkParen(string):
    s = Stack()
    is_balanced = True
    i = 0
    imax = len(string)

    open_paren = "(, {, ["
    
    while i < imax and is_balanced:
        char_i = string[i]
        print(i,'\t',char_i)

        if char_i in open_paren: # only if character is an open paren
            s.push(char_i)
        elif char_i.isalpha():  # this is to skip the alphabet, only paren
            pass
        else:
            if s.is_empty():
                is_balanced = False
            else:
                top = s.pop()
                if not is_match(top, char_i):
                    is_balanced = False
        s.get_stack()
        i = i + 1
    if s.is_empty() and is_balanced:
        return True
    else:
        return False


test = "(){}"
newString = test.replace(" ","") # remove all the whitespace
print(newString)
print(checkParen(newString))
