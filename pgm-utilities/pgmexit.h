#define EXIT_NO_ERRORS 0
#define STR_ECHOED "ECHOED\n"
#define STR_IDENTICAL "IDENTICAL\n"
#define STR_DIFFERENT "DIFFERENT\n"
#define STR_CONVERTED "CONVERTED\n"
#define STR_REDUCED "REDUCED\n"
#define STR_TILED "TILED\n"
#define STR_ASSEMBLED "ASSEMBLED\n"

#define EXIT_BAD_ARGS_COUNT 1
#define STR_BAD_ARGS_COUNT "ERROR: Bad Argument Count\n"

#define EXIT_BAD_FILE_NAME 2
#define STR_BAD_FILE_NAME "ERROR: Bad File Name"

#define EXIT_BAD_MAGIC_NUMBER 3
#define STR_BAD_MAGIC_NUMBER "ERROR: Bad Magic Number"

#define EXIT_BAD_COMMENT_LINE 4
#define STR_BAD_COMMENT_LINE "ERROR: Bad Comment Line"

#define EXIT_BAD_DIMENSIONS 5
#define STR_BAD_DIMENSIONS "ERROR: Bad Dimensions"

#define EXIT_BAD_MAX_GRAY_VALUE 6
#define STR_BAD_MAX_GRAY_VALUE "ERROR: Bad Max Gray Value"

#define EXIT_IMAGE_MALLOC_FAILED 7
#define STR_IMAGE_MALLOC_FAILED "ERROR: Image Malloc Failed"

#define EXIT_BAD_DATA 8
#define STR_BAD_DATA "ERROR: Bad Data"

#define EXIT_OUTPUT_FAILED 9
#define STR_OUTPUT_FAILED "ERROR: Output Failed"

#define EXIT_BAD_LAYOUT 10
#define STR_BAD_LAYOUT "ERROR: Bad Layout\n"

#define EXIT_MISC 100
#define STR_MISC "ERROR: Miscellaneous"
#define STR_BAD_WRITE_MODE "Invalid write mode. Must either be 0 or 1"
#define STR_COMMENT_LIMIT "Comment limit was reached"
#define STR_BAD_FACTOR "Factor was not an integer greater than 0"
#define STR_NO_TAGS "<row> and <column> tags were not found in output file name template"
#define STR_NO_ROW_TAG "<row> tag was not found in output file name template"
#define STR_NO_COL_TAG "<column> tag was not found in output file name template"

#define STR_BAD_DIMENSION "Specify the output file path and ensure dimensions are integers between 1 and 65535 inclusive"
#define STR_BAD_ROW "Rows must be integers greater than or equal to 0 and less than the height (indexing from 0)"
#define STR_BAD_COLUMN "Columns must be integers greater than or equal to 0 and less than the width (indexing from 0)"
