// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class PatternEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::PatternEntry>
{
	static constexpr fixed_string class_name = "java/text/PatternEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY)
#define SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::PatternEntry : public jni::object_base<"java/text/PatternEntry",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PatternEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_PATTERNENTRY
