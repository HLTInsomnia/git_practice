from os import path

def print_number(dir_name):
    file_path = path.join(dir_name,"test_data.txt")
    with open(file_path) as f:
        for line in f:
            print line

if __name__ == "__main__":
    print_number("../data")


