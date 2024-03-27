// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class MissingResourceException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::MissingResourceException>
{
	static constexpr fixed_string class_name = "java/util/MissingResourceException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_MISSINGRESOURCEEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_MISSINGRESOURCEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::MissingResourceException : public jni::object_base<"java/util/MissingResourceException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<java::util::MissingResourceException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getKey() { return call_method<"getKey", jni::ref<java::lang::String>>(); }

protected:

	MissingResourceException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_MISSINGRESOURCEEXCEPTION
