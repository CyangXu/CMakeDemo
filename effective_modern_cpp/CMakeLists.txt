add_library(EffectiveModernCpp deducing_types.cc)

target_include_directories(EffectiveModernCpp
       INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    )