// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETTYPE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class TypeAnnotation_TargetType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::TypeAnnotation_TargetType>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/TypeAnnotation$TargetType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETTYPE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::TypeAnnotation_TargetType : public jni::object_base<"jdk/internal/classfile/TypeAnnotation$TargetType",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> CLASS_TYPE_PARAMETER() { return get_static_field<"CLASS_TYPE_PARAMETER", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> METHOD_TYPE_PARAMETER() { return get_static_field<"METHOD_TYPE_PARAMETER", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> CLASS_EXTENDS() { return get_static_field<"CLASS_EXTENDS", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> CLASS_TYPE_PARAMETER_BOUND() { return get_static_field<"CLASS_TYPE_PARAMETER_BOUND", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> METHOD_TYPE_PARAMETER_BOUND() { return get_static_field<"METHOD_TYPE_PARAMETER_BOUND", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> FIELD() { return get_static_field<"FIELD", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> METHOD_RETURN() { return get_static_field<"METHOD_RETURN", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> METHOD_RECEIVER() { return get_static_field<"METHOD_RECEIVER", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> METHOD_FORMAL_PARAMETER() { return get_static_field<"METHOD_FORMAL_PARAMETER", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> THROWS() { return get_static_field<"THROWS", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> LOCAL_VARIABLE() { return get_static_field<"LOCAL_VARIABLE", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> RESOURCE_VARIABLE() { return get_static_field<"RESOURCE_VARIABLE", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> EXCEPTION_PARAMETER() { return get_static_field<"EXCEPTION_PARAMETER", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> INSTANCEOF() { return get_static_field<"INSTANCEOF", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> NEW() { return get_static_field<"NEW", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> CONSTRUCTOR_REFERENCE() { return get_static_field<"CONSTRUCTOR_REFERENCE", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> METHOD_REFERENCE() { return get_static_field<"METHOD_REFERENCE", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> CAST() { return get_static_field<"CAST", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT() { return get_static_field<"CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> METHOD_INVOCATION_TYPE_ARGUMENT() { return get_static_field<"METHOD_INVOCATION_TYPE_ARGUMENT", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT() { return get_static_field<"CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> METHOD_REFERENCE_TYPE_ARGUMENT() { return get_static_field<"METHOD_REFERENCE_TYPE_ARGUMENT", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }

	static jni::ref<jni::array<jdk::internal::classfile::TypeAnnotation_TargetType>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::classfile::TypeAnnotation_TargetType>>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(name); }
	jint targetTypeValue() { return call_method<"targetTypeValue", jint>(); }
	jint sizeIfFixed() { return call_method<"sizeIfFixed", jint>(); }

protected:

	TypeAnnotation_TargetType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETTYPE
