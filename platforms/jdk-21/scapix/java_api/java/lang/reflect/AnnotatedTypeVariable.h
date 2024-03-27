// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedType.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDTYPEVARIABLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDTYPEVARIABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class AnnotatedTypeVariable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::AnnotatedTypeVariable>
{
	static constexpr fixed_string class_name = "java/lang/reflect/AnnotatedTypeVariable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::AnnotatedType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDTYPEVARIABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDTYPEVARIABLE)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDTYPEVARIABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::AnnotatedTypeVariable : public jni::object_base<"java/lang/reflect/AnnotatedTypeVariable",
	java::lang::Object,
	java::lang::reflect::AnnotatedType>
{
public:

	jni::ref<jni::array<java::lang::reflect::AnnotatedType>> getAnnotatedBounds() { return call_method<"getAnnotatedBounds", jni::ref<jni::array<java::lang::reflect::AnnotatedType>>>(); }
	jni::ref<java::lang::reflect::AnnotatedType> getAnnotatedOwnerType() { return call_method<"getAnnotatedOwnerType", jni::ref<java::lang::reflect::AnnotatedType>>(); }

protected:

	AnnotatedTypeVariable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ANNOTATEDTYPEVARIABLE
