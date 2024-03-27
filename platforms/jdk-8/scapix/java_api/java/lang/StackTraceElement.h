// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STACKTRACEELEMENT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STACKTRACEELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class StackTraceElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::StackTraceElement>
{
	static constexpr fixed_string class_name = "java/lang/StackTraceElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKTRACEELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STACKTRACEELEMENT)
#define SCAPIX_JAVA_API_JAVA_LANG_STACKTRACEELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::StackTraceElement : public jni::object_base<"java/lang/StackTraceElement",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::lang::StackTraceElement> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::lang::String> getFileName() { return call_method<"getFileName", jni::ref<java::lang::String>>(); }
	jint getLineNumber() { return call_method<"getLineNumber", jint>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMethodName() { return call_method<"getMethodName", jni::ref<java::lang::String>>(); }
	jboolean isNativeMethod() { return call_method<"isNativeMethod", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	StackTraceElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKTRACEELEMENT