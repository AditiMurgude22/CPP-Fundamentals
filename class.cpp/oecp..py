# def add(a,b):
#     return a+b
# result=add(22,9)
# print("sum=",result)

# def add(a, b):
#     return a + b

# def operate(func, x, y):
#     return func(x, y)

# print(operate(add, 5, 3))


def linear_search(arr, key):
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    return -1
