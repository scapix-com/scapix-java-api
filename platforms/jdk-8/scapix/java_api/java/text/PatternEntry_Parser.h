// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_PARSER_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_PARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class PatternEntry_Parser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::PatternEntry_Parser>
{
	static constexpr fixed_string class_name = "java/text/PatternEntry$Parser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_PARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_PARSER)
#define SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_PARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/PatternEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::PatternEntry_Parser : public jni::object_base<"java/text/PatternEntry$Parser",
	java::lang::Object>
{
public:

	static jni::ref<java::text::PatternEntry_Parser> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::text::PatternEntry> next() { return call_method<"next", jni::ref<java::text::PatternEntry>>(); }

protected:

	PatternEntry_Parser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_PARSER