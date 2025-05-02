
// Generated from /home/art/programming/pet/oiwdmvn/VNScript.g4 by ANTLR 4.13.2


#include "VNScriptLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct VNScriptLexerStaticData final {
  VNScriptLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VNScriptLexerStaticData(const VNScriptLexerStaticData&) = delete;
  VNScriptLexerStaticData(VNScriptLexerStaticData&&) = delete;
  VNScriptLexerStaticData& operator=(const VNScriptLexerStaticData&) = delete;
  VNScriptLexerStaticData& operator=(VNScriptLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag vnscriptlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<VNScriptLexerStaticData> vnscriptlexerLexerStaticData = nullptr;

void vnscriptlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (vnscriptlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(vnscriptlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<VNScriptLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "COMMENT", "WS", "STRING", "NUMBER", 
      "ID"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,34,258,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,
  	1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,
  	1,11,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,
  	1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,29,1,29,
  	1,29,1,29,5,29,214,8,29,10,29,12,29,217,9,29,1,29,1,29,1,30,4,30,222,
  	8,30,11,30,12,30,223,1,30,1,30,1,31,1,31,1,31,1,31,5,31,232,8,31,10,31,
  	12,31,235,9,31,1,31,1,31,1,32,4,32,240,8,32,11,32,12,32,241,1,32,1,32,
  	4,32,246,8,32,11,32,12,32,247,3,32,250,8,32,1,33,1,33,5,33,254,8,33,10,
  	33,12,33,257,9,33,0,0,34,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,
  	21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,
  	22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,
  	67,34,1,0,6,2,0,10,10,13,13,3,0,9,10,13,13,32,32,2,0,34,34,92,92,1,0,
  	48,57,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,265,0,1,1,0,
  	0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,
  	1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,
  	0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,
  	0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,
  	1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,
  	0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,
  	0,67,1,0,0,0,1,69,1,0,0,0,3,81,1,0,0,0,5,91,1,0,0,0,7,102,1,0,0,0,9,108,
  	1,0,0,0,11,118,1,0,0,0,13,120,1,0,0,0,15,122,1,0,0,0,17,127,1,0,0,0,19,
  	129,1,0,0,0,21,136,1,0,0,0,23,138,1,0,0,0,25,142,1,0,0,0,27,144,1,0,0,
  	0,29,149,1,0,0,0,31,154,1,0,0,0,33,160,1,0,0,0,35,162,1,0,0,0,37,164,
  	1,0,0,0,39,166,1,0,0,0,41,173,1,0,0,0,43,176,1,0,0,0,45,181,1,0,0,0,47,
  	184,1,0,0,0,49,187,1,0,0,0,51,189,1,0,0,0,53,191,1,0,0,0,55,194,1,0,0,
  	0,57,204,1,0,0,0,59,209,1,0,0,0,61,221,1,0,0,0,63,227,1,0,0,0,65,239,
  	1,0,0,0,67,251,1,0,0,0,69,70,5,115,0,0,70,71,5,99,0,0,71,72,5,101,0,0,
  	72,73,5,110,0,0,73,74,5,101,0,0,74,75,5,95,0,0,75,76,5,115,0,0,76,77,
  	5,116,0,0,77,78,5,97,0,0,78,79,5,114,0,0,79,80,5,116,0,0,80,2,1,0,0,0,
  	81,82,5,115,0,0,82,83,5,99,0,0,83,84,5,101,0,0,84,85,5,110,0,0,85,86,
  	5,101,0,0,86,87,5,95,0,0,87,88,5,101,0,0,88,89,5,110,0,0,89,90,5,100,
  	0,0,90,4,1,0,0,0,91,92,5,98,0,0,92,93,5,97,0,0,93,94,5,99,0,0,94,95,5,
  	107,0,0,95,96,5,103,0,0,96,97,5,114,0,0,97,98,5,111,0,0,98,99,5,117,0,
  	0,99,100,5,110,0,0,100,101,5,100,0,0,101,6,1,0,0,0,102,103,5,109,0,0,
  	103,104,5,117,0,0,104,105,5,115,0,0,105,106,5,105,0,0,106,107,5,99,0,
  	0,107,8,1,0,0,0,108,109,5,99,0,0,109,110,5,104,0,0,110,111,5,97,0,0,111,
  	112,5,114,0,0,112,113,5,97,0,0,113,114,5,99,0,0,114,115,5,116,0,0,115,
  	116,5,101,0,0,116,117,5,114,0,0,117,10,1,0,0,0,118,119,5,123,0,0,119,
  	12,1,0,0,0,120,121,5,125,0,0,121,14,1,0,0,0,122,123,5,110,0,0,123,124,
  	5,97,0,0,124,125,5,109,0,0,125,126,5,101,0,0,126,16,1,0,0,0,127,128,5,
  	115,0,0,128,18,1,0,0,0,129,130,5,115,0,0,130,131,5,116,0,0,131,132,5,
  	114,0,0,132,133,5,105,0,0,133,134,5,110,0,0,134,135,5,103,0,0,135,20,
  	1,0,0,0,136,137,5,105,0,0,137,22,1,0,0,0,138,139,5,105,0,0,139,140,5,
  	110,0,0,140,141,5,116,0,0,141,24,1,0,0,0,142,143,5,98,0,0,143,26,1,0,
  	0,0,144,145,5,98,0,0,145,146,5,111,0,0,146,147,5,111,0,0,147,148,5,108,
  	0,0,148,28,1,0,0,0,149,150,5,116,0,0,150,151,5,114,0,0,151,152,5,117,
  	0,0,152,153,5,101,0,0,153,30,1,0,0,0,154,155,5,102,0,0,155,156,5,97,0,
  	0,156,157,5,108,0,0,157,158,5,115,0,0,158,159,5,101,0,0,159,32,1,0,0,
  	0,160,161,5,33,0,0,161,34,1,0,0,0,162,163,5,64,0,0,163,36,1,0,0,0,164,
  	165,5,46,0,0,165,38,1,0,0,0,166,167,5,99,0,0,167,168,5,104,0,0,168,169,
  	5,111,0,0,169,170,5,105,0,0,170,171,5,99,0,0,171,172,5,101,0,0,172,40,
  	1,0,0,0,173,174,5,105,0,0,174,175,5,102,0,0,175,42,1,0,0,0,176,177,5,
  	101,0,0,177,178,5,108,0,0,178,179,5,115,0,0,179,180,5,101,0,0,180,44,
  	1,0,0,0,181,182,5,38,0,0,182,183,5,38,0,0,183,46,1,0,0,0,184,185,5,124,
  	0,0,185,186,5,124,0,0,186,48,1,0,0,0,187,188,5,40,0,0,188,50,1,0,0,0,
  	189,190,5,41,0,0,190,52,1,0,0,0,191,192,5,61,0,0,192,193,5,61,0,0,193,
  	54,1,0,0,0,194,195,5,115,0,0,195,196,5,97,0,0,196,197,5,118,0,0,197,198,
  	5,101,0,0,198,199,5,112,0,0,199,200,5,111,0,0,200,201,5,105,0,0,201,202,
  	5,110,0,0,202,203,5,116,0,0,203,56,1,0,0,0,204,205,5,103,0,0,205,206,
  	5,111,0,0,206,207,5,116,0,0,207,208,5,111,0,0,208,58,1,0,0,0,209,210,
  	5,47,0,0,210,211,5,47,0,0,211,215,1,0,0,0,212,214,8,0,0,0,213,212,1,0,
  	0,0,214,217,1,0,0,0,215,213,1,0,0,0,215,216,1,0,0,0,216,218,1,0,0,0,217,
  	215,1,0,0,0,218,219,6,29,0,0,219,60,1,0,0,0,220,222,7,1,0,0,221,220,1,
  	0,0,0,222,223,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,225,1,0,0,0,
  	225,226,6,30,0,0,226,62,1,0,0,0,227,233,5,34,0,0,228,232,8,2,0,0,229,
  	230,5,92,0,0,230,232,9,0,0,0,231,228,1,0,0,0,231,229,1,0,0,0,232,235,
  	1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,236,1,0,0,0,235,233,1,0,0,
  	0,236,237,5,34,0,0,237,64,1,0,0,0,238,240,7,3,0,0,239,238,1,0,0,0,240,
  	241,1,0,0,0,241,239,1,0,0,0,241,242,1,0,0,0,242,249,1,0,0,0,243,245,5,
  	46,0,0,244,246,7,3,0,0,245,244,1,0,0,0,246,247,1,0,0,0,247,245,1,0,0,
  	0,247,248,1,0,0,0,248,250,1,0,0,0,249,243,1,0,0,0,249,250,1,0,0,0,250,
  	66,1,0,0,0,251,255,7,4,0,0,252,254,7,5,0,0,253,252,1,0,0,0,254,257,1,
  	0,0,0,255,253,1,0,0,0,255,256,1,0,0,0,256,68,1,0,0,0,257,255,1,0,0,0,
  	9,0,215,223,231,233,241,247,249,255,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  vnscriptlexerLexerStaticData = std::move(staticData);
}

}

VNScriptLexer::VNScriptLexer(CharStream *input) : Lexer(input) {
  VNScriptLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *vnscriptlexerLexerStaticData->atn, vnscriptlexerLexerStaticData->decisionToDFA, vnscriptlexerLexerStaticData->sharedContextCache);
}

VNScriptLexer::~VNScriptLexer() {
  delete _interpreter;
}

std::string VNScriptLexer::getGrammarFileName() const {
  return "VNScript.g4";
}

const std::vector<std::string>& VNScriptLexer::getRuleNames() const {
  return vnscriptlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& VNScriptLexer::getChannelNames() const {
  return vnscriptlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& VNScriptLexer::getModeNames() const {
  return vnscriptlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& VNScriptLexer::getVocabulary() const {
  return vnscriptlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VNScriptLexer::getSerializedATN() const {
  return vnscriptlexerLexerStaticData->serializedATN;
}

const atn::ATN& VNScriptLexer::getATN() const {
  return *vnscriptlexerLexerStaticData->atn;
}




void VNScriptLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  vnscriptlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(vnscriptlexerLexerOnceFlag, vnscriptlexerLexerInitialize);
#endif
}
