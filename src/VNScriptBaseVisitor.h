
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

  virtual std::any visitCharacterDef(VNScriptParser::CharacterDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacterProp(VNScriptParser::CharacterPropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolValue(VNScriptParser::BoolValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDialogueStmt(VNScriptParser::DialogueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNarrateStmt(VNScriptParser::NarrateStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCenterTextStmt(VNScriptParser::CenterTextStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(VNScriptParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarAssign(VNScriptParser::VarAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropAssign(VNScriptParser::PropAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(VNScriptParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceStmt(VNScriptParser::ChoiceStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceOption(VNScriptParser::ChoiceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(VNScriptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(VNScriptParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(VNScriptParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleCondition(VNScriptParser::SimpleConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSavepointStmt(VNScriptParser::SavepointStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGotoStmt(VNScriptParser::GotoStmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

