/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMENT = 258,
     DOUBLE = 259,
     LIGHT = 260,
     AMBIENT = 261,
     CONSTANTS = 262,
     SAVE_COORDS = 263,
     CAMERA = 264,
     SPHERE = 265,
     TORUS = 266,
     BOX = 267,
     LINE = 268,
     CS = 269,
     MESH = 270,
     TEXTURE = 271,
     CYLINDER = 272,
     CONE = 273,
     PYRAMID = 274,
     STRING = 275,
     SET = 276,
     MOVE = 277,
     SCALE = 278,
     ROTATE = 279,
     BASENAME = 280,
     SAVE_KNOBS = 281,
     TWEEN = 282,
     FRAMES = 283,
     VARY = 284,
     PUSH = 285,
     POP = 286,
     SAVE = 287,
     GENERATE_RAYFILES = 288,
     SHADING = 289,
     SHADING_TYPE = 290,
     SETKNOBS = 291,
     FOCAL = 292,
     DISPLAY = 293,
     WEB = 294,
     CO = 295
   };
#endif
/* Tokens.  */
#define COMMENT 258
#define DOUBLE 259
#define LIGHT 260
#define AMBIENT 261
#define CONSTANTS 262
#define SAVE_COORDS 263
#define CAMERA 264
#define SPHERE 265
#define TORUS 266
#define BOX 267
#define LINE 268
#define CS 269
#define MESH 270
#define TEXTURE 271
#define CYLINDER 272
#define CONE 273
#define PYRAMID 274
#define STRING 275
#define SET 276
#define MOVE 277
#define SCALE 278
#define ROTATE 279
#define BASENAME 280
#define SAVE_KNOBS 281
#define TWEEN 282
#define FRAMES 283
#define VARY 284
#define PUSH 285
#define POP 286
#define SAVE 287
#define GENERATE_RAYFILES 288
#define SHADING 289
#define SHADING_TYPE 290
#define SETKNOBS 291
#define FOCAL 292
#define DISPLAY 293
#define WEB 294
#define CO 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 23 "mdl.y"
{
  double val;
  char string[255];
}
/* Line 1529 of yacc.c.  */
#line 134 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

