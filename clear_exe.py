import os

to_delete = "exe"
dirs = os.listdir()
for dir in dirs:
    if os.path.isdir(dir):
        files = os.listdir(dir)
        for file in files:
            if to_delete in file:
                print(file,"deleted!")
                os.remove(os.path.join(dir,file))