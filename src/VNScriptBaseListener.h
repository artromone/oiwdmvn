
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

  virtual void enterSoundStmt(VNScriptParser::SoundStmtContext * /*ctx*/) override { }
  virtual void exitSoundStmt(VNScriptParser::SoundStmtContext * /*ctx*/) override { }

  virtual void enterCharacterDef(VNScriptParser::CharacterDefContext * /*ctx*/) override { }
  virtual void exitCharacterDef(VNScriptParser::CharacterDefContext * /*ctx*/) override { }

  virtual void enterCharacterBody(VNScriptParser::CharacterBodyContext * /*ctx*/) override { }
  virtual void exitCharacterBody(VNScriptParser::CharacterBodyContext * /*ctx*/) override { }

  virtual void enterCharPropStmt(VNScriptParser::CharPropStmtContext * /*ctx*/) override { }
  virtual void exitCharPropStmt(VNScriptParser::CharPropStmtContext * /*ctx*/) override { }

  virtual void enterSayStmt(VNScriptParser::SayStmtContext * /*ctx*/) override { }
  virtual void exitSayStmt(VNScriptParser::SayStmtContext * /*ctx*/) override { }

  virtual void enterNarrateStmt(VNScriptParser::NarrateStmtContext * /*ctx*/) override { }
  virtual void exitNarrateStmt(VNScriptParser::NarrateStmtContext * /*ctx*/) override { }

  virtual void enterVarDecl(VNScriptParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(VNScriptParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterSetStmt(VNScriptParser::SetStmtContext * /*ctx*/) override { }
  virtual void exitSetStmt(VNScriptParser::SetStmtContext * /*ctx*/) override { }

  virtual void enterLvalue(VNScriptParser::LvalueContext * /*ctx*/) override { }
  virtual void exitLvalue(VNScriptParser::LvalueContext * /*ctx*/) override { }

  virtual void enterAssignOp(VNScriptParser::AssignOpContext * /*ctx*/) override { }
  virtual void exitAssignOp(VNScriptParser::AssignOpContext * /*ctx*/) override { }

  virtual void enterIfStmt(VNScriptParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(VNScriptParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterBlock(VNScriptParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(VNScriptParser::BlockContext * /*ctx*/) override { }

  virtual void enterChoiceStmt(VNScriptParser::ChoiceStmtContext * /*ctx*/) override { }
  virtual void exitChoiceStmt(VNScriptParser::ChoiceStmtContext * /*ctx*/) override { }

  virtual void enterChoiceOption(VNScriptParser::ChoiceOptionContext * /*ctx*/) override { }
  virtual void exitChoiceOption(VNScriptParser::ChoiceOptionContext * /*ctx*/) override { }

  virtual void enterParallelStmt(VNScriptParser::ParallelStmtContext * /*ctx*/) override { }
  virtual void exitParallelStmt(VNScriptParser::ParallelStmtContext * /*ctx*/) override { }

  virtual void enterFunctionDef(VNScriptParser::FunctionDefContext * /*ctx*/) override { }
  virtual void exitFunctionDef(VNScriptParser::FunctionDefContext * /*ctx*/) override { }

  virtual void enterTryCatchStmt(VNScriptParser::TryCatchStmtContext * /*ctx*/) override { }
  virtual void exitTryCatchStmt(VNScriptParser::TryCatchStmtContext * /*ctx*/) override { }

  virtual void enterSavepointStmt(VNScriptParser::SavepointStmtContext * /*ctx*/) override { }
  virtual void exitSavepointStmt(VNScriptParser::SavepointStmtContext * /*ctx*/) override { }

  virtual void enterTransitionStmt(VNScriptParser::TransitionStmtContext * /*ctx*/) override { }
  virtual void exitTransitionStmt(VNScriptParser::TransitionStmtContext * /*ctx*/) override { }

  virtual void enterImportStmt(VNScriptParser::ImportStmtContext * /*ctx*/) override { }
  virtual void exitImportStmt(VNScriptParser::ImportStmtContext * /*ctx*/) override { }

  virtual void enterDebugBlock(VNScriptParser::DebugBlockContext * /*ctx*/) override { }
  virtual void exitDebugBlock(VNScriptParser::DebugBlockContext * /*ctx*/) override { }

  virtual void enterGotoStmt(VNScriptParser::GotoStmtContext * /*ctx*/) override { }
  virtual void exitGotoStmt(VNScriptParser::GotoStmtContext * /*ctx*/) override { }

  virtual void enterAnimateStmt(VNScriptParser::AnimateStmtContext * /*ctx*/) override { }
  virtual void exitAnimateStmt(VNScriptParser::AnimateStmtContext * /*ctx*/) override { }

  virtual void enterPlayStmt(VNScriptParser::PlayStmtContext * /*ctx*/) override { }
  virtual void exitPlayStmt(VNScriptParser::PlayStmtContext * /*ctx*/) override { }

  virtual void enterWaitStmt(VNScriptParser::WaitStmtContext * /*ctx*/) override { }
  virtual void exitWaitStmt(VNScriptParser::WaitStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(VNScriptParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(VNScriptParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterLogStmt(VNScriptParser::LogStmtContext * /*ctx*/) override { }
  virtual void exitLogStmt(VNScriptParser::LogStmtContext * /*ctx*/) override { }

  virtual void enterExpr(VNScriptParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(VNScriptParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

