
def simpsort(arr):
    ''' In-place  '''
    n = len(arr)
    for i in range(n):
        for j in range(n):
            if arr[i] < arr[j]:
                arr[i], arr[j] = arr[j], arr[i]

if __name__ == "__main__":
    import random
    arr = [random.randint(0, 25) for i in range(15)]
    print(arr)
    simpsort(arr)
    print(arr)