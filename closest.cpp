def find_closest_pairs(a, b, target):
    a.sort(key=lambda item: item[1])
    b.sort(key=lambda item: item[1])
    closest = 0
    result = []
    for i in range(len(a) - 1, -1, -1):
        if a[i][1] < target:
            threshold, j = find_nearest_complement(a[i][1], b, target)
            if threshold >= closest:
                closest = threshold
                while result and (a[result[-1][0]][1] + b[result[-1][1]][1]) < closest:
                    result.pop()
                result.append([i, j])
    
    for i in range(len(result)):
        result[i][0] = a[result[i][0]][0]
        result[i][1] = b[result[i][1]][0]
    return result
    
def find_nearest_complement(a_val, b, target):
    low, high = 0, len(b) - 1
    threshold = -1
    while low <= high:
        mid = low + (high - low) // 2
        if a_val + b[mid][1] == target:
            return target, mid
        elif a_val + b[mid][1] > target:
            high = mid - 1
        else:
            threshold = a_val + b[mid][1]
            low = mid + 1
    return threshold, mid
