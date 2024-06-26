// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/time/format/DateTimeFormatterBuilder_ZoneIdPrinterParser.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_ZONETEXTPRINTERPARSER_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_ZONETEXTPRINTERPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class DateTimeFormatterBuilder_ZoneTextPrinterParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::DateTimeFormatterBuilder_ZoneTextPrinterParser>
{
	static constexpr fixed_string class_name = "java/time/format/DateTimeFormatterBuilder$ZoneTextPrinterParser";
	using base_classes = std::tuple<scapix::java_api::java::time::format::DateTimeFormatterBuilder_ZoneIdPrinterParser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_ZONETEXTPRINTERPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_ZONETEXTPRINTERPARSER)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_ZONETEXTPRINTERPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/java/time/format/DateTimePrintContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::format::DateTimeFormatterBuilder_ZoneTextPrinterParser : public jni::object_base<"java/time/format/DateTimeFormatterBuilder$ZoneTextPrinterParser",
	java::time::format::DateTimeFormatterBuilder_ZoneIdPrinterParser>
{
public:

	jboolean format(jni::ref<java::time::format::DateTimePrintContext> p1, jni::ref<java::lang::StringBuilder> p2) { return call_method<"format", jboolean>(p1, p2); }

protected:

	DateTimeFormatterBuilder_ZoneTextPrinterParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_ZONETEXTPRINTERPARSER
