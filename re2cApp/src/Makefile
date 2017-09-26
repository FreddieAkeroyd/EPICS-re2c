TOP=../..

include $(TOP)/configure/CONFIG

PROD_HOST = re2c

re2c_SRCS = \
	src/codegen/bitmap.cc \
	src/codegen/emit_action.cc \
	src/codegen/emit_dfa.cc \
	src/codegen/label.cc \
	src/codegen/go_construct.cc \
	src/codegen/go_destruct.cc \
	src/codegen/go_emit.cc \
	src/codegen/go_used_labels.cc \
	src/codegen/input_api.cc \
	src/codegen/output.cc \
	src/codegen/print.cc \
	src/conf/msg.cc \
	src/conf/opt.cc \
	src/conf/warn.cc \
	src/ir/nfa/calc_size.cc \
	src/ir/nfa/nfa.cc \
	src/ir/nfa/split.cc \
	src/ir/adfa/adfa.cc \
	src/ir/adfa/prepare.cc \
	src/ir/dfa/determinization.cc \
	src/ir/dfa/fillpoints.cc \
	src/ir/dfa/minimization.cc \
	src/ir/regexp/display.cc \
	src/ir/regexp/encoding/enc.cc \
	src/ir/regexp/encoding/range_suffix.cc \
	src/ir/regexp/encoding/utf8/utf8_regexp.cc \
	src/ir/regexp/encoding/utf8/utf8_range.cc \
	src/ir/regexp/encoding/utf8/utf8.cc \
	src/ir/regexp/encoding/utf16/utf16_regexp.cc \
	src/ir/regexp/encoding/utf16/utf16.cc \
	src/ir/regexp/encoding/utf16/utf16_range.cc \
	src/ir/regexp/fixed_length.cc \
	src/ir/regexp/regexp.cc \
	src/ir/compile.cc \
	src/ir/rule_rank.cc \
	src/ir/skeleton/control_flow.cc \
	src/ir/skeleton/generate_code.cc \
	src/ir/skeleton/generate_data.cc \
	src/ir/skeleton/match_empty.cc \
	src/ir/skeleton/maxlen.cc \
	src/ir/skeleton/skeleton.cc \
	src/ir/skeleton/unreachable.cc \
	src/ir/skeleton/way.cc \
	src/main.cc \
	src/parse/code.cc \
	src/parse/input.cc \
	src/parse/scanner.cc \
	src/parse/unescape.cc \
	src/util/s_to_n32_unsafe.cc \
	src/util/range.cc

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

