/*
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __TOKEN_H__
#define __TOKEN_H__

#define MAX_IDENT_LEN 30
#define KEYWORDS_COUNT 23

typedef enum
{
  TK_NONE,
  TK_IDENT,
  TK_NUMBER,
  TK_CHAR,
  TK_EOF,
  TK_FLOAT,

  KW_PROGRAM,
  KW_CONST,
  KW_TYPE,
  KW_VAR,
  KW_INTEGER,
  KW_BYTES, // Add bytes
  KW_CHAR,
  KW_ARRAY,
  KW_OF,
  KW_FLOAT,
  KW_FUNCTION,
  KW_PROCEDURE,
  KW_BEGIN,
  KW_END,
  KW_CALL,
  KW_IF,
  KW_THEN,
  KW_ELSE,
  KW_WHILE,
  KW_DO,
  KW_FOR,
  KW_TO,
  KW_REPEAT, // Add repeat until
  KW_UNTIL,

  SB_SEMICOLON,
  SB_COLON,
  SB_PERIOD,
  SB_COMMA,
  SB_ASSIGN,
  SB_EQ,
  SB_NEQ,
  SB_LT,
  SB_LE,
  SB_GT,
  SB_GE,
  SB_PLUS,
  SB_MINUS,
  SB_TIMES,
  SB_SLASH,
  SB_EXP, // Add exponent
  SB_LPAR,
  SB_RPAR,
  SB_LSEL,
  SB_RSEL,
  SB_OPEN_BRACKET,
  SB_CLOSE_BRACKET,
  SB_ASSIGN_PLUS,
  SB_ASSIGN_SUBTRACT,
  SB_ASSIGN_TIMES,
  SB_ASSIGN_DIVIDE
} TokenType;

typedef struct
{
  char string[MAX_IDENT_LEN + 1];
  int lineNo, colNo;
  TokenType tokenType;
  int value;
} Token;

TokenType checkKeyword(char *string);
Token *makeToken(TokenType tokenType, int lineNo, int colNo);
char *tokenToString(TokenType tokenType);

#endif
