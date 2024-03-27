// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ReflectiveOperationException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INSTANTIATIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INSTANTIATIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class InstantiationException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::InstantiationException>
{
	static constexpr fixed_string class_name = "java/lang/InstantiationException";
	using base_classes = std::tuple<scapix::java_api::java::lang::ReflectiveOperationException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INSTANTIATIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INSTANTIATIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_INSTANTIATIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::InstantiationException : public jni::object_base<"java/lang/InstantiationException",
	java::lang::ReflectiveOperationException>
{
public:

	static jni::ref<java::lang::InstantiationException> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::InstantiationException> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }

protected:

	InstantiationException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INSTANTIATIONEXCEPTION
