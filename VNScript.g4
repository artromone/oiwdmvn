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

// --- Топ-левел ---
script
    : statement* EOF
    ;

statement
    : sceneStart
    | sceneEnd
    | backgroundStmt
    | musicStmt
    | characterDef
    | dialogueStmt
    | narrateStmt
    | centerTextStmt
    | varDecl
    | varAssign
    | propAssign
    | ifStmt
    | choiceStmt
    | savepointStmt
    | gotoStmt
    ;

// Сцена
sceneStart
    : 'scene_start' STRING
    ;

sceneEnd
    : 'scene_end'
    ;

// Фон и музыка
backgroundStmt
    : 'background' STRING
    ;

musicStmt
    : 'music' STRING
    ;

// Персонаж
characterDef
    : 'character' ID '{' characterProp+ '}'
    ;

characterProp
    : 'name' STRING                // name "Имя"
    | ('s' | 'string') ID STRING   // s mood "neutral"
    | ('i' | 'int') ID NUMBER      // i relaxed 5
    | ('b' | 'bool') ID boolValue  // b drunk false
    ;

boolValue
    : 'true'
    | 'false'
    ;

// Диалог и нарратив
dialogueStmt
    : ID STRING           // Alice "Текст"
    ;

narrateStmt
    : '!' STRING          // ! "Текст нарратора"
    ;

centerTextStmt
    : '@' STRING          // @ "Текст посередине экрана"
    ;

varDecl
    : ('s' | 'string') ID STRING   // s author_name "Artem"
    | ('i' | 'int') ID NUMBER      // i counter 5
    | ('b' | 'bool') ID boolValue  // b good_day false
    ;

// Присваивание переменной (без типа)
varAssign
    : ID expr                     // good_day true
    ;

// Присваивание свойства персонажа
propAssign
    : ID '.' ID expr              // Alice.mood "curious"
    ;

// Выражения
expr
    : STRING
    | NUMBER
    | boolValue
    | ID
    ;

// Выбор
choiceStmt
    : 'choice' '{' choiceOption+ '}'
    ;

choiceOption
    : STRING block
    ;

block
    : '{' statement* '}'
    ;

// Условие
ifStmt
    : 'if' condition block ('else' block)?
    ;

condition
    : simpleCondition
    | simpleCondition '&&' condition
    | simpleCondition '||' condition
    | '(' condition ')'
    ;

simpleCondition
    : ID ('.' ID)? '==' expr
    ;

// Сохранение, переход
savepointStmt
    : 'savepoint' STRING
    ;

gotoStmt
    : 'goto' STRING
    ;

