// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/format/DateTimeFormatterBuilder_DateTimePrinterParser.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_CHARLITERALPRINTERPARSER_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_CHARLITERALPRINTERPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class DateTimeFormatterBuilder_CharLiteralPrinterParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::DateTimeFormatterBuilder_CharLiteralPrinterParser>
{
	static constexpr fixed_string class_name = "java/time/format/DateTimeFormatterBuilder$CharLiteralPrinterParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::format::DateTimeFormatterBuilder_DateTimePrinterParser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_CHARLITERALPRINTERPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_CHARLITERALPRINTERPARSER)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_CHARLITERALPRINTERPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/java/time/format/DateTimeParseContext.h>
#include <scapix/java_api/java/time/format/DateTimePrintContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::format::DateTimeFormatterBuilder_CharLiteralPrinterParser : public jni::object_base<"java/time/format/DateTimeFormatterBuilder$CharLiteralPrinterParser",
	java::lang::Object,
	java::time::format::DateTimeFormatterBuilder_DateTimePrinterParser>
{
public:

	jboolean format(jni::ref<java::time::format::DateTimePrintContext> context, jni::ref<java::lang::StringBuilder> buf) { return call_method<"format", jboolean>(context, buf); }
	jint parse(jni::ref<java::time::format::DateTimeParseContext> context, jni::ref<java::lang::CharSequence> text, jint position) { return call_method<"parse", jint>(context, text, position); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DateTimeFormatterBuilder_CharLiteralPrinterParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_CHARLITERALPRINTERPARSER
