#!/usr/bin/python3

def no_c(my_string):
     # Initialize an empty list to store the characters that are not 'c' or 'C'
    result = []
    # Loop through each character in the string
    for c in my_string:
        # Check if the character is not 'c' or 'C'
        if c != 'c' or c != 'C':
            # Add the character to the result list
            result.append(c)
    # Join the characters in the result list into a new string
    return ''.join(result)
