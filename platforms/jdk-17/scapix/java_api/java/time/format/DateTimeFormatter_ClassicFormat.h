// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/Format.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTER_CLASSICFORMAT_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTER_CLASSICFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class DateTimeFormatter_ClassicFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::DateTimeFormatter_ClassicFormat>
{
	static constexpr fixed_string class_name = "java/time/format/DateTimeFormatter$ClassicFormat";
	using base_classes = std::tuple<scapix::java_api::java::text::Format>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTER_CLASSICFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTER_CLASSICFORMAT)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTER_CLASSICFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/time/format/DateTimeFormatter.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::format::DateTimeFormatter_ClassicFormat : public jni::object_base<"java/time/format/DateTimeFormatter$ClassicFormat",
	java::text::Format>
{
public:

	static jni::ref<java::time::format::DateTimeFormatter_ClassicFormat> new_object(jni::ref<java::time::format::DateTimeFormatter> formatter, jni::ref<java::time::temporal::TemporalQuery> parseType) { return base_::new_object(formatter, parseType); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::lang::Object> obj, jni::ref<java::lang::StringBuffer> toAppendTo, jni::ref<java::text::FieldPosition> pos) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(obj, toAppendTo, pos); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> text) { return call_method<"parseObject", jni::ref<java::lang::Object>>(text); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> text, jni::ref<java::text::ParsePosition> pos) { return call_method<"parseObject", jni::ref<java::lang::Object>>(text, pos); }

protected:

	DateTimeFormatter_ClassicFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTER_CLASSICFORMAT
