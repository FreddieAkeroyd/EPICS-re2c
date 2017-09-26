TOP=../..

include $(TOP)/configure/CONFIG

PROD_HOST = re2c
ifneq ($(findstring win32-x86,$(EPICS_HOST_ARCH)),)
EPICS_ARCH=win32-x86
endif
ifneq ($(findstring windows-x64,$(EPICS_HOST_ARCH)),)
EPICS_ARCH=windows-x64
endif

RE2CSRC = $(TOP)/re2cApp/src/re2c-src

USR_CFLAGS += -I$(RE2CSRC)
USR_CXXFLAGS += -I$(RE2CSRC)

SRC_DIRS += \
    $(RE2CSRC)/src/codegen \
    $(RE2CSRC)/src/conf \
    $(RE2CSRC)/src/ir/nfa \
    $(RE2CSRC)/src/ir/adfa \
    $(RE2CSRC)/src/ir/dfa \
    $(RE2CSRC)/src/ir/regexp \
    $(RE2CSRC)/src/ir/regexp/encoding \
    $(RE2CSRC)/src/ir/regexp/encoding/utf8 \
    $(RE2CSRC)/src/ir/regexp/encoding/utf16 \
    $(RE2CSRC)/src/ir \
    $(RE2CSRC)/src/ir/skeleton \
    $(RE2CSRC)/src \
    $(RE2CSRC)/src/parse \
    $(RE2CSRC)/src/util

SRC_DIRS += \
    $(RE2CSRC)/bootstrap/src/conf \
    $(RE2CSRC)/bootstrap/src/parse

# This is correct for re2c-0.16
re2c_SRCS = \
	bitmap.cc \
	emit_action.cc \
	emit_dfa.cc \
	label.cc \
	go_construct.cc \
	go_destruct.cc \
	go_emit.cc \
	go_used_labels.cc \
	input_api.cc \
	output.cc \
	print.cc \
	msg.cc \
	opt.cc \
	warn.cc \
	calc_size.cc \
	nfa.cc \
	split.cc \
	adfa.cc \
	prepare.cc \
	determinization.cc \
	fillpoints.cc \
	minimization.cc \
	display.cc \
	enc.cc \
	range_suffix.cc \
	utf8_regexp.cc \
	utf8_range.cc \
	utf8.cc \
	utf16_regexp.cc \
	utf16.cc \
	utf16_range.cc \
	fixed_length.cc \
	regexp.cc \
	compile.cc \
	rule_rank.cc \
	control_flow.cc \
	generate_code.cc \
	generate_data.cc \
	match_empty.cc \
	maxlen.cc \
	skeleton.cc \
	unreachable.cc \
	way.cc \
	main.cc \
	code.cc \
	input.cc \
	scanner.cc \
	unescape.cc \
	s_to_n32_unsafe.cc \
	range.cc

re2c_SRCS += \
    lex.cc \
    lex_conf.cc \
    parser.cc \
    parse_opts.cc

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

$(RE2CSRC)/config.h : $(RE2CSRC)/config.h-$(EPICS_ARCH)
	$(CP) $< $@

$(RE2CSRC)/src/codegen/bitmap.cc : $(RE2CSRC)/config.h
