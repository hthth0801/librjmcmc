find_package( TIFF REQUIRED )

file( GLOB ALL_CLI_HEADER_FILES *.h *.hpp )
aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR} ALL_CLI_SRC )
set( CLI_SRC ${ALL_CLI_HEADER_FILES} ${ALL_LIBRJMCMC_HEADERS_FILES} ${ALL_CLI_SRC} )

add_executable( building_footprint_extraction_cli ${CLI_SRC} )
target_link_libraries( building_footprint_extraction_cli ${BUILDING_FOOTPRINT_EXTRACTION_LIBRARIES} ${TIFF_LIBRARIES} )
