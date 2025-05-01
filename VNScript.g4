grammar VNScript;

// --- Лексика ---
COMMENT
    : '//' ~[\r\n]* -> skip
    ;

WS
    : [ \t\r\n]+ -> skip
    ;

STRING
    : '"' ( ~["\\] | '\\' . )* '"'
    ;

NUMBER
    : [0-9]+ ('.' [0-9]+)?
    ;

ID : [a-zA-Z_][a-zA-Z_0-9]* ;

SEMICOLON: ';';

// --- Топ-левел ---
script
    : statement* EOF
    ;

statement
    : sceneStart
    | sceneEnd
    | backgroundStmt
    | musicStmt
    | soundStmt
    | characterDef
    | sayStmt
    | narrateStmt
    | varDecl
    | setStmt
    | ifStmt
    | choiceStmt
    | parallelStmt
    | functionDef
    | tryCatchStmt
    | savepointStmt
    | transitionStmt
    | importStmt
    | debugBlock
    | gotoStmt
    | animateStmt
    | playStmt
    | waitStmt
    | returnStmt
    | logStmt
    ;

sceneStart
    : 'scene_start' ID SEMICOLON
    ;

sceneEnd
    : 'scene_end' SEMICOLON
    ;

backgroundStmt
    : 'background' STRING SEMICOLON
    ;

musicStmt
    : 'music' STRING SEMICOLON
    ;

soundStmt
    : 'sound' STRING SEMICOLON
    ;

characterDef
    : 'character' ID '{' characterBody '}'
    ;

characterBody
    : (charPropStmt)*
    ;

charPropStmt
    : 'name' '=' STRING SEMICOLON
    ;

sayStmt
    : ID '.' 'say' '(' STRING ')' SEMICOLON
    ;

narrateStmt
    : 'narrate' '(' STRING ')' SEMICOLON
    ;

varDecl
    : 'var' ID ('=' expr)? SEMICOLON
    ;

setStmt
    : 'set' lvalue assignOp expr SEMICOLON
    ;

lvalue
    : ID ('.' ID)?
    ;

assignOp
    : '='
    | '+='
    | '-='
    ;

ifStmt
    : 'if' '(' expr ')' block ('else' block)?
    ;

block
    : '{' statement* '}'
    ;

choiceStmt
    : 'choice' '{' choiceOption+ '}'
    ;

choiceOption
    : STRING block
    ;

parallelStmt
    : 'parallel' block
    ;

functionDef
    : 'function' ID '(' ')' SEMICOLON block
    ;

tryCatchStmt
    : 'try' block 'catch' '(' ID ID ')' block
    ;

savepointStmt
    : 'savepoint' STRING SEMICOLON
    ;

transitionStmt
    : 'transition' ID '(' expr ')' block
    ;

importStmt
    : 'import' STRING SEMICOLON
    ;

debugBlock
    : 'debug' block
    ;

gotoStmt
    : 'goto' ID SEMICOLON
    ;

animateStmt
    : 'animate' ID STRING SEMICOLON
    ;

playStmt
    : 'play' musicStmt
    ;

waitStmt
    : 'wait' '(' expr ')' SEMICOLON
    ;

returnStmt
    : 'return' expr? SEMICOLON
    ;

logStmt
    : 'log' '(' expr ')' SEMICOLON
    ;

// --- Выражения ---
expr
    : expr op=('*'|'/') expr
    | expr op=('+'|'-') expr
    | expr op=('>'|'<'|'>='|'<='|'=='|'!=') expr
    | expr op='&&' expr
    | expr op='||' expr
    | '(' expr ')'
    | lvalue
    | NUMBER
    | STRING
    | ID '(' (expr (',' expr)*)? ')' // function call
    | 'true'
    | 'false'
    ;
