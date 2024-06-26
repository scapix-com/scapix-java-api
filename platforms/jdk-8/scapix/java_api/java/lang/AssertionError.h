// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ASSERTIONERROR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ASSERTIONERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class AssertionError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::AssertionError>
{
	static constexpr fixed_string class_name = "java/lang/AssertionError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Error>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ASSERTIONERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ASSERTIONERROR)
#define SCAPIX_JAVA_API_JAVA_LANG_ASSERTIONERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::AssertionError : public jni::object_base<"java/lang/AssertionError",
	java::lang::Error>
{
public:

	static jni::ref<java::lang::AssertionError> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::AssertionError> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::AssertionError> new_object(jboolean p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::AssertionError> new_object(jchar p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::AssertionError> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::AssertionError> new_object(jlong p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::AssertionError> new_object(jfloat p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::AssertionError> new_object(jdouble p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::AssertionError> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }

protected:

	AssertionError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ASSERTIONERROR
