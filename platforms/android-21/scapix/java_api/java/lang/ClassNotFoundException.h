// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ReflectiveOperationException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ClassNotFoundException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ClassNotFoundException>
{
	static constexpr fixed_string class_name = "java/lang/ClassNotFoundException";
	using base_classes = std::tuple<scapix::java_api::java::lang::ReflectiveOperationException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSNOTFOUNDEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSNOTFOUNDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ClassNotFoundException : public jni::object_base<"java/lang/ClassNotFoundException",
	java::lang::ReflectiveOperationException>
{
public:

	static jni::ref<java::lang::ClassNotFoundException> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::ClassNotFoundException> new_object(jni::ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }
	static jni::ref<java::lang::ClassNotFoundException> new_object(jni::ref<java::lang::String> detailMessage, jni::ref<java::lang::Throwable> exception) { return base_::new_object(detailMessage, exception); }
	jni::ref<java::lang::Throwable> getException() { return call_method<"getException", jni::ref<java::lang::Throwable>>(); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }

protected:

	ClassNotFoundException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSNOTFOUNDEXCEPTION
