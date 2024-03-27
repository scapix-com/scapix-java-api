// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_TYPENOTPRESENTEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_TYPENOTPRESENTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class TypeNotPresentException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::TypeNotPresentException>
{
	static constexpr fixed_string class_name = "java/lang/TypeNotPresentException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_TYPENOTPRESENTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_TYPENOTPRESENTEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_TYPENOTPRESENTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::TypeNotPresentException : public jni::object_base<"java/lang/TypeNotPresentException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<java::lang::TypeNotPresentException> new_object(jni::ref<java::lang::String> typeName, jni::ref<java::lang::Throwable> cause) { return base_::new_object(typeName, cause); }
	jni::ref<java::lang::String> typeName() { return call_method<"typeName", jni::ref<java::lang::String>>(); }

protected:

	TypeNotPresentException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_TYPENOTPRESENTEXCEPTION