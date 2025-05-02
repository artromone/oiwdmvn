
// Generated from /home/art/programming/pet/oiwdmvn/VNScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VNScriptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by VNScriptParser.
 */
class  VNScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by VNScriptParser.
   */
    virtual std::any visitScript(VNScriptParser::ScriptContext *context) = 0;

    virtual std::any visitStatement(VNScriptParser::StatementContext *context) = 0;

    virtual std::any visitSceneStart(VNScriptParser::SceneStartContext *context) = 0;

    virtual std::any visitSceneEnd(VNScriptParser::SceneEndContext *context) = 0;

    virtual std::any visitBackgroundStmt(VNScriptParser::BackgroundStmtContext *context) = 0;

    virtual std::any visitMusicStmt(VNScriptParser::MusicStmtContext *context) = 0;

    virtual std::any visitCharacterDef(VNScriptParser::CharacterDefContext *context) = 0;

    virtual std::any visitCharacterBody(VNScriptParser::CharacterBodyContext *context) = 0;

    virtual std::any visitCharPropStmt(VNScriptParser::CharPropStmtContext *context) = 0;

    virtual std::any visitDialogueStmt(VNScriptParser::DialogueStmtContext *context) = 0;

    virtual std::any visitNarrateStmt(VNScriptParser::NarrateStmtContext *context) = 0;

    virtual std::any visitVarAssign(VNScriptParser::VarAssignContext *context) = 0;

    virtual std::any visitPropAssign(VNScriptParser::PropAssignContext *context) = 0;

    virtual std::any visitExpr(VNScriptParser::ExprContext *context) = 0;

    virtual std::any visitChoiceStmt(VNScriptParser::ChoiceStmtContext *context) = 0;

    virtual std::any visitChoiceOption(VNScriptParser::ChoiceOptionContext *context) = 0;

    virtual std::any visitBlock(VNScriptParser::BlockContext *context) = 0;

    virtual std::any visitIfStmt(VNScriptParser::IfStmtContext *context) = 0;

    virtual std::any visitCondition(VNScriptParser::ConditionContext *context) = 0;

    virtual std::any visitSavepointStmt(VNScriptParser::SavepointStmtContext *context) = 0;

    virtual std::any visitGotoStmt(VNScriptParser::GotoStmtContext *context) = 0;


};

