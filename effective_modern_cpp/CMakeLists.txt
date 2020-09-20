add_library(EffectiveModernCpp deducing_types.cc moving_to_modern_cpp.cc)

target_include_directories(EffectiveModernCpp
       INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    )