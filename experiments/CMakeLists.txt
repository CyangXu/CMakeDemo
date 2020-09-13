# Create the library.
add_library(Experiments foo.cc)

# Add the local head files to the search path.
target_include_directories(Experiments
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )