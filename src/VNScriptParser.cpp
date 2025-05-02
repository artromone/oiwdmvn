
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
      "musicStmt", "soundStmt", "characterDef", "characterBody", "charPropStmt", 
      "sayStmt", "narrateStmt", "varDecl", "setStmt", "lvalue", "assignOp", 
      "ifStmt", "block", "choiceStmt", "choiceOption", "parallelStmt", "functionDef", 
      "tryCatchStmt", "savepointStmt", "transitionStmt", "importStmt", "debugBlock", 
      "gotoStmt", "animateStmt", "playStmt", "waitStmt", "returnStmt", "logStmt", 
      "expr"
    },
    std::vector<std::string>{
      "", "'scene_start'", "'scene_end'", "'background'", "'music'", "'sound'", 
      "'character'", "'{'", "'}'", "'name'", "'='", "'.'", "'say'", "'('", 
      "')'", "'narrate'", "'var'", "'set'", "'+='", "'-='", "'if'", "'else'", 
      "'choice'", "'parallel'", "'function'", "'try'", "'catch'", "'savepoint'", 
      "'transition'", "'import'", "'debug'", "'goto'", "'animate'", "'play'", 
      "'wait'", "'return'", "'log'", "'*'", "'/'", "'+'", "'-'", "'>'", 
      "'<'", "'>='", "'<='", "'=='", "'!='", "'&&'", "'||'", "','", "'true'", 
      "'false'", "", "", "", "", "", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "COMMENT", "WS", "STRING", "NUMBER", "ID", "SEMICOLON"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,57,317,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,5,0,70,8,0,10,
  	0,12,0,73,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,102,8,1,1,2,1,
  	2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,8,5,8,130,8,8,10,8,12,8,133,9,8,1,9,1,9,1,9,
  	1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,12,1,12,1,12,1,12,3,12,158,8,12,1,12,1,12,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,14,1,14,1,14,3,14,171,8,14,1,15,1,15,1,16,1,16,1,16,1,
  	16,1,16,1,16,1,16,3,16,182,8,16,1,17,1,17,5,17,186,8,17,10,17,12,17,189,
  	9,17,1,17,1,17,1,18,1,18,1,18,4,18,196,8,18,11,18,12,18,197,1,18,1,18,
  	1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,
  	1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,30,1,30,
  	1,30,1,30,1,31,1,31,3,31,262,8,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,
  	1,32,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,
  	5,33,285,8,33,10,33,12,33,288,9,33,3,33,290,8,33,1,33,1,33,1,33,3,33,
  	295,8,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,
  	1,33,1,33,1,33,5,33,312,8,33,10,33,12,33,315,9,33,1,33,0,1,66,34,0,2,
  	4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,
  	52,54,56,58,60,62,64,66,0,4,2,0,10,10,18,19,1,0,37,38,1,0,39,40,1,0,41,
  	46,327,0,71,1,0,0,0,2,101,1,0,0,0,4,103,1,0,0,0,6,107,1,0,0,0,8,110,1,
  	0,0,0,10,114,1,0,0,0,12,118,1,0,0,0,14,122,1,0,0,0,16,131,1,0,0,0,18,
  	134,1,0,0,0,20,139,1,0,0,0,22,147,1,0,0,0,24,153,1,0,0,0,26,161,1,0,0,
  	0,28,167,1,0,0,0,30,172,1,0,0,0,32,174,1,0,0,0,34,183,1,0,0,0,36,192,
  	1,0,0,0,38,201,1,0,0,0,40,204,1,0,0,0,42,207,1,0,0,0,44,214,1,0,0,0,46,
  	223,1,0,0,0,48,227,1,0,0,0,50,234,1,0,0,0,52,238,1,0,0,0,54,241,1,0,0,
  	0,56,245,1,0,0,0,58,250,1,0,0,0,60,253,1,0,0,0,62,259,1,0,0,0,64,265,
  	1,0,0,0,66,294,1,0,0,0,68,70,3,2,1,0,69,68,1,0,0,0,70,73,1,0,0,0,71,69,
  	1,0,0,0,71,72,1,0,0,0,72,74,1,0,0,0,73,71,1,0,0,0,74,75,5,0,0,1,75,1,
  	1,0,0,0,76,102,3,4,2,0,77,102,3,6,3,0,78,102,3,8,4,0,79,102,3,10,5,0,
  	80,102,3,12,6,0,81,102,3,14,7,0,82,102,3,20,10,0,83,102,3,22,11,0,84,
  	102,3,24,12,0,85,102,3,26,13,0,86,102,3,32,16,0,87,102,3,36,18,0,88,102,
  	3,40,20,0,89,102,3,42,21,0,90,102,3,44,22,0,91,102,3,46,23,0,92,102,3,
  	48,24,0,93,102,3,50,25,0,94,102,3,52,26,0,95,102,3,54,27,0,96,102,3,56,
  	28,0,97,102,3,58,29,0,98,102,3,60,30,0,99,102,3,62,31,0,100,102,3,64,
  	32,0,101,76,1,0,0,0,101,77,1,0,0,0,101,78,1,0,0,0,101,79,1,0,0,0,101,
  	80,1,0,0,0,101,81,1,0,0,0,101,82,1,0,0,0,101,83,1,0,0,0,101,84,1,0,0,
  	0,101,85,1,0,0,0,101,86,1,0,0,0,101,87,1,0,0,0,101,88,1,0,0,0,101,89,
  	1,0,0,0,101,90,1,0,0,0,101,91,1,0,0,0,101,92,1,0,0,0,101,93,1,0,0,0,101,
  	94,1,0,0,0,101,95,1,0,0,0,101,96,1,0,0,0,101,97,1,0,0,0,101,98,1,0,0,
  	0,101,99,1,0,0,0,101,100,1,0,0,0,102,3,1,0,0,0,103,104,5,1,0,0,104,105,
  	5,56,0,0,105,106,5,57,0,0,106,5,1,0,0,0,107,108,5,2,0,0,108,109,5,57,
  	0,0,109,7,1,0,0,0,110,111,5,3,0,0,111,112,5,54,0,0,112,113,5,57,0,0,113,
  	9,1,0,0,0,114,115,5,4,0,0,115,116,5,54,0,0,116,117,5,57,0,0,117,11,1,
  	0,0,0,118,119,5,5,0,0,119,120,5,54,0,0,120,121,5,57,0,0,121,13,1,0,0,
  	0,122,123,5,6,0,0,123,124,5,56,0,0,124,125,5,7,0,0,125,126,3,16,8,0,126,
  	127,5,8,0,0,127,15,1,0,0,0,128,130,3,18,9,0,129,128,1,0,0,0,130,133,1,
  	0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,132,17,1,0,0,0,133,131,1,0,0,0,
  	134,135,5,9,0,0,135,136,5,10,0,0,136,137,5,54,0,0,137,138,5,57,0,0,138,
  	19,1,0,0,0,139,140,5,56,0,0,140,141,5,11,0,0,141,142,5,12,0,0,142,143,
  	5,13,0,0,143,144,5,54,0,0,144,145,5,14,0,0,145,146,5,57,0,0,146,21,1,
  	0,0,0,147,148,5,15,0,0,148,149,5,13,0,0,149,150,5,54,0,0,150,151,5,14,
  	0,0,151,152,5,57,0,0,152,23,1,0,0,0,153,154,5,16,0,0,154,157,5,56,0,0,
  	155,156,5,10,0,0,156,158,3,66,33,0,157,155,1,0,0,0,157,158,1,0,0,0,158,
  	159,1,0,0,0,159,160,5,57,0,0,160,25,1,0,0,0,161,162,5,17,0,0,162,163,
  	3,28,14,0,163,164,3,30,15,0,164,165,3,66,33,0,165,166,5,57,0,0,166,27,
  	1,0,0,0,167,170,5,56,0,0,168,169,5,11,0,0,169,171,5,56,0,0,170,168,1,
  	0,0,0,170,171,1,0,0,0,171,29,1,0,0,0,172,173,7,0,0,0,173,31,1,0,0,0,174,
  	175,5,20,0,0,175,176,5,13,0,0,176,177,3,66,33,0,177,178,5,14,0,0,178,
  	181,3,34,17,0,179,180,5,21,0,0,180,182,3,34,17,0,181,179,1,0,0,0,181,
  	182,1,0,0,0,182,33,1,0,0,0,183,187,5,7,0,0,184,186,3,2,1,0,185,184,1,
  	0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,190,1,0,0,0,
  	189,187,1,0,0,0,190,191,5,8,0,0,191,35,1,0,0,0,192,193,5,22,0,0,193,195,
  	5,7,0,0,194,196,3,38,19,0,195,194,1,0,0,0,196,197,1,0,0,0,197,195,1,0,
  	0,0,197,198,1,0,0,0,198,199,1,0,0,0,199,200,5,8,0,0,200,37,1,0,0,0,201,
  	202,5,54,0,0,202,203,3,34,17,0,203,39,1,0,0,0,204,205,5,23,0,0,205,206,
  	3,34,17,0,206,41,1,0,0,0,207,208,5,24,0,0,208,209,5,56,0,0,209,210,5,
  	13,0,0,210,211,5,14,0,0,211,212,5,57,0,0,212,213,3,34,17,0,213,43,1,0,
  	0,0,214,215,5,25,0,0,215,216,3,34,17,0,216,217,5,26,0,0,217,218,5,13,
  	0,0,218,219,5,56,0,0,219,220,5,56,0,0,220,221,5,14,0,0,221,222,3,34,17,
  	0,222,45,1,0,0,0,223,224,5,27,0,0,224,225,5,54,0,0,225,226,5,57,0,0,226,
  	47,1,0,0,0,227,228,5,28,0,0,228,229,5,56,0,0,229,230,5,13,0,0,230,231,
  	3,66,33,0,231,232,5,14,0,0,232,233,3,34,17,0,233,49,1,0,0,0,234,235,5,
  	29,0,0,235,236,5,54,0,0,236,237,5,57,0,0,237,51,1,0,0,0,238,239,5,30,
  	0,0,239,240,3,34,17,0,240,53,1,0,0,0,241,242,5,31,0,0,242,243,5,56,0,
  	0,243,244,5,57,0,0,244,55,1,0,0,0,245,246,5,32,0,0,246,247,5,56,0,0,247,
  	248,5,54,0,0,248,249,5,57,0,0,249,57,1,0,0,0,250,251,5,33,0,0,251,252,
  	3,10,5,0,252,59,1,0,0,0,253,254,5,34,0,0,254,255,5,13,0,0,255,256,3,66,
  	33,0,256,257,5,14,0,0,257,258,5,57,0,0,258,61,1,0,0,0,259,261,5,35,0,
  	0,260,262,3,66,33,0,261,260,1,0,0,0,261,262,1,0,0,0,262,263,1,0,0,0,263,
  	264,5,57,0,0,264,63,1,0,0,0,265,266,5,36,0,0,266,267,5,13,0,0,267,268,
  	3,66,33,0,268,269,5,14,0,0,269,270,5,57,0,0,270,65,1,0,0,0,271,272,6,
  	33,-1,0,272,273,5,13,0,0,273,274,3,66,33,0,274,275,5,14,0,0,275,295,1,
  	0,0,0,276,295,3,28,14,0,277,295,5,55,0,0,278,295,5,54,0,0,279,280,5,56,
  	0,0,280,289,5,13,0,0,281,286,3,66,33,0,282,283,5,49,0,0,283,285,3,66,
  	33,0,284,282,1,0,0,0,285,288,1,0,0,0,286,284,1,0,0,0,286,287,1,0,0,0,
  	287,290,1,0,0,0,288,286,1,0,0,0,289,281,1,0,0,0,289,290,1,0,0,0,290,291,
  	1,0,0,0,291,295,5,14,0,0,292,295,5,50,0,0,293,295,5,51,0,0,294,271,1,
  	0,0,0,294,276,1,0,0,0,294,277,1,0,0,0,294,278,1,0,0,0,294,279,1,0,0,0,
  	294,292,1,0,0,0,294,293,1,0,0,0,295,313,1,0,0,0,296,297,10,12,0,0,297,
  	298,7,1,0,0,298,312,3,66,33,13,299,300,10,11,0,0,300,301,7,2,0,0,301,
  	312,3,66,33,12,302,303,10,10,0,0,303,304,7,3,0,0,304,312,3,66,33,11,305,
  	306,10,9,0,0,306,307,5,47,0,0,307,312,3,66,33,10,308,309,10,8,0,0,309,
  	310,5,48,0,0,310,312,3,66,33,9,311,296,1,0,0,0,311,299,1,0,0,0,311,302,
  	1,0,0,0,311,305,1,0,0,0,311,308,1,0,0,0,312,315,1,0,0,0,313,311,1,0,0,
  	0,313,314,1,0,0,0,314,67,1,0,0,0,315,313,1,0,0,0,14,71,101,131,157,170,
  	181,187,197,261,286,289,294,311,313
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
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 72057731406856318) != 0)) {
      setState(68);
      statement();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(74);
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

VNScriptParser::SoundStmtContext* VNScriptParser::StatementContext::soundStmt() {
  return getRuleContext<VNScriptParser::SoundStmtContext>(0);
}

VNScriptParser::CharacterDefContext* VNScriptParser::StatementContext::characterDef() {
  return getRuleContext<VNScriptParser::CharacterDefContext>(0);
}

VNScriptParser::SayStmtContext* VNScriptParser::StatementContext::sayStmt() {
  return getRuleContext<VNScriptParser::SayStmtContext>(0);
}

VNScriptParser::NarrateStmtContext* VNScriptParser::StatementContext::narrateStmt() {
  return getRuleContext<VNScriptParser::NarrateStmtContext>(0);
}

VNScriptParser::VarDeclContext* VNScriptParser::StatementContext::varDecl() {
  return getRuleContext<VNScriptParser::VarDeclContext>(0);
}

VNScriptParser::SetStmtContext* VNScriptParser::StatementContext::setStmt() {
  return getRuleContext<VNScriptParser::SetStmtContext>(0);
}

VNScriptParser::IfStmtContext* VNScriptParser::StatementContext::ifStmt() {
  return getRuleContext<VNScriptParser::IfStmtContext>(0);
}

VNScriptParser::ChoiceStmtContext* VNScriptParser::StatementContext::choiceStmt() {
  return getRuleContext<VNScriptParser::ChoiceStmtContext>(0);
}

VNScriptParser::ParallelStmtContext* VNScriptParser::StatementContext::parallelStmt() {
  return getRuleContext<VNScriptParser::ParallelStmtContext>(0);
}

VNScriptParser::FunctionDefContext* VNScriptParser::StatementContext::functionDef() {
  return getRuleContext<VNScriptParser::FunctionDefContext>(0);
}

VNScriptParser::TryCatchStmtContext* VNScriptParser::StatementContext::tryCatchStmt() {
  return getRuleContext<VNScriptParser::TryCatchStmtContext>(0);
}

VNScriptParser::SavepointStmtContext* VNScriptParser::StatementContext::savepointStmt() {
  return getRuleContext<VNScriptParser::SavepointStmtContext>(0);
}

VNScriptParser::TransitionStmtContext* VNScriptParser::StatementContext::transitionStmt() {
  return getRuleContext<VNScriptParser::TransitionStmtContext>(0);
}

VNScriptParser::ImportStmtContext* VNScriptParser::StatementContext::importStmt() {
  return getRuleContext<VNScriptParser::ImportStmtContext>(0);
}

VNScriptParser::DebugBlockContext* VNScriptParser::StatementContext::debugBlock() {
  return getRuleContext<VNScriptParser::DebugBlockContext>(0);
}

VNScriptParser::GotoStmtContext* VNScriptParser::StatementContext::gotoStmt() {
  return getRuleContext<VNScriptParser::GotoStmtContext>(0);
}

VNScriptParser::AnimateStmtContext* VNScriptParser::StatementContext::animateStmt() {
  return getRuleContext<VNScriptParser::AnimateStmtContext>(0);
}

VNScriptParser::PlayStmtContext* VNScriptParser::StatementContext::playStmt() {
  return getRuleContext<VNScriptParser::PlayStmtContext>(0);
}

VNScriptParser::WaitStmtContext* VNScriptParser::StatementContext::waitStmt() {
  return getRuleContext<VNScriptParser::WaitStmtContext>(0);
}

VNScriptParser::ReturnStmtContext* VNScriptParser::StatementContext::returnStmt() {
  return getRuleContext<VNScriptParser::ReturnStmtContext>(0);
}

VNScriptParser::LogStmtContext* VNScriptParser::StatementContext::logStmt() {
  return getRuleContext<VNScriptParser::LogStmtContext>(0);
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
    setState(101);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VNScriptParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(76);
        sceneStart();
        break;
      }

      case VNScriptParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(77);
        sceneEnd();
        break;
      }

      case VNScriptParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(78);
        backgroundStmt();
        break;
      }

      case VNScriptParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(79);
        musicStmt();
        break;
      }

      case VNScriptParser::T__4: {
        enterOuterAlt(_localctx, 5);
        setState(80);
        soundStmt();
        break;
      }

      case VNScriptParser::T__5: {
        enterOuterAlt(_localctx, 6);
        setState(81);
        characterDef();
        break;
      }

      case VNScriptParser::ID: {
        enterOuterAlt(_localctx, 7);
        setState(82);
        sayStmt();
        break;
      }

      case VNScriptParser::T__14: {
        enterOuterAlt(_localctx, 8);
        setState(83);
        narrateStmt();
        break;
      }

      case VNScriptParser::T__15: {
        enterOuterAlt(_localctx, 9);
        setState(84);
        varDecl();
        break;
      }

      case VNScriptParser::T__16: {
        enterOuterAlt(_localctx, 10);
        setState(85);
        setStmt();
        break;
      }

      case VNScriptParser::T__19: {
        enterOuterAlt(_localctx, 11);
        setState(86);
        ifStmt();
        break;
      }

      case VNScriptParser::T__21: {
        enterOuterAlt(_localctx, 12);
        setState(87);
        choiceStmt();
        break;
      }

      case VNScriptParser::T__22: {
        enterOuterAlt(_localctx, 13);
        setState(88);
        parallelStmt();
        break;
      }

      case VNScriptParser::T__23: {
        enterOuterAlt(_localctx, 14);
        setState(89);
        functionDef();
        break;
      }

      case VNScriptParser::T__24: {
        enterOuterAlt(_localctx, 15);
        setState(90);
        tryCatchStmt();
        break;
      }

      case VNScriptParser::T__26: {
        enterOuterAlt(_localctx, 16);
        setState(91);
        savepointStmt();
        break;
      }

      case VNScriptParser::T__27: {
        enterOuterAlt(_localctx, 17);
        setState(92);
        transitionStmt();
        break;
      }

      case VNScriptParser::T__28: {
        enterOuterAlt(_localctx, 18);
        setState(93);
        importStmt();
        break;
      }

      case VNScriptParser::T__29: {
        enterOuterAlt(_localctx, 19);
        setState(94);
        debugBlock();
        break;
      }

      case VNScriptParser::T__30: {
        enterOuterAlt(_localctx, 20);
        setState(95);
        gotoStmt();
        break;
      }

      case VNScriptParser::T__31: {
        enterOuterAlt(_localctx, 21);
        setState(96);
        animateStmt();
        break;
      }

      case VNScriptParser::T__32: {
        enterOuterAlt(_localctx, 22);
        setState(97);
        playStmt();
        break;
      }

      case VNScriptParser::T__33: {
        enterOuterAlt(_localctx, 23);
        setState(98);
        waitStmt();
        break;
      }

      case VNScriptParser::T__34: {
        enterOuterAlt(_localctx, 24);
        setState(99);
        returnStmt();
        break;
      }

      case VNScriptParser::T__35: {
        enterOuterAlt(_localctx, 25);
        setState(100);
        logStmt();
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

//----------------- SceneStartContext ------------------------------------------------------------------

VNScriptParser::SceneStartContext::SceneStartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::SceneStartContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::SceneStartContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
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
    setState(103);
    match(VNScriptParser::T__0);
    setState(104);
    match(VNScriptParser::ID);
    setState(105);
    match(VNScriptParser::SEMICOLON);
   
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

tree::TerminalNode* VNScriptParser::SceneEndContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
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
    setState(107);
    match(VNScriptParser::T__1);
    setState(108);
    match(VNScriptParser::SEMICOLON);
   
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

tree::TerminalNode* VNScriptParser::BackgroundStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
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
    setState(110);
    match(VNScriptParser::T__2);
    setState(111);
    match(VNScriptParser::STRING);
    setState(112);
    match(VNScriptParser::SEMICOLON);
   
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

tree::TerminalNode* VNScriptParser::MusicStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
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
    setState(114);
    match(VNScriptParser::T__3);
    setState(115);
    match(VNScriptParser::STRING);
    setState(116);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SoundStmtContext ------------------------------------------------------------------

VNScriptParser::SoundStmtContext::SoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::SoundStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::SoundStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}


size_t VNScriptParser::SoundStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleSoundStmt;
}

void VNScriptParser::SoundStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSoundStmt(this);
}

void VNScriptParser::SoundStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSoundStmt(this);
}


std::any VNScriptParser::SoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitSoundStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::SoundStmtContext* VNScriptParser::soundStmt() {
  SoundStmtContext *_localctx = _tracker.createInstance<SoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, VNScriptParser::RuleSoundStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(VNScriptParser::T__4);
    setState(119);
    match(VNScriptParser::STRING);
    setState(120);
    match(VNScriptParser::SEMICOLON);
   
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
  enterRule(_localctx, 14, VNScriptParser::RuleCharacterDef);

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
    match(VNScriptParser::T__5);
    setState(123);
    match(VNScriptParser::ID);
    setState(124);
    match(VNScriptParser::T__6);
    setState(125);
    characterBody();
    setState(126);
    match(VNScriptParser::T__7);
   
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
  enterRule(_localctx, 16, VNScriptParser::RuleCharacterBody);
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
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VNScriptParser::T__8) {
      setState(128);
      charPropStmt();
      setState(133);
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

tree::TerminalNode* VNScriptParser::CharPropStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::CharPropStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
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
  enterRule(_localctx, 18, VNScriptParser::RuleCharPropStmt);

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
    match(VNScriptParser::T__8);
    setState(135);
    match(VNScriptParser::T__9);
    setState(136);
    match(VNScriptParser::STRING);
    setState(137);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SayStmtContext ------------------------------------------------------------------

VNScriptParser::SayStmtContext::SayStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::SayStmtContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::SayStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::SayStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}


size_t VNScriptParser::SayStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleSayStmt;
}

void VNScriptParser::SayStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSayStmt(this);
}

void VNScriptParser::SayStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSayStmt(this);
}


std::any VNScriptParser::SayStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitSayStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::SayStmtContext* VNScriptParser::sayStmt() {
  SayStmtContext *_localctx = _tracker.createInstance<SayStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, VNScriptParser::RuleSayStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(VNScriptParser::ID);
    setState(140);
    match(VNScriptParser::T__10);
    setState(141);
    match(VNScriptParser::T__11);
    setState(142);
    match(VNScriptParser::T__12);
    setState(143);
    match(VNScriptParser::STRING);
    setState(144);
    match(VNScriptParser::T__13);
    setState(145);
    match(VNScriptParser::SEMICOLON);
   
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

tree::TerminalNode* VNScriptParser::NarrateStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
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
  enterRule(_localctx, 22, VNScriptParser::RuleNarrateStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(VNScriptParser::T__14);
    setState(148);
    match(VNScriptParser::T__12);
    setState(149);
    match(VNScriptParser::STRING);
    setState(150);
    match(VNScriptParser::T__13);
    setState(151);
    match(VNScriptParser::SEMICOLON);
   
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

tree::TerminalNode* VNScriptParser::VarDeclContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}

VNScriptParser::ExprContext* VNScriptParser::VarDeclContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(VNScriptParser::T__15);
    setState(154);
    match(VNScriptParser::ID);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VNScriptParser::T__9) {
      setState(155);
      match(VNScriptParser::T__9);
      setState(156);
      expr(0);
    }
    setState(159);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetStmtContext ------------------------------------------------------------------

VNScriptParser::SetStmtContext::SetStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::LvalueContext* VNScriptParser::SetStmtContext::lvalue() {
  return getRuleContext<VNScriptParser::LvalueContext>(0);
}

VNScriptParser::AssignOpContext* VNScriptParser::SetStmtContext::assignOp() {
  return getRuleContext<VNScriptParser::AssignOpContext>(0);
}

VNScriptParser::ExprContext* VNScriptParser::SetStmtContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}

tree::TerminalNode* VNScriptParser::SetStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}


size_t VNScriptParser::SetStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleSetStmt;
}

void VNScriptParser::SetStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetStmt(this);
}

void VNScriptParser::SetStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetStmt(this);
}


std::any VNScriptParser::SetStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitSetStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::SetStmtContext* VNScriptParser::setStmt() {
  SetStmtContext *_localctx = _tracker.createInstance<SetStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, VNScriptParser::RuleSetStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(VNScriptParser::T__16);
    setState(162);
    lvalue();
    setState(163);
    assignOp();
    setState(164);
    expr(0);
    setState(165);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

VNScriptParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VNScriptParser::LvalueContext::ID() {
  return getTokens(VNScriptParser::ID);
}

tree::TerminalNode* VNScriptParser::LvalueContext::ID(size_t i) {
  return getToken(VNScriptParser::ID, i);
}


size_t VNScriptParser::LvalueContext::getRuleIndex() const {
  return VNScriptParser::RuleLvalue;
}

void VNScriptParser::LvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvalue(this);
}

void VNScriptParser::LvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvalue(this);
}


std::any VNScriptParser::LvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitLvalue(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::LvalueContext* VNScriptParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 28, VNScriptParser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(VNScriptParser::ID);
    setState(170);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(168);
      match(VNScriptParser::T__10);
      setState(169);
      match(VNScriptParser::ID);
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

//----------------- AssignOpContext ------------------------------------------------------------------

VNScriptParser::AssignOpContext::AssignOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t VNScriptParser::AssignOpContext::getRuleIndex() const {
  return VNScriptParser::RuleAssignOp;
}

void VNScriptParser::AssignOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignOp(this);
}

void VNScriptParser::AssignOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignOp(this);
}


std::any VNScriptParser::AssignOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitAssignOp(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::AssignOpContext* VNScriptParser::assignOp() {
  AssignOpContext *_localctx = _tracker.createInstance<AssignOpContext>(_ctx, getState());
  enterRule(_localctx, 30, VNScriptParser::RuleAssignOp);
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
    setState(172);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 787456) != 0))) {
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

//----------------- IfStmtContext ------------------------------------------------------------------

VNScriptParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::ExprContext* VNScriptParser::IfStmtContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
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
  enterRule(_localctx, 32, VNScriptParser::RuleIfStmt);
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
    setState(174);
    match(VNScriptParser::T__19);
    setState(175);
    match(VNScriptParser::T__12);
    setState(176);
    expr(0);
    setState(177);
    match(VNScriptParser::T__13);
    setState(178);
    block();
    setState(181);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VNScriptParser::T__20) {
      setState(179);
      match(VNScriptParser::T__20);
      setState(180);
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
  enterRule(_localctx, 34, VNScriptParser::RuleBlock);
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
    setState(183);
    match(VNScriptParser::T__6);
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 72057731406856318) != 0)) {
      setState(184);
      statement();
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(190);
    match(VNScriptParser::T__7);
   
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
  enterRule(_localctx, 36, VNScriptParser::RuleChoiceStmt);
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
    setState(192);
    match(VNScriptParser::T__21);
    setState(193);
    match(VNScriptParser::T__6);
    setState(195); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(194);
      choiceOption();
      setState(197); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == VNScriptParser::STRING);
    setState(199);
    match(VNScriptParser::T__7);
   
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
  enterRule(_localctx, 38, VNScriptParser::RuleChoiceOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(VNScriptParser::STRING);
    setState(202);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParallelStmtContext ------------------------------------------------------------------

VNScriptParser::ParallelStmtContext::ParallelStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::BlockContext* VNScriptParser::ParallelStmtContext::block() {
  return getRuleContext<VNScriptParser::BlockContext>(0);
}


size_t VNScriptParser::ParallelStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleParallelStmt;
}

void VNScriptParser::ParallelStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParallelStmt(this);
}

void VNScriptParser::ParallelStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParallelStmt(this);
}


std::any VNScriptParser::ParallelStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitParallelStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::ParallelStmtContext* VNScriptParser::parallelStmt() {
  ParallelStmtContext *_localctx = _tracker.createInstance<ParallelStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, VNScriptParser::RuleParallelStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(VNScriptParser::T__22);
    setState(205);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefContext ------------------------------------------------------------------

VNScriptParser::FunctionDefContext::FunctionDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::FunctionDefContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::FunctionDefContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}

VNScriptParser::BlockContext* VNScriptParser::FunctionDefContext::block() {
  return getRuleContext<VNScriptParser::BlockContext>(0);
}


size_t VNScriptParser::FunctionDefContext::getRuleIndex() const {
  return VNScriptParser::RuleFunctionDef;
}

void VNScriptParser::FunctionDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDef(this);
}

void VNScriptParser::FunctionDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDef(this);
}


std::any VNScriptParser::FunctionDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitFunctionDef(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::FunctionDefContext* VNScriptParser::functionDef() {
  FunctionDefContext *_localctx = _tracker.createInstance<FunctionDefContext>(_ctx, getState());
  enterRule(_localctx, 42, VNScriptParser::RuleFunctionDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(VNScriptParser::T__23);
    setState(208);
    match(VNScriptParser::ID);
    setState(209);
    match(VNScriptParser::T__12);
    setState(210);
    match(VNScriptParser::T__13);
    setState(211);
    match(VNScriptParser::SEMICOLON);
    setState(212);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryCatchStmtContext ------------------------------------------------------------------

VNScriptParser::TryCatchStmtContext::TryCatchStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VNScriptParser::BlockContext *> VNScriptParser::TryCatchStmtContext::block() {
  return getRuleContexts<VNScriptParser::BlockContext>();
}

VNScriptParser::BlockContext* VNScriptParser::TryCatchStmtContext::block(size_t i) {
  return getRuleContext<VNScriptParser::BlockContext>(i);
}

std::vector<tree::TerminalNode *> VNScriptParser::TryCatchStmtContext::ID() {
  return getTokens(VNScriptParser::ID);
}

tree::TerminalNode* VNScriptParser::TryCatchStmtContext::ID(size_t i) {
  return getToken(VNScriptParser::ID, i);
}


size_t VNScriptParser::TryCatchStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleTryCatchStmt;
}

void VNScriptParser::TryCatchStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryCatchStmt(this);
}

void VNScriptParser::TryCatchStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryCatchStmt(this);
}


std::any VNScriptParser::TryCatchStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitTryCatchStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::TryCatchStmtContext* VNScriptParser::tryCatchStmt() {
  TryCatchStmtContext *_localctx = _tracker.createInstance<TryCatchStmtContext>(_ctx, getState());
  enterRule(_localctx, 44, VNScriptParser::RuleTryCatchStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(VNScriptParser::T__24);
    setState(215);
    block();
    setState(216);
    match(VNScriptParser::T__25);
    setState(217);
    match(VNScriptParser::T__12);
    setState(218);
    match(VNScriptParser::ID);
    setState(219);
    match(VNScriptParser::ID);
    setState(220);
    match(VNScriptParser::T__13);
    setState(221);
    block();
   
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

tree::TerminalNode* VNScriptParser::SavepointStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
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
  enterRule(_localctx, 46, VNScriptParser::RuleSavepointStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(VNScriptParser::T__26);
    setState(224);
    match(VNScriptParser::STRING);
    setState(225);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TransitionStmtContext ------------------------------------------------------------------

VNScriptParser::TransitionStmtContext::TransitionStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::TransitionStmtContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

VNScriptParser::ExprContext* VNScriptParser::TransitionStmtContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}

VNScriptParser::BlockContext* VNScriptParser::TransitionStmtContext::block() {
  return getRuleContext<VNScriptParser::BlockContext>(0);
}


size_t VNScriptParser::TransitionStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleTransitionStmt;
}

void VNScriptParser::TransitionStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransitionStmt(this);
}

void VNScriptParser::TransitionStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransitionStmt(this);
}


std::any VNScriptParser::TransitionStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitTransitionStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::TransitionStmtContext* VNScriptParser::transitionStmt() {
  TransitionStmtContext *_localctx = _tracker.createInstance<TransitionStmtContext>(_ctx, getState());
  enterRule(_localctx, 48, VNScriptParser::RuleTransitionStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(VNScriptParser::T__27);
    setState(228);
    match(VNScriptParser::ID);
    setState(229);
    match(VNScriptParser::T__12);
    setState(230);
    expr(0);
    setState(231);
    match(VNScriptParser::T__13);
    setState(232);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStmtContext ------------------------------------------------------------------

VNScriptParser::ImportStmtContext::ImportStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::ImportStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::ImportStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}


size_t VNScriptParser::ImportStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleImportStmt;
}

void VNScriptParser::ImportStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStmt(this);
}

void VNScriptParser::ImportStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStmt(this);
}


std::any VNScriptParser::ImportStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitImportStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::ImportStmtContext* VNScriptParser::importStmt() {
  ImportStmtContext *_localctx = _tracker.createInstance<ImportStmtContext>(_ctx, getState());
  enterRule(_localctx, 50, VNScriptParser::RuleImportStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(VNScriptParser::T__28);
    setState(235);
    match(VNScriptParser::STRING);
    setState(236);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DebugBlockContext ------------------------------------------------------------------

VNScriptParser::DebugBlockContext::DebugBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::BlockContext* VNScriptParser::DebugBlockContext::block() {
  return getRuleContext<VNScriptParser::BlockContext>(0);
}


size_t VNScriptParser::DebugBlockContext::getRuleIndex() const {
  return VNScriptParser::RuleDebugBlock;
}

void VNScriptParser::DebugBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDebugBlock(this);
}

void VNScriptParser::DebugBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDebugBlock(this);
}


std::any VNScriptParser::DebugBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitDebugBlock(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::DebugBlockContext* VNScriptParser::debugBlock() {
  DebugBlockContext *_localctx = _tracker.createInstance<DebugBlockContext>(_ctx, getState());
  enterRule(_localctx, 52, VNScriptParser::RuleDebugBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(VNScriptParser::T__29);
    setState(239);
    block();
   
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

tree::TerminalNode* VNScriptParser::GotoStmtContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::GotoStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
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
  enterRule(_localctx, 54, VNScriptParser::RuleGotoStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(VNScriptParser::T__30);
    setState(242);
    match(VNScriptParser::ID);
    setState(243);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnimateStmtContext ------------------------------------------------------------------

VNScriptParser::AnimateStmtContext::AnimateStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::AnimateStmtContext::ID() {
  return getToken(VNScriptParser::ID, 0);
}

tree::TerminalNode* VNScriptParser::AnimateStmtContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
}

tree::TerminalNode* VNScriptParser::AnimateStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}


size_t VNScriptParser::AnimateStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleAnimateStmt;
}

void VNScriptParser::AnimateStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnimateStmt(this);
}

void VNScriptParser::AnimateStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnimateStmt(this);
}


std::any VNScriptParser::AnimateStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitAnimateStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::AnimateStmtContext* VNScriptParser::animateStmt() {
  AnimateStmtContext *_localctx = _tracker.createInstance<AnimateStmtContext>(_ctx, getState());
  enterRule(_localctx, 56, VNScriptParser::RuleAnimateStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(VNScriptParser::T__31);
    setState(246);
    match(VNScriptParser::ID);
    setState(247);
    match(VNScriptParser::STRING);
    setState(248);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayStmtContext ------------------------------------------------------------------

VNScriptParser::PlayStmtContext::PlayStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::MusicStmtContext* VNScriptParser::PlayStmtContext::musicStmt() {
  return getRuleContext<VNScriptParser::MusicStmtContext>(0);
}


size_t VNScriptParser::PlayStmtContext::getRuleIndex() const {
  return VNScriptParser::RulePlayStmt;
}

void VNScriptParser::PlayStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlayStmt(this);
}

void VNScriptParser::PlayStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlayStmt(this);
}


std::any VNScriptParser::PlayStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitPlayStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::PlayStmtContext* VNScriptParser::playStmt() {
  PlayStmtContext *_localctx = _tracker.createInstance<PlayStmtContext>(_ctx, getState());
  enterRule(_localctx, 58, VNScriptParser::RulePlayStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(VNScriptParser::T__32);
    setState(251);
    musicStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WaitStmtContext ------------------------------------------------------------------

VNScriptParser::WaitStmtContext::WaitStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::ExprContext* VNScriptParser::WaitStmtContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}

tree::TerminalNode* VNScriptParser::WaitStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}


size_t VNScriptParser::WaitStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleWaitStmt;
}

void VNScriptParser::WaitStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWaitStmt(this);
}

void VNScriptParser::WaitStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWaitStmt(this);
}


std::any VNScriptParser::WaitStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitWaitStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::WaitStmtContext* VNScriptParser::waitStmt() {
  WaitStmtContext *_localctx = _tracker.createInstance<WaitStmtContext>(_ctx, getState());
  enterRule(_localctx, 60, VNScriptParser::RuleWaitStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(VNScriptParser::T__33);
    setState(254);
    match(VNScriptParser::T__12);
    setState(255);
    expr(0);
    setState(256);
    match(VNScriptParser::T__13);
    setState(257);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

VNScriptParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VNScriptParser::ReturnStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}

VNScriptParser::ExprContext* VNScriptParser::ReturnStmtContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}


size_t VNScriptParser::ReturnStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleReturnStmt;
}

void VNScriptParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void VNScriptParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}


std::any VNScriptParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::ReturnStmtContext* VNScriptParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 62, VNScriptParser::RuleReturnStmt);
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
    setState(259);
    match(VNScriptParser::T__34);
    setState(261);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 129478489286909952) != 0)) {
      setState(260);
      expr(0);
    }
    setState(263);
    match(VNScriptParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogStmtContext ------------------------------------------------------------------

VNScriptParser::LogStmtContext::LogStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VNScriptParser::ExprContext* VNScriptParser::LogStmtContext::expr() {
  return getRuleContext<VNScriptParser::ExprContext>(0);
}

tree::TerminalNode* VNScriptParser::LogStmtContext::SEMICOLON() {
  return getToken(VNScriptParser::SEMICOLON, 0);
}


size_t VNScriptParser::LogStmtContext::getRuleIndex() const {
  return VNScriptParser::RuleLogStmt;
}

void VNScriptParser::LogStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogStmt(this);
}

void VNScriptParser::LogStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VNScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogStmt(this);
}


std::any VNScriptParser::LogStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VNScriptVisitor*>(visitor))
    return parserVisitor->visitLogStmt(this);
  else
    return visitor->visitChildren(this);
}

VNScriptParser::LogStmtContext* VNScriptParser::logStmt() {
  LogStmtContext *_localctx = _tracker.createInstance<LogStmtContext>(_ctx, getState());
  enterRule(_localctx, 64, VNScriptParser::RuleLogStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(VNScriptParser::T__35);
    setState(266);
    match(VNScriptParser::T__12);
    setState(267);
    expr(0);
    setState(268);
    match(VNScriptParser::T__13);
    setState(269);
    match(VNScriptParser::SEMICOLON);
   
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

std::vector<VNScriptParser::ExprContext *> VNScriptParser::ExprContext::expr() {
  return getRuleContexts<VNScriptParser::ExprContext>();
}

VNScriptParser::ExprContext* VNScriptParser::ExprContext::expr(size_t i) {
  return getRuleContext<VNScriptParser::ExprContext>(i);
}

VNScriptParser::LvalueContext* VNScriptParser::ExprContext::lvalue() {
  return getRuleContext<VNScriptParser::LvalueContext>(0);
}

tree::TerminalNode* VNScriptParser::ExprContext::NUMBER() {
  return getToken(VNScriptParser::NUMBER, 0);
}

tree::TerminalNode* VNScriptParser::ExprContext::STRING() {
  return getToken(VNScriptParser::STRING, 0);
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
   return expr(0);
}

VNScriptParser::ExprContext* VNScriptParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  VNScriptParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  VNScriptParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, VNScriptParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(294);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(272);
      match(VNScriptParser::T__12);
      setState(273);
      expr(0);
      setState(274);
      match(VNScriptParser::T__13);
      break;
    }

    case 2: {
      setState(276);
      lvalue();
      break;
    }

    case 3: {
      setState(277);
      match(VNScriptParser::NUMBER);
      break;
    }

    case 4: {
      setState(278);
      match(VNScriptParser::STRING);
      break;
    }

    case 5: {
      setState(279);
      match(VNScriptParser::ID);
      setState(280);
      match(VNScriptParser::T__12);
      setState(289);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 129478489286909952) != 0)) {
        setState(281);
        expr(0);
        setState(286);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == VNScriptParser::T__48) {
          setState(282);
          match(VNScriptParser::T__48);
          setState(283);
          expr(0);
          setState(288);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(291);
      match(VNScriptParser::T__13);
      break;
    }

    case 6: {
      setState(292);
      match(VNScriptParser::T__49);
      break;
    }

    case 7: {
      setState(293);
      match(VNScriptParser::T__50);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(313);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(311);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(296);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(297);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == VNScriptParser::T__36

          || _la == VNScriptParser::T__37)) {
            antlrcpp::downCast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(298);
          expr(13);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(299);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(300);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == VNScriptParser::T__38

          || _la == VNScriptParser::T__39)) {
            antlrcpp::downCast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(301);
          expr(12);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(302);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(303);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 138538465099776) != 0))) {
            antlrcpp::downCast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(304);
          expr(11);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(305);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(306);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(VNScriptParser::T__46);
          setState(307);
          expr(10);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(308);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(309);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(VNScriptParser::T__47);
          setState(310);
          expr(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(315);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool VNScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 33: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool VNScriptParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 12);
    case 1: return precpred(_ctx, 11);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 9);
    case 4: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

void VNScriptParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  vnscriptParserInitialize();
#else
  ::antlr4::internal::call_once(vnscriptParserOnceFlag, vnscriptParserInitialize);
#endif
}
