
// Generated from /home/art/programming/pet/oiwdmvn/VNScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VNScriptListener.h"


/**
 * This class provides an empty implementation of VNScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  VNScriptBaseListener : public VNScriptListener {
public:

  virtual void enterScript(VNScriptParser::ScriptContext * /*ctx*/) override { }
  virtual void exitScript(VNScriptParser::ScriptContext * /*ctx*/) override { }

  virtual void enterStatement(VNScriptParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(VNScriptParser::StatementContext * /*ctx*/) override { }

  virtual void enterSceneStart(VNScriptParser::SceneStartContext * /*ctx*/) override { }
  virtual void exitSceneStart(VNScriptParser::SceneStartContext * /*ctx*/) override { }

  virtual void enterSceneEnd(VNScriptParser::SceneEndContext * /*ctx*/) override { }
  virtual void exitSceneEnd(VNScriptParser::SceneEndContext * /*ctx*/) override { }

  virtual void enterBackgroundStmt(VNScriptParser::BackgroundStmtContext * /*ctx*/) override { }
  virtual void exitBackgroundStmt(VNScriptParser::BackgroundStmtContext * /*ctx*/) override { }

  virtual void enterMusicStmt(VNScriptParser::MusicStmtContext * /*ctx*/) override { }
  virtual void exitMusicStmt(VNScriptParser::MusicStmtContext * /*ctx*/) override { }

  virtual void enterCharacterDef(VNScriptParser::CharacterDefContext * /*ctx*/) override { }
  virtual void exitCharacterDef(VNScriptParser::CharacterDefContext * /*ctx*/) override { }

  virtual void enterCharacterBody(VNScriptParser::CharacterBodyContext * /*ctx*/) override { }
  virtual void exitCharacterBody(VNScriptParser::CharacterBodyContext * /*ctx*/) override { }

  virtual void enterCharPropStmt(VNScriptParser::CharPropStmtContext * /*ctx*/) override { }
  virtual void exitCharPropStmt(VNScriptParser::CharPropStmtContext * /*ctx*/) override { }

  virtual void enterDialogueStmt(VNScriptParser::DialogueStmtContext * /*ctx*/) override { }
  virtual void exitDialogueStmt(VNScriptParser::DialogueStmtContext * /*ctx*/) override { }

  virtual void enterNarrateStmt(VNScriptParser::NarrateStmtContext * /*ctx*/) override { }
  virtual void exitNarrateStmt(VNScriptParser::NarrateStmtContext * /*ctx*/) override { }

  virtual void enterVarAssign(VNScriptParser::VarAssignContext * /*ctx*/) override { }
  virtual void exitVarAssign(VNScriptParser::VarAssignContext * /*ctx*/) override { }

  virtual void enterPropAssign(VNScriptParser::PropAssignContext * /*ctx*/) override { }
  virtual void exitPropAssign(VNScriptParser::PropAssignContext * /*ctx*/) override { }

  virtual void enterExpr(VNScriptParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(VNScriptParser::ExprContext * /*ctx*/) override { }

  virtual void enterChoiceStmt(VNScriptParser::ChoiceStmtContext * /*ctx*/) override { }
  virtual void exitChoiceStmt(VNScriptParser::ChoiceStmtContext * /*ctx*/) override { }

  virtual void enterChoiceOption(VNScriptParser::ChoiceOptionContext * /*ctx*/) override { }
  virtual void exitChoiceOption(VNScriptParser::ChoiceOptionContext * /*ctx*/) override { }

  virtual void enterBlock(VNScriptParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(VNScriptParser::BlockContext * /*ctx*/) override { }

  virtual void enterIfStmt(VNScriptParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(VNScriptParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterCondition(VNScriptParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(VNScriptParser::ConditionContext * /*ctx*/) override { }

  virtual void enterSavepointStmt(VNScriptParser::SavepointStmtContext * /*ctx*/) override { }
  virtual void exitSavepointStmt(VNScriptParser::SavepointStmtContext * /*ctx*/) override { }

  virtual void enterGotoStmt(VNScriptParser::GotoStmtContext * /*ctx*/) override { }
  virtual void exitGotoStmt(VNScriptParser::GotoStmtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

