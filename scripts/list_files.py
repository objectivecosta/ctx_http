#!/usr/bin/python3

import os
# for i in `find ./src -name "*.cpp" -type f`; do
#     echo "\"$i\""
# done

# for i in `find ./src -name "*.mm" -type f`; do
#     echo "\"$i\""
# done

# for i in `find ./src -name "*.hpp" -type f`; do
#     echo "\"$i\""
# done

def list_files():
    file_ends = [
        ".hpp",
        ".mm",
        ".cpp",
        ".cc",
        ".h"
    ]

    matches = []

    for path, subdirs, files in os.walk("./src/"):
        for name in files:
            for file_end in file_ends:
                if file_end in name:
                    matches.append(os.path.realpath(os.path.join(path, name)))
    
    return matches

if __name__ == "__main__":
    for file in list_files():
        print(file)

