// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_COMPACTNUMBERFORMAT_PATTERNS_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_COMPACTNUMBERFORMAT_PATTERNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class CompactNumberFormat_Patterns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::CompactNumberFormat_Patterns>
{
	static constexpr fixed_string class_name = "java/text/CompactNumberFormat$Patterns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COMPACTNUMBERFORMAT_PATTERNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_COMPACTNUMBERFORMAT_PATTERNS)
#define SCAPIX_JAVA_API_JAVA_TEXT_COMPACTNUMBERFORMAT_PATTERNS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::CompactNumberFormat_Patterns : public jni::object_base<"java/text/CompactNumberFormat$Patterns",
	java::lang::Object>
{
public:


protected:

	CompactNumberFormat_Patterns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COMPACTNUMBERFORMAT_PATTERNS