# Define a dictionary to hold the letter counts
letter_counts = {}

# Open the data file for reading
with open("data.txt", "r") as data_file:
    # Loop over each line in the file
    for line in data_file:
        # Loop over each character in the line
        for char in line:
            # Increment the count for the current letter
            if char.isalpha():
                char = char.lower()
                letter_counts[char] = letter_counts.get(char, 0) + 1

# Open the statistics file for writing
with open("statistics.txt", "w") as stats_file:
    # Loop over each letter of the alphabet
    for letter in "abcdefghijklmnopqrstuvwxyz":
        # Get the count for the current letter
        count = letter_counts.get(letter, 0)
        # Write the letter and count to the statistics file
        stats_file.write(f"{letter}: {count}\n")
