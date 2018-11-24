'''
Implementation of "Neighs" Interview Question.
Question: Given a recording (string) of a unknown number of horses
         (ex. "nenigehnieighgh") determine the minimum number of horses to
         produce the recording
'''

def horse_counter(neighs):
    '''
    Determines the minimum number of horse to produce a string of neighs
    Input: a string of scrambled "neighs"
    Output: integer count of horses or a string that says the input is impossible
    '''
    valid_sounds = []
    count = 0
    next_sound_dict = {"n": "e", "e": "i", "i": "g", "g": "h", "h": "n"}

    for char in neighs:
        if char not in valid_sounds:
            if char == "n":
                count += 1
                valid_sounds.append("e")
            else:
                return "Impossible"
        else:
            valid_sounds.remove(char)
            valid_sounds.append(next_sound_dict[char])

    return count

def main():
    '''
    Runs tests cases for the horse_counter function
    '''
    test_case_1 = "nenigehnieighgh"
    assert horse_counter(test_case_1) == 2

    test_case_2 = "neenigh"
    assert horse_counter(test_case_2) == "Impossible"

    test_case_3 = "neighneigh"
    assert horse_counter(test_case_3) == 1

main()
