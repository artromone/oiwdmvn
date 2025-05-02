
// Generated from /home/art/programming/pet/oiwdmvn/VNScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VNScriptVisitor.h"


/**
 * This class provides an empty implementation of VNScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  VNScriptBaseVisitor : public VNScriptVisitor {
public:

  virtual std::any visitScript(VNScriptParser::ScriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(VNScriptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSceneStart(VNScriptParser::SceneStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSceneEnd(VNScriptParser::SceneEndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackgroundStmt(VNScriptParser::BackgroundStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMusicStmt(VNScriptParser::MusicStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSoundStmt(VNScriptParser::SoundStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacterDef(VNScriptParser::CharacterDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacterBody(VNScriptParser::CharacterBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharPropStmt(VNScriptParser::CharPropStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSayStmt(VNScriptParser::SayStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNarrateStmt(VNScriptParser::NarrateStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(VNScriptParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetStmt(VNScriptParser::SetStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLvalue(VNScriptParser::LvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignOp(VNScriptParser::AssignOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(VNScriptParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(VNScriptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceStmt(VNScriptParser::ChoiceStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceOption(VNScriptParser::ChoiceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParallelStmt(VNScriptParser::ParallelStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDef(VNScriptParser::FunctionDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryCatchStmt(VNScriptParser::TryCatchStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSavepointStmt(VNScriptParser::SavepointStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransitionStmt(VNScriptParser::TransitionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportStmt(VNScriptParser::ImportStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDebugBlock(VNScriptParser::DebugBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGotoStmt(VNScriptParser::GotoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnimateStmt(VNScriptParser::AnimateStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlayStmt(VNScriptParser::PlayStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWaitStmt(VNScriptParser::WaitStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(VNScriptParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogStmt(VNScriptParser::LogStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(VNScriptParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

