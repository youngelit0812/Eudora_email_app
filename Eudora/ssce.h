#ifndef _SSCE_H_
#define _SSCE_H_

#define		SpellCheck_MAX_WORD_SZ					50

#define		S16										short
#define		U32										unsigned int
#define		S32										signed int

//MAX Search Depth : 3
#define		SpellCheck_AUTO_SEARCH_DEPTH			3

#define		SpellCheck_END_OF_BLOCK_RSLT			60001
#define		SpellCheck_OK_RSLT						60002
#define		SpellCheck_REPORT_DOUBLED_WORD_OPT		60003
#define		SpellCheck_REPORT_MIXED_CASE_OPT		60004
#define		SpellCheck_REPORT_SPELLING_OPT			60005

#define		SpellCheck_IGNORE_CAPPED_WORD_OPT		60055
#define		SpellCheck_IGNORE_ALL_CAPS_WORD_OPT		60056
#define		SpellCheck_IGNORE_MIXED_DIGITS_OPT		60057
#define		SpellCheck_IGNORE_MIXED_CASE_OPT		60058

#define		SpellCheck_SUGGEST_WORD_RSLT			60010
#define		SpellCheck_SUGGEST_SPLIT_WORDS_OPT		60011
#define		SpellCheck_SUGGEST_PHONETIC_OPT			60012
#define		SpellCheck_SUGGEST_TYPOGRAPHICAL_OPT	60013

#define		SpellCheck_DOUBLED_WORD_RSLT			60020
#define		SpellCheck_CHANGE_WORD_RSLT				60021
#define		SpellCheck_MISSPELLED_WORD_RSLT			60022
#define		SpellCheck_UNCAPPED_WORD_RSLT			60023
#define		SpellCheck_MIXED_CASE_WORD_RSLT			60024
#define		SpellCheck_CHANGE_LEX_TYPE				60025
#define		SpellCheck_IGNORE_LEX_TYPE				60026
#define		SpellCheck_SUGGEST_LEX_TYPE				60027

#define		SpellCheck_SPLIT_CONTRACTED_WORDS_OPT	60060

#define		SpellCheck_TOO_MANY_SESSIONS_ERR		60030
#define		SpellCheck_OUT_OF_MEMORY_ERR			60031
#define		SpellCheck_BAD_BLOCK_ID_ERR				60032

#endif