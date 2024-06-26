// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Enumeration.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STRINGTOKENIZER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STRINGTOKENIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class StringTokenizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::StringTokenizer>
{
	static constexpr fixed_string class_name = "java/util/StringTokenizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Enumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STRINGTOKENIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STRINGTOKENIZER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STRINGTOKENIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::StringTokenizer : public jni::object_base<"java/util/StringTokenizer",
	java::lang::Object,
	java::util::Enumeration>
{
public:

	static jni::ref<java::util::StringTokenizer> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::util::StringTokenizer> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::util::StringTokenizer> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jboolean hasMoreTokens() { return call_method<"hasMoreTokens", jboolean>(); }
	jni::ref<java::lang::String> nextToken() { return call_method<"nextToken", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> nextToken(jni::ref<java::lang::String> p1) { return call_method<"nextToken", jni::ref<java::lang::String>>(p1); }
	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jni::ref<java::lang::Object> nextElement() { return call_method<"nextElement", jni::ref<java::lang::Object>>(); }
	jint countTokens() { return call_method<"countTokens", jint>(); }

protected:

	StringTokenizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STRINGTOKENIZER
