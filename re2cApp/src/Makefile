TOP=../..

include $(TOP)/configure/CONFIG

PROD_HOST = re2c

RE2CSRC = $(TOP)/re2cApp/src/re2c-src

# This is correct for re2c-0.16
re2c_SRCS = \
	$(RE2CSRC)/src/codegen/bitmap.cc \
	$(RE2CSRC)/src/codegen/emit_action.cc \
	$(RE2CSRC)/src/codegen/emit_dfa.cc \
	$(RE2CSRC)/src/codegen/label.cc \
	$(RE2CSRC)/src/codegen/go_construct.cc \
	$(RE2CSRC)/src/codegen/go_destruct.cc \
	$(RE2CSRC)/src/codegen/go_emit.cc \
	$(RE2CSRC)/src/codegen/go_used_labels.cc \
	$(RE2CSRC)/src/codegen/input_api.cc \
	$(RE2CSRC)/src/codegen/output.cc \
	$(RE2CSRC)/src/codegen/print.cc \
	$(RE2CSRC)/src/conf/msg.cc \
	$(RE2CSRC)/src/conf/opt.cc \
	$(RE2CSRC)/src/conf/warn.cc \
	$(RE2CSRC)/src/ir/nfa/calc_size.cc \
	$(RE2CSRC)/src/ir/nfa/nfa.cc \
	$(RE2CSRC)/src/ir/nfa/split.cc \
	$(RE2CSRC)/src/ir/adfa/adfa.cc \
	$(RE2CSRC)/src/ir/adfa/prepare.cc \
	$(RE2CSRC)/src/ir/dfa/determinization.cc \
	$(RE2CSRC)/src/ir/dfa/fillpoints.cc \
	$(RE2CSRC)/src/ir/dfa/minimization.cc \
	$(RE2CSRC)/src/ir/regexp/display.cc \
	$(RE2CSRC)/src/ir/regexp/encoding/enc.cc \
	$(RE2CSRC)/src/ir/regexp/encoding/range_suffix.cc \
	$(RE2CSRC)/src/ir/regexp/encoding/utf8/utf8_regexp.cc \
	$(RE2CSRC)/src/ir/regexp/encoding/utf8/utf8_range.cc \
	$(RE2CSRC)/src/ir/regexp/encoding/utf8/utf8.cc \
	$(RE2CSRC)/src/ir/regexp/encoding/utf16/utf16_regexp.cc \
	$(RE2CSRC)/src/ir/regexp/encoding/utf16/utf16.cc \
	$(RE2CSRC)/src/ir/regexp/encoding/utf16/utf16_range.cc \
	$(RE2CSRC)/src/ir/regexp/fixed_length.cc \
	$(RE2CSRC)/src/ir/regexp/regexp.cc \
	$(RE2CSRC)/src/ir/compile.cc \
	$(RE2CSRC)/src/ir/rule_rank.cc \
	$(RE2CSRC)/src/ir/skeleton/control_flow.cc \
	$(RE2CSRC)/src/ir/skeleton/generate_code.cc \
	$(RE2CSRC)/src/ir/skeleton/generate_data.cc \
	$(RE2CSRC)/src/ir/skeleton/match_empty.cc \
	$(RE2CSRC)/src/ir/skeleton/maxlen.cc \
	$(RE2CSRC)/src/ir/skeleton/skeleton.cc \
	$(RE2CSRC)/src/ir/skeleton/unreachable.cc \
	$(RE2CSRC)/src/ir/skeleton/way.cc \
	$(RE2CSRC)/src/main.cc \
	$(RE2CSRC)/src/parse/code.cc \
	$(RE2CSRC)/src/parse/input.cc \
	$(RE2CSRC)/src/parse/scanner.cc \
	$(RE2CSRC)/src/parse/unescape.cc \
	$(RE2CSRC)/src/util/s_to_n32_unsafe.cc \
	$(RE2CSRC)/src/util/range.cc

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

