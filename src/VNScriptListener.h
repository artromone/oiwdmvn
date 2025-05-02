
// Generated from /home/art/programming/pet/oiwdmvn/VNScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VNScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by VNScriptParser.
 */
class  VNScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterScript(VNScriptParser::ScriptContext *ctx) = 0;
  virtual void exitScript(VNScriptParser::ScriptContext *ctx) = 0;

  virtual void enterStatement(VNScriptParser::StatementContext *ctx) = 0;
  virtual void exitStatement(VNScriptParser::StatementContext *ctx) = 0;

  virtual void enterSceneStart(VNScriptParser::SceneStartContext *ctx) = 0;
  virtual void exitSceneStart(VNScriptParser::SceneStartContext *ctx) = 0;

  virtual void enterSceneEnd(VNScriptParser::SceneEndContext *ctx) = 0;
  virtual void exitSceneEnd(VNScriptParser::SceneEndContext *ctx) = 0;

  virtual void enterBackgroundStmt(VNScriptParser::BackgroundStmtContext *ctx) = 0;
  virtual void exitBackgroundStmt(VNScriptParser::BackgroundStmtContext *ctx) = 0;

  virtual void enterMusicStmt(VNScriptParser::MusicStmtContext *ctx) = 0;
  virtual void exitMusicStmt(VNScriptParser::MusicStmtContext *ctx) = 0;

  virtual void enterSoundStmt(VNScriptParser::SoundStmtContext *ctx) = 0;
  virtual void exitSoundStmt(VNScriptParser::SoundStmtContext *ctx) = 0;

  virtual void enterCharacterDef(VNScriptParser::CharacterDefContext *ctx) = 0;
  virtual void exitCharacterDef(VNScriptParser::CharacterDefContext *ctx) = 0;

  virtual void enterCharacterBody(VNScriptParser::CharacterBodyContext *ctx) = 0;
  virtual void exitCharacterBody(VNScriptParser::CharacterBodyContext *ctx) = 0;

  virtual void enterCharPropStmt(VNScriptParser::CharPropStmtContext *ctx) = 0;
  virtual void exitCharPropStmt(VNScriptParser::CharPropStmtContext *ctx) = 0;

  virtual void enterSayStmt(VNScriptParser::SayStmtContext *ctx) = 0;
  virtual void exitSayStmt(VNScriptParser::SayStmtContext *ctx) = 0;

  virtual void enterNarrateStmt(VNScriptParser::NarrateStmtContext *ctx) = 0;
  virtual void exitNarrateStmt(VNScriptParser::NarrateStmtContext *ctx) = 0;

  virtual void enterVarDecl(VNScriptParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(VNScriptParser::VarDeclContext *ctx) = 0;

  virtual void enterSetStmt(VNScriptParser::SetStmtContext *ctx) = 0;
  virtual void exitSetStmt(VNScriptParser::SetStmtContext *ctx) = 0;

  virtual void enterLvalue(VNScriptParser::LvalueContext *ctx) = 0;
  virtual void exitLvalue(VNScriptParser::LvalueContext *ctx) = 0;

  virtual void enterAssignOp(VNScriptParser::AssignOpContext *ctx) = 0;
  virtual void exitAssignOp(VNScriptParser::AssignOpContext *ctx) = 0;

  virtual void enterIfStmt(VNScriptParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(VNScriptParser::IfStmtContext *ctx) = 0;

  virtual void enterBlock(VNScriptParser::BlockContext *ctx) = 0;
  virtual void exitBlock(VNScriptParser::BlockContext *ctx) = 0;

  virtual void enterChoiceStmt(VNScriptParser::ChoiceStmtContext *ctx) = 0;
  virtual void exitChoiceStmt(VNScriptParser::ChoiceStmtContext *ctx) = 0;

  virtual void enterChoiceOption(VNScriptParser::ChoiceOptionContext *ctx) = 0;
  virtual void exitChoiceOption(VNScriptParser::ChoiceOptionContext *ctx) = 0;

  virtual void enterParallelStmt(VNScriptParser::ParallelStmtContext *ctx) = 0;
  virtual void exitParallelStmt(VNScriptParser::ParallelStmtContext *ctx) = 0;

  virtual void enterFunctionDef(VNScriptParser::FunctionDefContext *ctx) = 0;
  virtual void exitFunctionDef(VNScriptParser::FunctionDefContext *ctx) = 0;

  virtual void enterTryCatchStmt(VNScriptParser::TryCatchStmtContext *ctx) = 0;
  virtual void exitTryCatchStmt(VNScriptParser::TryCatchStmtContext *ctx) = 0;

  virtual void enterSavepointStmt(VNScriptParser::SavepointStmtContext *ctx) = 0;
  virtual void exitSavepointStmt(VNScriptParser::SavepointStmtContext *ctx) = 0;

  virtual void enterTransitionStmt(VNScriptParser::TransitionStmtContext *ctx) = 0;
  virtual void exitTransitionStmt(VNScriptParser::TransitionStmtContext *ctx) = 0;

  virtual void enterImportStmt(VNScriptParser::ImportStmtContext *ctx) = 0;
  virtual void exitImportStmt(VNScriptParser::ImportStmtContext *ctx) = 0;

  virtual void enterDebugBlock(VNScriptParser::DebugBlockContext *ctx) = 0;
  virtual void exitDebugBlock(VNScriptParser::DebugBlockContext *ctx) = 0;

  virtual void enterGotoStmt(VNScriptParser::GotoStmtContext *ctx) = 0;
  virtual void exitGotoStmt(VNScriptParser::GotoStmtContext *ctx) = 0;

  virtual void enterAnimateStmt(VNScriptParser::AnimateStmtContext *ctx) = 0;
  virtual void exitAnimateStmt(VNScriptParser::AnimateStmtContext *ctx) = 0;

  virtual void enterPlayStmt(VNScriptParser::PlayStmtContext *ctx) = 0;
  virtual void exitPlayStmt(VNScriptParser::PlayStmtContext *ctx) = 0;

  virtual void enterWaitStmt(VNScriptParser::WaitStmtContext *ctx) = 0;
  virtual void exitWaitStmt(VNScriptParser::WaitStmtContext *ctx) = 0;

  virtual void enterReturnStmt(VNScriptParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(VNScriptParser::ReturnStmtContext *ctx) = 0;

  virtual void enterLogStmt(VNScriptParser::LogStmtContext *ctx) = 0;
  virtual void exitLogStmt(VNScriptParser::LogStmtContext *ctx) = 0;

  virtual void enterExpr(VNScriptParser::ExprContext *ctx) = 0;
  virtual void exitExpr(VNScriptParser::ExprContext *ctx) = 0;


};

