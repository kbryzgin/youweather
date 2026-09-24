/*
 * parser.h - json-parsing core
 */

 #pragma once

typedef struct {
    char temp_min[8];
    char temp_max[8];
    char wind_speed[12];
    char wind_direction[8];
    char description[64];
} WeatherData;

typedef enum {
    PARSER_OK = 0,
    PARSER_ERROR_INVALID_JSON,
    PARSER_ERROR_MISSING_FIELDS
} ParserStatus;

int parse_json(const char* json_str, WeatherData* output);
