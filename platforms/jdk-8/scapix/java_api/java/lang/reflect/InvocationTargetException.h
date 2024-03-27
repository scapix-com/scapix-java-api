// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ReflectiveOperationException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class InvocationTargetException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::InvocationTargetException>
{
	static constexpr fixed_string class_name = "java/lang/reflect/InvocationTargetException";
	using base_classes = std::tuple<scapix::java_api::java::lang::ReflectiveOperationException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::InvocationTargetException : public jni::object_base<"java/lang/reflect/InvocationTargetException",
	java::lang::ReflectiveOperationException>
{
public:

	static jni::ref<java::lang::reflect::InvocationTargetException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::reflect::InvocationTargetException> new_object(jni::ref<java::lang::Throwable> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::Throwable> getTargetException() { return call_method<"getTargetException", jni::ref<java::lang::Throwable>>(); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }

protected:

	InvocationTargetException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION
