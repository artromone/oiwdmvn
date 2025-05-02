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
    : 'character' ID '{' characterBody '}'
    ;

characterBody
    : (charPropStmt)*
    ;

charPropStmt
    : ID STRING           // name "Алиса"
    | ID NUMBER           // relaxed 5
    | 'var' ID STRING     // var mood "neutral"
    ;

// Диалог и нарратив
dialogueStmt
    : ID STRING           // Alice "Текст"
    ;

narrateStmt
    : 'narrate' STRING
    ;

// Объявление переменной
varAssign
    : ID expr             // good_day false
    ;

// Присваивание свойства
propAssign
    : ID '.' ID expr      // Alice.mood "curious"
    ;

// Выражения
expr
    : STRING
    | NUMBER
    | 'true'
    | 'false'
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
    : ID ('.' ID)? '==' expr
    ;

// Сохранение, переход
savepointStmt
    : 'savepoint' STRING
    ;

gotoStmt
    : 'goto' STRING
    ;

