// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/time/format/DateTimeFormatterBuilder_NumberPrinterParser.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_REDUCEDPRINTERPARSER_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_REDUCEDPRINTERPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class DateTimeFormatterBuilder_ReducedPrinterParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::DateTimeFormatterBuilder_ReducedPrinterParser>
{
	static constexpr fixed_string class_name = "java/time/format/DateTimeFormatterBuilder$ReducedPrinterParser";
	using base_classes = std::tuple<scapix::java_api::java::time::format::DateTimeFormatterBuilder_NumberPrinterParser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_REDUCEDPRINTERPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_REDUCEDPRINTERPARSER)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_REDUCEDPRINTERPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::format::DateTimeFormatterBuilder_ReducedPrinterParser : public jni::object_base<"java/time/format/DateTimeFormatterBuilder$ReducedPrinterParser",
	java::time::format::DateTimeFormatterBuilder_NumberPrinterParser>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DateTimeFormatterBuilder_ReducedPrinterParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_REDUCEDPRINTERPARSER
