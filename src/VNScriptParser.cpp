
// Generated from /home/art/programming/pet/oiwdmvn/VNScript.g4 by ANTLR 4.13.2


#include "VNScriptListener.h"
#include "VNScriptVisitor.h"

#include "VNScriptParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct VNScriptParserStaticData final {
  VNScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VNScriptParserStaticData(const VNScriptParserStaticData&) = delete;
  VNScriptParserStaticData(VNScriptParserStaticData&&) = delete;
  VNScriptParserStaticData& operator=(const VNScriptParserStaticData&) = delete;
  VNScriptParserStaticData& operator=(VNScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag vnscriptParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<VNScriptParserStaticData> vnscriptParserStaticData = nullptr;

void vnscriptParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (vnscriptParserStaticData != nullptr) {
    return;
  }
#else
  assert(vnscriptParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<VNScriptParserStaticData>(
    std::vector<std::string>{
      "script", "statement", "sceneStart", "sceneEnd", "backgroundStmt", 
      "musicStmt", "characterDef", "characterBody", "charPropStmt", "dialogueStmt", 
      "narrateStmt", "varAssign", "propAssign", "expr", "choiceStmt", "choiceOption", 
      "block", "ifStmt", "condition", "savepointStmt", "gotoStmt"
    },
    std::vector<std::string>{
      "", "'scene_start'", "'scene_end'", "'background'", "'music'", "'character'", 
      "'{'", "'}'", "'var'", "'narrate'", "'.'", "'true'", "'false'", "'choice'", 
      "'if'", "'else'", "'=='", "'savepoint'", "'goto'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "COMMENT", "WS", "STRING", "NUMBER", "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,23,156,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,5,
  	0,44,8,0,10,0,12,0,47,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,64,8,1,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,
  	5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,5,7,84,8,7,10,7,12,7,87,9,7,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,3,8,96,8,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,14,1,14,1,14,4,14,117,8,14,11,14,
  	12,14,118,1,14,1,14,1,15,1,15,1,15,1,16,1,16,5,16,128,8,16,10,16,12,16,
  	131,9,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,3,17,140,8,17,1,18,1,18,1,
  	18,3,18,145,8,18,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,20,0,
  	0,21,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,0,1,2,
  	0,11,12,21,23,154,0,45,1,0,0,0,2,63,1,0,0,0,4,65,1,0,0,0,6,68,1,0,0,0,
  	8,70,1,0,0,0,10,73,1,0,0,0,12,76,1,0,0,0,14,85,1,0,0,0,16,95,1,0,0,0,
  	18,97,1,0,0,0,20,100,1,0,0,0,22,103,1,0,0,0,24,106,1,0,0,0,26,111,1,0,
  	0,0,28,113,1,0,0,0,30,122,1,0,0,0,32,125,1,0,0,0,34,134,1,0,0,0,36,141,
  	1,0,0,0,38,149,1,0,0,0,40,152,1,0,0,0,42,44,3,2,1,0,43,42,1,0,0,0,44,
  	47,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,48,1,0,0,0,47,45,1,0,0,0,48,
  	49,5,0,0,1,49,1,1,0,0,0,50,64,3,4,2,0,51,64,3,6,3,0,52,64,3,8,4,0,53,
  	64,3,10,5,0,54,64,3,12,6,0,55,64,3,18,9,0,56,64,3,20,10,0,57,64,3,22,
  	11,0,58,64,3,24,12,0,59,64,3,34,17,0,60,64,3,28,14,0,61,64,3,38,19,0,
  	62,64,3,40,20,0,63,50,1,0,0,0,63,51,1,0,0,0,63,52,1,0,0,0,63,53,1,0,0,
  	0,63,54,1,0,0,0,63,55,1,0,0,0,63,56,1,0,0,0,63,57,1,0,0,0,63,58,1,0,0,
  	0,63,59,1,0,0,0,63,60,1,0,0,0,63,61,1,0,0,0,63,62,1,0,0,0,64,3,1,0,0,
  	0,65,66,5,1,0,0,66,67,5,21,0,0,67,5,1,0,0,0,68,69,5,2,0,0,69,7,1,0,0,
  	0,70,71,5,3,0,0,71,72,5,21,0,0,72,9,1,0,0,0,73,74,5,4,0,0,74,75,5,21,
  	0,0,75,11,1,0,0,0,76,77,5,5,0,0,77,78,5,23,0,0,78,79,5,6,0,0,79,80,3,
  	14,7,0,80,81,5,7,0,0,81,13,1,0,0,0,82,84,3,16,8,0,83,82,1,0,0,0,84,87,
  	1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,15,1,0,0,0,87,85,1,0,0,0,88,89,
  	5,23,0,0,89,96,5,21,0,0,90,91,5,23,0,0,91,96,5,22,0,0,92,93,5,8,0,0,93,
  	94,5,23,0,0,94,96,5,21,0,0,95,88,1,0,0,0,95,90,1,0,0,0,95,92,1,0,0,0,
  	96,17,1,0,0,0,97,98,5,23,0,0,98,99,5,21,0,0,99,19,1,0,0,0,100,101,5,9,
  	0,0,101,102,5,21,0,0,102,21,1,0,0,0,103,104,5,23,0,0,104,105,3,26,13,
  	0,105,23,1,0,0,0,106,107,5,23,0,0,107,108,5,10,0,0,108,109,5,23,0,0,109,
  	110,3,26,13,0,110,25,1,0,0,0,111,112,7,0,0,0,112,27,1,0,0,0,113,114,5,
  	13,0,0,114,116,5,6,0,0,115,117,3,30,15,0,116,115,1,0,0,0,117,118,1,0,
  	0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,120,1,0,0,0,120,121,5,7,0,0,121,
  	29,1,0,0,0,122,123,5,21,0,0,123,124,3,32,16,0,124,31,1,0,0,0,125,129,
  	5,6,0,0,126,128,3,2,1,0,127,126,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,
  	0,129,130,1,0,0,0,130,132,1,0,0,0,131,129,1,0,0,0,132,133,5,7,0,0,133,
  	33,1,0,0,0,134,135,5,14,0,0,135,136,3,36,18,0,136,139,3,32,16,0,137,138,
  	5,15,0,0,138,140,3,32,16,0,139,137,1,0,0,0,139,140,1,0,0,0,140,35,1,0,
  	0,0,141,144,5,23,0,0,142,143,5,10,0,0,143,145,5,23,0,0,144,142,1,0,0,
  	0,144,145,1,0,0,0,145,146,1,0,0,0,146,147,5,16,0,0,147,148,3,26,13,0,
  	148,37,1,0,0,0,149,150,5,17,0,0,150,151,5,21,0,0,151,39,1,0,0,0,152,153,
  	5,18,0,0,153,154,5,21,0,0,154,41,1,0,0,0,8,45,63,85,95,118,129,139,144
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  vnscriptParserStaticData = std::move(staticData);
}

}

VNScriptParser::VNScriptParser(TokenStream *input) : VNScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

VNScriptParser::VNScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  VNScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *vnscriptParserStaticData->atn, vnscriptParserStaticData->decisionToDFA, vnscriptParserStaticData->sharedContextCache, options);
}

VNScriptParser::~VNScriptParser() {
  delete _interpreter;
}

const atn::ATN& VNScriptParser::getATN() const {
  return *vnscriptParserStaticData->atn;
}

std::string VNScriptParser::getGrammarFileName() const {
  return "VNScript.g4";
}

const std::vector<std::string>& VNScriptParser::getRuleNames() const {
  return vnscriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& VNScriptParser::getVocabulary() const {
  return vnscriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VNScriptParser::getSerializedATN() const {
  return vnscriptParserStaticData->serializedATN;
}


//----------------- ScriptContext ------------------------------------------------------------------

VNScriptParser::ScriptContext::ScriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::ScriptContext::EOF() {
  return getToken(VNScriptParser::EOF, 0);
}

std::vector<VNScriptParser::StatementContext *> VNScriptParser::ScriptContext::statement() {
  return getRuleContexts<VNScriptParser::StatementContext>();
}

VNScriptParser::StatementContext* VNScriptParser::ScriptContext::statement(size_t i) {
  return getRuleContext<VNScriptParser::StatementContext>(i);
}


size_t VNScriptParser::ScriptContext::getRuleIndex() const {
  return VNScriptParser::RuleScript;
}

void VNScriptParser::ScriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScript(this);
}

void VNScriptParser::ScriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScript(this);
}


std::any VNScriptParser::ScriptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitScript(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::ScriptContext* VNScriptParser::script() {
  ScriptContext *_localctx = _tracker.createInstance<ScriptContext>(_ctx, getState());
  enterRule(_localctx, 0, VNScriptParser::RuleScript);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8806974) != 0)) {
      setState(42);
      statement();
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(48);
    match(VNScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

VNScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::SceneStartContext* VNScriptParser::StatementContext::sceneStart() {
  return getRuleContext<VNScriptParser::SceneStartContext>(0);
}

VNScriptParser::SceneEndContext* VNScriptParser::StatementContext::sceneEnd() {
  return getRuleContext<VNScriptParser::SceneEndContext>(0);
}

VNScriptParser::BackgroundStmtContext* VNScriptParser::StatementContext::backgroundStmt() {
  return getRuleContext<VNScriptParser::BackgroundStmtContext>(0);
}

VNScriptParser::MusicStmtContext* VNScriptParser::StatementContext::musicStmt() {
  return getRuleContext<VNScriptParser::MusicStmtContext>(0);
}

VNScriptParser::CharacterDefContext* VNScriptParser::StatementContext::characterDef() {
  return getRuleContext<VNScriptParser::CharacterDefContext>(0);
}

VNScriptParser::DialogueStmtContext* VNScriptParser::StatementContext::dialogueStmt() {
  return getRuleContext<VNScriptParser::DialogueStmtContext>(0);
}

VNScriptParser::NarrateStmtContext* VNScriptParser::StatementContext::narrateStmt() {
  return getRuleContext<VNScriptParser::NarrateStmtContext>(0);
}

VNScriptParser::VarAssignContext* VNScriptParser::StatementContext::varAssign() {
  return getRuleContext<VNScriptParser::VarAssignContext>(0);
}

VNScriptParser::PropAssignContext* VNScriptParser::StatementContext::propAssign() {
  return getRuleContext<VNScriptParser::PropAssignContext>(0);
}

VNScriptParser::IfStmtContext* VNScriptParser::StatementContext::ifStmt() {
  return getRuleContext<VNScriptParser::IfStmtContext>(0);
}

VNScriptParser::ChoiceStmtContext* VNScriptParser::StatementContext::choiceStmt() {
  return getRuleContext<VNScriptParser::ChoiceStmtContext>(0);
}

VNScriptParser::SavepointStmtContext* VNScriptParser::StatementContext::savepointStmt() {
  return getRuleContext<VNScriptParser::SavepointStmtContext>(0);
}

VNScriptParser::GotoStmtContext* VNScriptParser::StatementContext::gotoStmt() {
  return getRuleContext<VNScriptParser::GotoStmtContext>(0);
}


size_t VNScriptParser::StatementContext::getRuleIndex() const {
  return VNScriptParser::RuleStatement;
}

void VNScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void VNScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any VNScriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::StatementContext* VNScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, VNScriptParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(50);
      sceneStart();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(51);
      sceneEnd();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(52);
      backgroundStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(53);
      musicStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(54);
      characterDef();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(55);
      dialogueStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(56);
      narrateStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(57);
      varAssign();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(58);
      propAssign();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(59);
      ifStmt();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(60);
      choiceStmt();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(61);
      savepointStmt();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(62);
      gotoStmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SceneStartContext ------------------------------------------------------------------

VNScriptParser::SceneStartContext::SceneStartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::SceneStartContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}


size_t VNScriptParser::SceneStartContext::getRuleIndex() const {
  return VNScriptParser::RuleSceneStart;
}

void VNScriptParser::SceneStartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSceneStart(this);
}

void VNScriptParser::SceneStartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSceneStart(this);
}


std::any VNScriptParser::SceneStartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitSceneStart(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::SceneStartContext* VNScriptParser::sceneStart() {
  SceneStartContext *_localctx = _tracker.createInstance<SceneStartContext>(_ctx, getState());
  enterRule(_localctx, 4, VNScriptParser::RuleSceneStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(VNScriptParser::T__0);
    setState(66);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SceneEndContext ------------------------------------------------------------------

VNScriptParser::SceneEndContext::SceneEndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t VNScriptParser::SceneEndContext::getRuleIndex() const {
  return VNScriptParser::RuleSceneEnd;
}

void VNScriptParser::SceneEndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSceneEnd(this);
}

void VNScriptParser::SceneEndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSceneEnd(this);
}


std::any VNScriptParser::SceneEndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitSceneEnd(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::SceneEndContext* VNScriptParser::sceneEnd() {
  SceneEndContext *_localctx = _tracker.createInstance<SceneEndContext>(_ctx, getState());
  enterRule(_localctx, 6, VNScriptParser::RuleSceneEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(VNScriptParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BackgroundStmtContext ------------------------------------------------------------------

VNScriptParser::BackgroundStmtContext::BackgroundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::BackgroundStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}


size_t VNScriptParser::BackgroundStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleBackgroundStmt;
}

void VNScriptParser::BackgroundStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBackgroundStmt(this);
}

void VNScriptParser::BackgroundStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBackgroundStmt(this);
}


std::any VNScriptParser::BackgroundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitBackgroundStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::BackgroundStmtContext* VNScriptParser::backgroundStmt() {
  BackgroundStmtContext *_localctx = _tracker.createInstance<BackgroundStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, VNScriptParser::RuleBackgroundStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(VNScriptParser::T__2);
    setState(71);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MusicStmtContext ------------------------------------------------------------------

VNScriptParser::MusicStmtContext::MusicStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::MusicStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}


size_t VNScriptParser::MusicStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleMusicStmt;
}

void VNScriptParser::MusicStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMusicStmt(this);
}

void VNScriptParser::MusicStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMusicStmt(this);
}


std::any VNScriptParser::MusicStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitMusicStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::MusicStmtContext* VNScriptParser::musicStmt() {
  MusicStmtContext *_localctx = _tracker.createInstance<MusicStmtContext>(_ctx, getState());
  enterRule(_localctx, 10, VNScriptParser::RuleMusicStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(VNScriptParser::T__3);
    setState(74);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterDefContext ------------------------------------------------------------------

VNScriptParser::CharacterDefContext::CharacterDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::CharacterDefContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

VNScriptParser::CharacterBodyContext* VNScriptParser::CharacterDefContext::characterBody() {
  return getRuleContext<VNScriptParser::CharacterBodyContext>(0);
}


size_t VNScriptParser::CharacterDefContext::getRuleIndex() const {
  return VNScriptParser::RuleCharacterDef;
}

void VNScriptParser::CharacterDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterDef(this);
}

void VNScriptParser::CharacterDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterDef(this);
}


std::any VNScriptParser::CharacterDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitCharacterDef(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::CharacterDefContext* VNScriptParser::characterDef() {
  CharacterDefContext *_localctx = _tracker.createInstance<CharacterDefContext>(_ctx, getState());
  enterRule(_localctx, 12, VNScriptParser::RuleCharacterDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(VNScriptParser::T__4);
    setState(77);
    match(VNScriptParser::ID);
    setState(78);
    match(VNScriptParser::T__5);
    setState(79);
    characterBody();
    setState(80);
    match(VNScriptParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterBodyContext ------------------------------------------------------------------

VNScriptParser::CharacterBodyContext::CharacterBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VNScriptParser::CharPropStmtContext *> VNScriptParser::CharacterBodyContext::charPropStmt() {
  return getRuleContexts<VNScriptParser::CharPropStmtContext>();
}

VNScriptParser::CharPropStmtContext* VNScriptParser::CharacterBodyContext::charPropStmt(size_t i) {
  return getRuleContext<VNScriptParser::CharPropStmtContext>(i);
}


size_t VNScriptParser::CharacterBodyContext::getRuleIndex() const {
  return VNScriptParser::RuleCharacterBody;
}

void VNScriptParser::CharacterBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterBody(this);
}

void VNScriptParser::CharacterBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterBody(this);
}


std::any VNScriptParser::CharacterBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitCharacterBody(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::CharacterBodyContext* VNScriptParser::characterBody() {
  CharacterBodyContext *_localctx = _tracker.createInstance<CharacterBodyContext>(_ctx, getState());
  enterRule(_localctx, 14, VNScriptParser::RuleCharacterBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VNScriptParser::T__7

    || _la == VNScriptParser::ID) {
      setState(82);
      charPropStmt();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharPropStmtContext ------------------------------------------------------------------

VNScriptParser::CharPropStmtContext::CharPropStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::CharPropStmtContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::CharPropStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::CharPropStmtContext::NUMBER() {
  return getToken(VNScriptParser::NUMBER, 0);
}


size_t VNScriptParser::CharPropStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleCharPropStmt;
}

void VNScriptParser::CharPropStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharPropStmt(this);
}

void VNScriptParser::CharPropStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharPropStmt(this);
}


std::any VNScriptParser::CharPropStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitCharPropStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::CharPropStmtContext* VNScriptParser::charPropStmt() {
  CharPropStmtContext *_localctx = _tracker.createInstance<CharPropStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, VNScriptParser::RuleCharPropStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      match(VNScriptParser::ID);
      setState(89);
      match(VNScriptParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(90);
      match(VNScriptParser::ID);
      setState(91);
      match(VNScriptParser::NUMBER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(92);
      match(VNScriptParser::T__7);
      setState(93);
      match(VNScriptParser::ID);
      setState(94);
      match(VNScriptParser::STRING);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DialogueStmtContext ------------------------------------------------------------------

VNScriptParser::DialogueStmtContext::DialogueStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::DialogueStmtContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::DialogueStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}


size_t VNScriptParser::DialogueStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleDialogueStmt;
}

void VNScriptParser::DialogueStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDialogueStmt(this);
}

void VNScriptParser::DialogueStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDialogueStmt(this);
}


std::any VNScriptParser::DialogueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitDialogueStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::DialogueStmtContext* VNScriptParser::dialogueStmt() {
  DialogueStmtContext *_localctx = _tracker.createInstance<DialogueStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, VNScriptParser::RuleDialogueStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(VNScriptParser::ID);
    setState(98);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NarrateStmtContext ------------------------------------------------------------------

VNScriptParser::NarrateStmtContext::NarrateStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::NarrateStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}


size_t VNScriptParser::NarrateStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleNarrateStmt;
}

void VNScriptParser::NarrateStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNarrateStmt(this);
}

void VNScriptParser::NarrateStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNarrateStmt(this);
}


std::any VNScriptParser::NarrateStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitNarrateStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::NarrateStmtContext* VNScriptParser::narrateStmt() {
  NarrateStmtContext *_localctx = _tracker.createInstance<NarrateStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, VNScriptParser::RuleNarrateStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(VNScriptParser::T__8);
    setState(101);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarAssignContext ------------------------------------------------------------------

VNScriptParser::VarAssignContext::VarAssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::VarAssignContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

VNScriptParser::ExprContext* VNScriptParser::VarAssignContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}


size_t VNScriptParser::VarAssignContext::getRuleIndex() const {
  return VNScriptParser::RuleVarAssign;
}

void VNScriptParser::VarAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarAssign(this);
}

void VNScriptParser::VarAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarAssign(this);
}


std::any VNScriptParser::VarAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitVarAssign(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::VarAssignContext* VNScriptParser::varAssign() {
  VarAssignContext *_localctx = _tracker.createInstance<VarAssignContext>(_ctx, getState());
  enterRule(_localctx, 22, VNScriptParser::RuleVarAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(VNScriptParser::ID);
    setState(104);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropAssignContext ------------------------------------------------------------------

VNScriptParser::PropAssignContext::PropAssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VNScriptParser::PropAssignContext::ID() {
  return getTokens(VNScriptParser::ID);
}

tree::TerminalNode* VNScriptParser::PropAssignContext::ID(size_t i) {
  return getToken(VNScriptParser::ID, i);
}

VNScriptParser::ExprContext* VNScriptParser::PropAssignContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}


size_t VNScriptParser::PropAssignContext::getRuleIndex() const {
  return VNScriptParser::RulePropAssign;
}

void VNScriptParser::PropAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropAssign(this);
}

void VNScriptParser::PropAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropAssign(this);
}


std::any VNScriptParser::PropAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitPropAssign(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::PropAssignContext* VNScriptParser::propAssign() {
  PropAssignContext *_localctx = _tracker.createInstance<PropAssignContext>(_ctx, getState());
  enterRule(_localctx, 24, VNScriptParser::RulePropAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(VNScriptParser::ID);
    setState(107);
    match(VNScriptParser::T__9);
    setState(108);
    match(VNScriptParser::ID);
    setState(109);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

VNScriptParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::ExprContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::ExprContext::NUMBER() {
  return getToken(VNScriptParser::NUMBER, 0);
}

tree::TerminalNode* VNScriptParser::ExprContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}


size_t VNScriptParser::ExprContext::getRuleIndex() const {
  return VNScriptParser::RuleExpr;
}

void VNScriptParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void VNScriptParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any VNScriptParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::ExprContext* VNScriptParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 26, VNScriptParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14686208) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChoiceStmtContext ------------------------------------------------------------------

VNScriptParser::ChoiceStmtContext::ChoiceStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VNScriptParser::ChoiceOptionContext *> VNScriptParser::ChoiceStmtContext::choiceOption() {
  return getRuleContexts<VNScriptParser::ChoiceOptionContext>();
}

VNScriptParser::ChoiceOptionContext* VNScriptParser::ChoiceStmtContext::choiceOption(size_t i) {
  return getRuleContext<VNScriptParser::ChoiceOptionContext>(i);
}


size_t VNScriptParser::ChoiceStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleChoiceStmt;
}

void VNScriptParser::ChoiceStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChoiceStmt(this);
}

void VNScriptParser::ChoiceStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChoiceStmt(this);
}


std::any VNScriptParser::ChoiceStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitChoiceStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::ChoiceStmtContext* VNScriptParser::choiceStmt() {
  ChoiceStmtContext *_localctx = _tracker.createInstance<ChoiceStmtContext>(_ctx, getState());
  enterRule(_localctx, 28, VNScriptParser::RuleChoiceStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(VNScriptParser::T__12);
    setState(114);
    match(VNScriptParser::T__5);
    setState(116); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(115);
      choiceOption();
      setState(118); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == VNScriptParser::STRING);
    setState(120);
    match(VNScriptParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChoiceOptionContext ------------------------------------------------------------------

VNScriptParser::ChoiceOptionContext::ChoiceOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::ChoiceOptionContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

VNScriptParser::BlockContext* VNScriptParser::ChoiceOptionContext::block() {
  return getRuleContext<VNScriptParser::BlockContext>(0);
}


size_t VNScriptParser::ChoiceOptionContext::getRuleIndex() const {
  return VNScriptParser::RuleChoiceOption;
}

void VNScriptParser::ChoiceOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChoiceOption(this);
}

void VNScriptParser::ChoiceOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChoiceOption(this);
}


std::any VNScriptParser::ChoiceOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitChoiceOption(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::ChoiceOptionContext* VNScriptParser::choiceOption() {
  ChoiceOptionContext *_localctx = _tracker.createInstance<ChoiceOptionContext>(_ctx, getState());
  enterRule(_localctx, 30, VNScriptParser::RuleChoiceOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(VNScriptParser::STRING);
    setState(123);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

VNScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VNScriptParser::StatementContext *> VNScriptParser::BlockContext::statement() {
  return getRuleContexts<VNScriptParser::StatementContext>();
}

VNScriptParser::StatementContext* VNScriptParser::BlockContext::statement(size_t i) {
  return getRuleContext<VNScriptParser::StatementContext>(i);
}


size_t VNScriptParser::BlockContext::getRuleIndex() const {
  return VNScriptParser::RuleBlock;
}

void VNScriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void VNScriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any VNScriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::BlockContext* VNScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 32, VNScriptParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(VNScriptParser::T__5);
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8806974) != 0)) {
      setState(126);
      statement();
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
    match(VNScriptParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

VNScriptParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::ConditionContext* VNScriptParser::IfStmtContext::condition() {
  return getRuleContext<VNScriptParser::ConditionContext>(0);
}

std::vector<VNScriptParser::BlockContext *> VNScriptParser::IfStmtContext::block() {
  return getRuleContexts<VNScriptParser::BlockContext>();
}

VNScriptParser::BlockContext* VNScriptParser::IfStmtContext::block(size_t i) {
  return getRuleContext<VNScriptParser::BlockContext>(i);
}


size_t VNScriptParser::IfStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleIfStmt;
}

void VNScriptParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void VNScriptParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}


std::any VNScriptParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::IfStmtContext* VNScriptParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, VNScriptParser::RuleIfStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(VNScriptParser::T__13);
    setState(135);
    condition();
    setState(136);
    block();
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VNScriptParser::T__14) {
      setState(137);
      match(VNScriptParser::T__14);
      setState(138);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

VNScriptParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VNScriptParser::ConditionContext::ID() {
  return getTokens(VNScriptParser::ID);
}

tree::TerminalNode* VNScriptParser::ConditionContext::ID(size_t i) {
  return getToken(VNScriptParser::ID, i);
}

VNScriptParser::ExprContext* VNScriptParser::ConditionContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}


size_t VNScriptParser::ConditionContext::getRuleIndex() const {
  return VNScriptParser::RuleCondition;
}

void VNScriptParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void VNScriptParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any VNScriptParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::ConditionContext* VNScriptParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 36, VNScriptParser::RuleCondition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(VNScriptParser::ID);
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VNScriptParser::T__9) {
      setState(142);
      match(VNScriptParser::T__9);
      setState(143);
      match(VNScriptParser::ID);
    }
    setState(146);
    match(VNScriptParser::T__15);
    setState(147);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SavepointStmtContext ------------------------------------------------------------------

VNScriptParser::SavepointStmtContext::SavepointStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::SavepointStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}


size_t VNScriptParser::SavepointStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleSavepointStmt;
}

void VNScriptParser::SavepointStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSavepointStmt(this);
}

void VNScriptParser::SavepointStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSavepointStmt(this);
}


std::any VNScriptParser::SavepointStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitSavepointStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::SavepointStmtContext* VNScriptParser::savepointStmt() {
  SavepointStmtContext *_localctx = _tracker.createInstance<SavepointStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, VNScriptParser::RuleSavepointStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(VNScriptParser::T__16);
    setState(150);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStmtContext ------------------------------------------------------------------

VNScriptParser::GotoStmtContext::GotoStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::GotoStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}


size_t VNScriptParser::GotoStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleGotoStmt;
}

void VNScriptParser::GotoStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStmt(this);
}

void VNScriptParser::GotoStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStmt(this);
}


std::any VNScriptParser::GotoStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitGotoStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::GotoStmtContext* VNScriptParser::gotoStmt() {
  GotoStmtContext *_localctx = _tracker.createInstance<GotoStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, VNScriptParser::RuleGotoStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(VNScriptParser::T__17);
    setState(153);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void VNScriptParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  vnscriptParserInitialize();
#else
  ::antlr4::internal::call_once(vnscriptParserOnceFlag, vnscriptParserInitialize);
#endif
}
