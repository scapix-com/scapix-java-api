// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/annotation/ExceptionProxy.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ENUMCONSTANTNOTPRESENTEXCEPTIONPROXY_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ENUMCONSTANTNOTPRESENTEXCEPTIONPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::annotation { class EnumConstantNotPresentExceptionProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::annotation::EnumConstantNotPresentExceptionProxy>
{
	static constexpr fixed_string class_name = "sun/reflect/annotation/EnumConstantNotPresentExceptionProxy";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::annotation::ExceptionProxy>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ENUMCONSTANTNOTPRESENTEXCEPTIONPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ENUMCONSTANTNOTPRESENTEXCEPTIONPROXY)
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ENUMCONSTANTNOTPRESENTEXCEPTIONPROXY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::annotation::EnumConstantNotPresentExceptionProxy : public jni::object_base<"sun/reflect/annotation/EnumConstantNotPresentExceptionProxy",
	sun::reflect::annotation::ExceptionProxy>
{
public:

	static jni::ref<sun::reflect::annotation::EnumConstantNotPresentExceptionProxy> new_object(jni::ref<java::lang::Class> enumType, jni::ref<java::lang::String> constName) { return base_::new_object(enumType, constName); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	EnumConstantNotPresentExceptionProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ENUMCONSTANTNOTPRESENTEXCEPTIONPROXY
