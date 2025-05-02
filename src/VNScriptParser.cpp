
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
      "musicStmt", "characterDef", "characterProp", "boolValue", "dialogueStmt", 
      "narrateStmt", "centerTextStmt", "varDecl", "varAssign", "propAssign", 
      "expr", "choiceStmt", "choiceOption", "block", "ifStmt", "condition", 
      "simpleCondition", "savepointStmt", "gotoStmt"
    },
    std::vector<std::string>{
      "", "'scene_start'", "'scene_end'", "'background'", "'music'", "'character'", 
      "'{'", "'}'", "'name'", "'s'", "'string'", "'i'", "'int'", "'b'", 
      "'bool'", "'true'", "'false'", "'!'", "'@'", "'.'", "'choice'", "'if'", 
      "'else'", "'&&'", "'||'", "'('", "')'", "'=='", "'savepoint'", "'goto'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "COMMENT", "WS", 
      "STRING", "NUMBER", "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,201,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,5,0,50,8,0,10,0,12,0,53,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,72,8,1,1,2,
  	1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,4,6,89,8,6,11,
  	6,12,6,90,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,106,
  	8,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,3,12,128,8,12,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,15,1,15,1,15,1,15,3,15,142,8,15,1,16,1,16,1,16,4,16,
  	147,8,16,11,16,12,16,148,1,16,1,16,1,17,1,17,1,17,1,18,1,18,5,18,158,
  	8,18,10,18,12,18,161,9,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,3,19,170,
  	8,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	3,20,185,8,20,1,21,1,21,1,21,3,21,190,8,21,1,21,1,21,1,21,1,22,1,22,1,
  	22,1,23,1,23,1,23,1,23,0,0,24,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,0,4,1,0,9,10,1,0,11,12,1,0,13,14,1,0,15,16,
  	207,0,51,1,0,0,0,2,71,1,0,0,0,4,73,1,0,0,0,6,76,1,0,0,0,8,78,1,0,0,0,
  	10,81,1,0,0,0,12,84,1,0,0,0,14,105,1,0,0,0,16,107,1,0,0,0,18,109,1,0,
  	0,0,20,112,1,0,0,0,22,115,1,0,0,0,24,127,1,0,0,0,26,129,1,0,0,0,28,132,
  	1,0,0,0,30,141,1,0,0,0,32,143,1,0,0,0,34,152,1,0,0,0,36,155,1,0,0,0,38,
  	164,1,0,0,0,40,184,1,0,0,0,42,186,1,0,0,0,44,194,1,0,0,0,46,197,1,0,0,
  	0,48,50,3,2,1,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,
  	0,52,54,1,0,0,0,53,51,1,0,0,0,54,55,5,0,0,1,55,1,1,0,0,0,56,72,3,4,2,
  	0,57,72,3,6,3,0,58,72,3,8,4,0,59,72,3,10,5,0,60,72,3,12,6,0,61,72,3,18,
  	9,0,62,72,3,20,10,0,63,72,3,22,11,0,64,72,3,24,12,0,65,72,3,26,13,0,66,
  	72,3,28,14,0,67,72,3,38,19,0,68,72,3,32,16,0,69,72,3,44,22,0,70,72,3,
  	46,23,0,71,56,1,0,0,0,71,57,1,0,0,0,71,58,1,0,0,0,71,59,1,0,0,0,71,60,
  	1,0,0,0,71,61,1,0,0,0,71,62,1,0,0,0,71,63,1,0,0,0,71,64,1,0,0,0,71,65,
  	1,0,0,0,71,66,1,0,0,0,71,67,1,0,0,0,71,68,1,0,0,0,71,69,1,0,0,0,71,70,
  	1,0,0,0,72,3,1,0,0,0,73,74,5,1,0,0,74,75,5,32,0,0,75,5,1,0,0,0,76,77,
  	5,2,0,0,77,7,1,0,0,0,78,79,5,3,0,0,79,80,5,32,0,0,80,9,1,0,0,0,81,82,
  	5,4,0,0,82,83,5,32,0,0,83,11,1,0,0,0,84,85,5,5,0,0,85,86,5,34,0,0,86,
  	88,5,6,0,0,87,89,3,14,7,0,88,87,1,0,0,0,89,90,1,0,0,0,90,88,1,0,0,0,90,
  	91,1,0,0,0,91,92,1,0,0,0,92,93,5,7,0,0,93,13,1,0,0,0,94,95,5,8,0,0,95,
  	106,5,32,0,0,96,97,7,0,0,0,97,98,5,34,0,0,98,106,5,32,0,0,99,100,7,1,
  	0,0,100,101,5,34,0,0,101,106,5,33,0,0,102,103,7,2,0,0,103,104,5,34,0,
  	0,104,106,3,16,8,0,105,94,1,0,0,0,105,96,1,0,0,0,105,99,1,0,0,0,105,102,
  	1,0,0,0,106,15,1,0,0,0,107,108,7,3,0,0,108,17,1,0,0,0,109,110,5,34,0,
  	0,110,111,5,32,0,0,111,19,1,0,0,0,112,113,5,17,0,0,113,114,5,32,0,0,114,
  	21,1,0,0,0,115,116,5,18,0,0,116,117,5,32,0,0,117,23,1,0,0,0,118,119,7,
  	0,0,0,119,120,5,34,0,0,120,128,5,32,0,0,121,122,7,1,0,0,122,123,5,34,
  	0,0,123,128,5,33,0,0,124,125,7,2,0,0,125,126,5,34,0,0,126,128,3,16,8,
  	0,127,118,1,0,0,0,127,121,1,0,0,0,127,124,1,0,0,0,128,25,1,0,0,0,129,
  	130,5,34,0,0,130,131,3,30,15,0,131,27,1,0,0,0,132,133,5,34,0,0,133,134,
  	5,19,0,0,134,135,5,34,0,0,135,136,3,30,15,0,136,29,1,0,0,0,137,142,5,
  	32,0,0,138,142,5,33,0,0,139,142,3,16,8,0,140,142,5,34,0,0,141,137,1,0,
  	0,0,141,138,1,0,0,0,141,139,1,0,0,0,141,140,1,0,0,0,142,31,1,0,0,0,143,
  	144,5,20,0,0,144,146,5,6,0,0,145,147,3,34,17,0,146,145,1,0,0,0,147,148,
  	1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,150,1,0,0,0,150,151,5,7,0,
  	0,151,33,1,0,0,0,152,153,5,32,0,0,153,154,3,36,18,0,154,35,1,0,0,0,155,
  	159,5,6,0,0,156,158,3,2,1,0,157,156,1,0,0,0,158,161,1,0,0,0,159,157,1,
  	0,0,0,159,160,1,0,0,0,160,162,1,0,0,0,161,159,1,0,0,0,162,163,5,7,0,0,
  	163,37,1,0,0,0,164,165,5,21,0,0,165,166,3,40,20,0,166,169,3,36,18,0,167,
  	168,5,22,0,0,168,170,3,36,18,0,169,167,1,0,0,0,169,170,1,0,0,0,170,39,
  	1,0,0,0,171,185,3,42,21,0,172,173,3,42,21,0,173,174,5,23,0,0,174,175,
  	3,40,20,0,175,185,1,0,0,0,176,177,3,42,21,0,177,178,5,24,0,0,178,179,
  	3,40,20,0,179,185,1,0,0,0,180,181,5,25,0,0,181,182,3,40,20,0,182,183,
  	5,26,0,0,183,185,1,0,0,0,184,171,1,0,0,0,184,172,1,0,0,0,184,176,1,0,
  	0,0,184,180,1,0,0,0,185,41,1,0,0,0,186,189,5,34,0,0,187,188,5,19,0,0,
  	188,190,5,34,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,191,1,0,0,0,191,
  	192,5,27,0,0,192,193,3,30,15,0,193,43,1,0,0,0,194,195,5,28,0,0,195,196,
  	5,32,0,0,196,45,1,0,0,0,197,198,5,29,0,0,198,199,5,32,0,0,199,47,1,0,
  	0,0,11,51,71,90,105,127,141,148,159,169,184,189
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
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17988746814) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
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

VNScriptParser::CenterTextStmtContext* VNScriptParser::StatementContext::centerTextStmt() {
  return getRuleContext<VNScriptParser::CenterTextStmtContext>(0);
}

VNScriptParser::VarDeclContext* VNScriptParser::StatementContext::varDecl() {
  return getRuleContext<VNScriptParser::VarDeclContext>(0);
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
    setState(71);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(56);
      sceneStart();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(57);
      sceneEnd();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(58);
      backgroundStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(59);
      musicStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(60);
      characterDef();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(61);
      dialogueStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(62);
      narrateStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(63);
      centerTextStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(64);
      varDecl();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(65);
      varAssign();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(66);
      propAssign();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(67);
      ifStmt();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(68);
      choiceStmt();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(69);
      savepointStmt();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(70);
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
    setState(73);
    match(VNScriptParser::T__0);
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
    setState(76);
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
    setState(78);
    match(VNScriptParser::T__2);
    setState(79);
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
    setState(81);
    match(VNScriptParser::T__3);
    setState(82);
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

std::vector<VNScriptParser::CharacterPropContext *> VNScriptParser::CharacterDefContext::characterProp() {
  return getRuleContexts<VNScriptParser::CharacterPropContext>();
}

VNScriptParser::CharacterPropContext* VNScriptParser::CharacterDefContext::characterProp(size_t i) {
  return getRuleContext<VNScriptParser::CharacterPropContext>(i);
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
    setState(84);
    match(VNScriptParser::T__4);
    setState(85);
    match(VNScriptParser::ID);
    setState(86);
    match(VNScriptParser::T__5);
    setState(88); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(87);
      characterProp();
      setState(90); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32512) != 0));
    setState(92);
    match(VNScriptParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterPropContext ------------------------------------------------------------------

VNScriptParser::CharacterPropContext::CharacterPropContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::CharacterPropContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::CharacterPropContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::CharacterPropContext::NUMBER() {
  return getToken(VNScriptParser::NUMBER, 0);
}

VNScriptParser::BoolValueContext* VNScriptParser::CharacterPropContext::boolValue() {
  return getRuleContext<VNScriptParser::BoolValueContext>(0);
}


size_t VNScriptParser::CharacterPropContext::getRuleIndex() const {
  return VNScriptParser::RuleCharacterProp;
}

void VNScriptParser::CharacterPropContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterProp(this);
}

void VNScriptParser::CharacterPropContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterProp(this);
}


std::any VNScriptParser::CharacterPropContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitCharacterProp(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::CharacterPropContext* VNScriptParser::characterProp() {
  CharacterPropContext *_localctx = _tracker.createInstance<CharacterPropContext>(_ctx, getState());
  enterRule(_localctx, 14, VNScriptParser::RuleCharacterProp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VNScriptParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(94);
        match(VNScriptParser::T__7);
        setState(95);
        match(VNScriptParser::STRING);
        break;
      }

      case VNScriptParser::T__8:
      case VNScriptParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(96);
        _la = _input->LA(1);
        if (!(_la == VNScriptParser::T__8

        || _la == VNScriptParser::T__9)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(97);
        match(VNScriptParser::ID);
        setState(98);
        match(VNScriptParser::STRING);
        break;
      }

      case VNScriptParser::T__10:
      case VNScriptParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(99);
        _la = _input->LA(1);
        if (!(_la == VNScriptParser::T__10

        || _la == VNScriptParser::T__11)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(100);
        match(VNScriptParser::ID);
        setState(101);
        match(VNScriptParser::NUMBER);
        break;
      }

      case VNScriptParser::T__12:
      case VNScriptParser::T__13: {
        enterOuterAlt(_localctx, 4);
        setState(102);
        _la = _input->LA(1);
        if (!(_la == VNScriptParser::T__12

        || _la == VNScriptParser::T__13)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(103);
        match(VNScriptParser::ID);
        setState(104);
        boolValue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolValueContext ------------------------------------------------------------------

VNScriptParser::BoolValueContext::BoolValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t VNScriptParser::BoolValueContext::getRuleIndex() const {
  return VNScriptParser::RuleBoolValue;
}

void VNScriptParser::BoolValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolValue(this);
}

void VNScriptParser::BoolValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolValue(this);
}


std::any VNScriptParser::BoolValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitBoolValue(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::BoolValueContext* VNScriptParser::boolValue() {
  BoolValueContext *_localctx = _tracker.createInstance<BoolValueContext>(_ctx, getState());
  enterRule(_localctx, 16, VNScriptParser::RuleBoolValue);
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
    setState(107);
    _la = _input->LA(1);
    if (!(_la == VNScriptParser::T__14

    || _la == VNScriptParser::T__15)) {
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
    setState(109);
    match(VNScriptParser::ID);
    setState(110);
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
    setState(112);
    match(VNScriptParser::T__16);
    setState(113);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CenterTextStmtContext ------------------------------------------------------------------

VNScriptParser::CenterTextStmtContext::CenterTextStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::CenterTextStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}


size_t VNScriptParser::CenterTextStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleCenterTextStmt;
}

void VNScriptParser::CenterTextStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCenterTextStmt(this);
}

void VNScriptParser::CenterTextStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCenterTextStmt(this);
}


std::any VNScriptParser::CenterTextStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitCenterTextStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::CenterTextStmtContext* VNScriptParser::centerTextStmt() {
  CenterTextStmtContext *_localctx = _tracker.createInstance<CenterTextStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, VNScriptParser::RuleCenterTextStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(VNScriptParser::T__17);
    setState(116);
    match(VNScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

VNScriptParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::VarDeclContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::VarDeclContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::VarDeclContext::NUMBER() {
  return getToken(VNScriptParser::NUMBER, 0);
}

VNScriptParser::BoolValueContext* VNScriptParser::VarDeclContext::boolValue() {
  return getRuleContext<VNScriptParser::BoolValueContext>(0);
}


size_t VNScriptParser::VarDeclContext::getRuleIndex() const {
  return VNScriptParser::RuleVarDecl;
}

void VNScriptParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void VNScriptParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


std::any VNScriptParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::VarDeclContext* VNScriptParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 24, VNScriptParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VNScriptParser::T__8:
      case VNScriptParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(118);
        _la = _input->LA(1);
        if (!(_la == VNScriptParser::T__8

        || _la == VNScriptParser::T__9)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(119);
        match(VNScriptParser::ID);
        setState(120);
        match(VNScriptParser::STRING);
        break;
      }

      case VNScriptParser::T__10:
      case VNScriptParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(121);
        _la = _input->LA(1);
        if (!(_la == VNScriptParser::T__10

        || _la == VNScriptParser::T__11)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(122);
        match(VNScriptParser::ID);
        setState(123);
        match(VNScriptParser::NUMBER);
        break;
      }

      case VNScriptParser::T__12:
      case VNScriptParser::T__13: {
        enterOuterAlt(_localctx, 3);
        setState(124);
        _la = _input->LA(1);
        if (!(_la == VNScriptParser::T__12

        || _la == VNScriptParser::T__13)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(125);
        match(VNScriptParser::ID);
        setState(126);
        boolValue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
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
  enterRule(_localctx, 26, VNScriptParser::RuleVarAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(VNScriptParser::ID);
    setState(130);
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
  enterRule(_localctx, 28, VNScriptParser::RulePropAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(VNScriptParser::ID);
    setState(133);
    match(VNScriptParser::T__18);
    setState(134);
    match(VNScriptParser::ID);
    setState(135);
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

VNScriptParser::BoolValueContext* VNScriptParser::ExprContext::boolValue() {
  return getRuleContext<VNScriptParser::BoolValueContext>(0);
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
  enterRule(_localctx, 30, VNScriptParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(141);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VNScriptParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(137);
        match(VNScriptParser::STRING);
        break;
      }

      case VNScriptParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(138);
        match(VNScriptParser::NUMBER);
        break;
      }

      case VNScriptParser::T__14:
      case VNScriptParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(139);
        boolValue();
        break;
      }

      case VNScriptParser::ID: {
        enterOuterAlt(_localctx, 4);
        setState(140);
        match(VNScriptParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
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
  enterRule(_localctx, 32, VNScriptParser::RuleChoiceStmt);
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
    setState(143);
    match(VNScriptParser::T__19);
    setState(144);
    match(VNScriptParser::T__5);
    setState(146); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(145);
      choiceOption();
      setState(148); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == VNScriptParser::STRING);
    setState(150);
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
  enterRule(_localctx, 34, VNScriptParser::RuleChoiceOption);

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
    match(VNScriptParser::STRING);
    setState(153);
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
  enterRule(_localctx, 36, VNScriptParser::RuleBlock);
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
    setState(155);
    match(VNScriptParser::T__5);
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17988746814) != 0)) {
      setState(156);
      statement();
      setState(161);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(162);
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
  enterRule(_localctx, 38, VNScriptParser::RuleIfStmt);
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
    setState(164);
    match(VNScriptParser::T__20);
    setState(165);
    condition();
    setState(166);
    block();
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VNScriptParser::T__21) {
      setState(167);
      match(VNScriptParser::T__21);
      setState(168);
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

VNScriptParser::SimpleConditionContext* VNScriptParser::ConditionContext::simpleCondition() {
  return getRuleContext<VNScriptParser::SimpleConditionContext>(0);
}

VNScriptParser::ConditionContext* VNScriptParser::ConditionContext::condition() {
  return getRuleContext<VNScriptParser::ConditionContext>(0);
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
  enterRule(_localctx, 40, VNScriptParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(171);
      simpleCondition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(172);
      simpleCondition();
      setState(173);
      match(VNScriptParser::T__22);
      setState(174);
      condition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(176);
      simpleCondition();
      setState(177);
      match(VNScriptParser::T__23);
      setState(178);
      condition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(180);
      match(VNScriptParser::T__24);
      setState(181);
      condition();
      setState(182);
      match(VNScriptParser::T__25);
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

//----------------- SimpleConditionContext ------------------------------------------------------------------

VNScriptParser::SimpleConditionContext::SimpleConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VNScriptParser::SimpleConditionContext::ID() {
  return getTokens(VNScriptParser::ID);
}

tree::TerminalNode* VNScriptParser::SimpleConditionContext::ID(size_t i) {
  return getToken(VNScriptParser::ID, i);
}

VNScriptParser::ExprContext* VNScriptParser::SimpleConditionContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}


size_t VNScriptParser::SimpleConditionContext::getRuleIndex() const {
  return VNScriptParser::RuleSimpleCondition;
}

void VNScriptParser::SimpleConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleCondition(this);
}

void VNScriptParser::SimpleConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleCondition(this);
}


std::any VNScriptParser::SimpleConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitSimpleCondition(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::SimpleConditionContext* VNScriptParser::simpleCondition() {
  SimpleConditionContext *_localctx = _tracker.createInstance<SimpleConditionContext>(_ctx, getState());
  enterRule(_localctx, 42, VNScriptParser::RuleSimpleCondition);
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
    setState(186);
    match(VNScriptParser::ID);
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VNScriptParser::T__18) {
      setState(187);
      match(VNScriptParser::T__18);
      setState(188);
      match(VNScriptParser::ID);
    }
    setState(191);
    match(VNScriptParser::T__26);
    setState(192);
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
  enterRule(_localctx, 44, VNScriptParser::RuleSavepointStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(VNScriptParser::T__27);
    setState(195);
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
  enterRule(_localctx, 46, VNScriptParser::RuleGotoStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(VNScriptParser::T__28);
    setState(198);
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
