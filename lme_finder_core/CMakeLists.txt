project(lme_finder_core)

set(SOURCES
    impl/finder_impl.cpp
    impl/find_engine_vk.cpp
)

set(INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_LIST_DIR}
)

add_library(${PROJECT_NAME} STATIC)
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIRECTORIES})