import conans

class LMEFinder(conans.ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake"

    def build(self):
        cmake = conans.CMake(self)
        cmake.configure()
        cmake.build()