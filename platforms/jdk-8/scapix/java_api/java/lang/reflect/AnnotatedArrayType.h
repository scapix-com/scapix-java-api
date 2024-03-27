// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedType.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class AnnotatedArrayType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::AnnotatedArrayType>
{
	static constexpr fixed_string class_name = "java/lang/reflect/AnnotatedArrayType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::AnnotatedType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::AnnotatedArrayType : public jni::object_base<"java/lang/reflect/AnnotatedArrayType",
	java::lang::Object,
	java::lang::reflect::AnnotatedType>
{
public:

	jni::ref<java::lang::reflect::AnnotatedType> getAnnotatedGenericComponentType() { return call_method<"getAnnotatedGenericComponentType", jni::ref<java::lang::reflect::AnnotatedType>>(); }

protected:

	AnnotatedArrayType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE
