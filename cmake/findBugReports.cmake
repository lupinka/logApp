set(FIND_BUGREPORTS_PATHS
        C:/Users/Ania/logLibrary)
find_path(BUGREPORTS_INCLUDE_DIR library.h
        PATH_SUFFIXES include
        PATHS ${FIND_BUGREPORTS_PATHS})

find_library(BUGREPORTS_LIBRARY
        NAMES libBugReports
        PATH_SUFFIXES lib
        PATHS ${FIND_BUGREPORTS_PATHS})