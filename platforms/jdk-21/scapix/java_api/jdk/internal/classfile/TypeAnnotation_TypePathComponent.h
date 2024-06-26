// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TYPEPATHCOMPONENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TYPEPATHCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class TypeAnnotation_TypePathComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::TypeAnnotation_TypePathComponent>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/TypeAnnotation$TypePathComponent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TYPEPATHCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TYPEPATHCOMPONENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TYPEPATHCOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_TypePathComponent_Kind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::TypeAnnotation_TypePathComponent : public jni::object_base<"jdk/internal/classfile/TypeAnnotation$TypePathComponent",
	java::lang::Object>
{
public:

	using Kind = TypeAnnotation_TypePathComponent_Kind;

	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent> ARRAY() { return get_static_field<"ARRAY", jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent> INNER_TYPE() { return get_static_field<"INNER_TYPE", jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent> WILDCARD() { return get_static_field<"WILDCARD", jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent>>(); }

	jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent_Kind> typePathKind() { return call_method<"typePathKind", jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent_Kind>>(); }
	jint typeArgumentIndex() { return call_method<"typeArgumentIndex", jint>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent> of(jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent_Kind> typePathKind, jint typeArgumentIndex) { return call_static_method<"of", jni::ref<jdk::internal::classfile::TypeAnnotation_TypePathComponent>>(typePathKind, typeArgumentIndex); }

protected:

	TypeAnnotation_TypePathComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TYPEPATHCOMPONENT
