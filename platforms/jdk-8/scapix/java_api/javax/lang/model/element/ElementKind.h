// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENTKIND_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENTKIND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::element { class ElementKind; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::element::ElementKind>
{
	static constexpr fixed_string class_name = "javax/lang/model/element/ElementKind";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENTKIND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENTKIND)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENTKIND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::element::ElementKind : public jni::object_base<"javax/lang/model/element/ElementKind",
	java::lang::Enum>
{
public:

	static jni::ref<javax::lang::model::element::ElementKind> PACKAGE() { return get_static_field<"PACKAGE", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> ENUM() { return get_static_field<"ENUM", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> CLASS() { return get_static_field<"CLASS", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> ANNOTATION_TYPE() { return get_static_field<"ANNOTATION_TYPE", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> INTERFACE() { return get_static_field<"INTERFACE", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> ENUM_CONSTANT() { return get_static_field<"ENUM_CONSTANT", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> FIELD() { return get_static_field<"FIELD", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> PARAMETER() { return get_static_field<"PARAMETER", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> LOCAL_VARIABLE() { return get_static_field<"LOCAL_VARIABLE", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> EXCEPTION_PARAMETER() { return get_static_field<"EXCEPTION_PARAMETER", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> METHOD() { return get_static_field<"METHOD", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> CONSTRUCTOR() { return get_static_field<"CONSTRUCTOR", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> STATIC_INIT() { return get_static_field<"STATIC_INIT", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> INSTANCE_INIT() { return get_static_field<"INSTANCE_INIT", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> TYPE_PARAMETER() { return get_static_field<"TYPE_PARAMETER", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> OTHER() { return get_static_field<"OTHER", jni::ref<javax::lang::model::element::ElementKind>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> RESOURCE_VARIABLE() { return get_static_field<"RESOURCE_VARIABLE", jni::ref<javax::lang::model::element::ElementKind>>(); }

	static jni::ref<jni::array<javax::lang::model::element::ElementKind>> values() { return call_static_method<"values", jni::ref<jni::array<javax::lang::model::element::ElementKind>>>(); }
	static jni::ref<javax::lang::model::element::ElementKind> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<javax::lang::model::element::ElementKind>>(p1); }
	jboolean isClass() { return call_method<"isClass", jboolean>(); }
	jboolean isInterface() { return call_method<"isInterface", jboolean>(); }
	jboolean isField() { return call_method<"isField", jboolean>(); }

protected:

	ElementKind(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENTKIND
