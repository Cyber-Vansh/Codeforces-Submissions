test_cases = int(input())
for _ in range(test_cases):
    rows, cols = map(int, input().split())
    matrix_data = []
    
    for row_index in range(rows):
        row = list(map(int, input().split()))
        sorted_row = sorted(row)
        matrix_data.append((sorted_row, row_index + 1))
    
    # Sort the matrix data based on the sorted rows
    matrix_data.sort()
    is_valid = True
    result = []
 
    for col_index in range(cols):
        if is_valid:
            for row_index in range(rows):
                if col_index == 0 and row_index == 0:
                    previous_value = matrix_data[row_index][0][col_index]
                else:
                    if matrix_data[row_index][0][col_index] <= previous_value:
                        is_valid = False
                        break
                    else:
                        previous_value = matrix_data[row_index][0][col_index]
                if col_index == 0:
                    result.append(matrix_data[row_index][-1])
        else:
            break
    
    if not is_valid:
        print(-1)
    else:
        print(*result)