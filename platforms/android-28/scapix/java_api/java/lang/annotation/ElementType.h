// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ELEMENTTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ELEMENTTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::annotation { class ElementType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::annotation::ElementType>
{
	static constexpr fixed_string class_name = "java/lang/annotation/ElementType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ELEMENTTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ELEMENTTYPE)
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ELEMENTTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::annotation::ElementType : public jni::object_base<"java/lang/annotation/ElementType",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::annotation::ElementType> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> FIELD() { return get_static_field<"FIELD", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> METHOD() { return get_static_field<"METHOD", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> PARAMETER() { return get_static_field<"PARAMETER", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> CONSTRUCTOR() { return get_static_field<"CONSTRUCTOR", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> LOCAL_VARIABLE() { return get_static_field<"LOCAL_VARIABLE", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> ANNOTATION_TYPE() { return get_static_field<"ANNOTATION_TYPE", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> PACKAGE() { return get_static_field<"PACKAGE", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> TYPE_PARAMETER() { return get_static_field<"TYPE_PARAMETER", jni::ref<java::lang::annotation::ElementType>>(); }
	static jni::ref<java::lang::annotation::ElementType> TYPE_USE() { return get_static_field<"TYPE_USE", jni::ref<java::lang::annotation::ElementType>>(); }

	static jni::ref<jni::array<java::lang::annotation::ElementType>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::annotation::ElementType>>>(); }
	static jni::ref<java::lang::annotation::ElementType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::annotation::ElementType>>(name); }

protected:

	ElementType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ELEMENTTYPE
