// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STRINGJOINER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STRINGJOINER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class StringJoiner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::StringJoiner>
{
	static constexpr fixed_string class_name = "java/util/StringJoiner";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STRINGJOINER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STRINGJOINER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STRINGJOINER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::StringJoiner : public jni::object_base<"java/util/StringJoiner",
	java::lang::Object>
{
public:

	static jni::ref<java::util::StringJoiner> new_object(jni::ref<java::lang::CharSequence> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::StringJoiner> new_object(jni::ref<java::lang::CharSequence> p1, jni::ref<java::lang::CharSequence> p2, jni::ref<java::lang::CharSequence> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::util::StringJoiner> setEmptyValue(jni::ref<java::lang::CharSequence> p1) { return call_method<"setEmptyValue", jni::ref<java::util::StringJoiner>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::StringJoiner> add(jni::ref<java::lang::CharSequence> p1) { return call_method<"add", jni::ref<java::util::StringJoiner>>(p1); }
	jni::ref<java::util::StringJoiner> merge(jni::ref<java::util::StringJoiner> p1) { return call_method<"merge", jni::ref<java::util::StringJoiner>>(p1); }
	jint length() { return call_method<"length", jint>(); }

protected:

	StringJoiner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STRINGJOINER
