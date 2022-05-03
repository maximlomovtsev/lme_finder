import subprocess
import os

def main():
    current_dir = os.getcwd()
    build_dir = os.path.join(current_dir, 'build')

    if not os.path.exists(build_dir):
        os.mkdir(build_dir)

    os.chdir(build_dir)

    # install deps
    subprocess.run(['conan', 'install', '..'])

    # build src
    subprocess.run(['conan', 'build', '..'])

    os.chdir(current_dir)

if __name__ == '__main__':
    main()