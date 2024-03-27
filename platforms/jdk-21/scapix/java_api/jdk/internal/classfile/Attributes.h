// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTES_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class Attributes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::Attributes>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/Attributes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTES)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/jdk/internal/classfile/AttributeMapper.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::Attributes : public jni::object_base<"jdk/internal/classfile/Attributes",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> NAME_ANNOTATION_DEFAULT() { return get_static_field<"NAME_ANNOTATION_DEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_BOOTSTRAP_METHODS() { return get_static_field<"NAME_BOOTSTRAP_METHODS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_CHARACTER_RANGE_TABLE() { return get_static_field<"NAME_CHARACTER_RANGE_TABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_CODE() { return get_static_field<"NAME_CODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_COMPILATION_ID() { return get_static_field<"NAME_COMPILATION_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_CONSTANT_VALUE() { return get_static_field<"NAME_CONSTANT_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_DEPRECATED() { return get_static_field<"NAME_DEPRECATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_ENCLOSING_METHOD() { return get_static_field<"NAME_ENCLOSING_METHOD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_EXCEPTIONS() { return get_static_field<"NAME_EXCEPTIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_INNER_CLASSES() { return get_static_field<"NAME_INNER_CLASSES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_LINE_NUMBER_TABLE() { return get_static_field<"NAME_LINE_NUMBER_TABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_LOCAL_VARIABLE_TABLE() { return get_static_field<"NAME_LOCAL_VARIABLE_TABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_LOCAL_VARIABLE_TYPE_TABLE() { return get_static_field<"NAME_LOCAL_VARIABLE_TYPE_TABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_METHOD_PARAMETERS() { return get_static_field<"NAME_METHOD_PARAMETERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_MODULE() { return get_static_field<"NAME_MODULE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_MODULE_HASHES() { return get_static_field<"NAME_MODULE_HASHES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_MODULE_MAIN_CLASS() { return get_static_field<"NAME_MODULE_MAIN_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_MODULE_PACKAGES() { return get_static_field<"NAME_MODULE_PACKAGES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_MODULE_RESOLUTION() { return get_static_field<"NAME_MODULE_RESOLUTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_MODULE_TARGET() { return get_static_field<"NAME_MODULE_TARGET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_NEST_HOST() { return get_static_field<"NAME_NEST_HOST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_NEST_MEMBERS() { return get_static_field<"NAME_NEST_MEMBERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_PERMITTED_SUBCLASSES() { return get_static_field<"NAME_PERMITTED_SUBCLASSES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_RECORD() { return get_static_field<"NAME_RECORD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_RUNTIME_INVISIBLE_ANNOTATIONS() { return get_static_field<"NAME_RUNTIME_INVISIBLE_ANNOTATIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS() { return get_static_field<"NAME_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_RUNTIME_INVISIBLE_TYPE_ANNOTATIONS() { return get_static_field<"NAME_RUNTIME_INVISIBLE_TYPE_ANNOTATIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_RUNTIME_VISIBLE_ANNOTATIONS() { return get_static_field<"NAME_RUNTIME_VISIBLE_ANNOTATIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS() { return get_static_field<"NAME_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_RUNTIME_VISIBLE_TYPE_ANNOTATIONS() { return get_static_field<"NAME_RUNTIME_VISIBLE_TYPE_ANNOTATIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_SIGNATURE() { return get_static_field<"NAME_SIGNATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_SOURCE_DEBUG_EXTENSION() { return get_static_field<"NAME_SOURCE_DEBUG_EXTENSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_SOURCE_FILE() { return get_static_field<"NAME_SOURCE_FILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_SOURCE_ID() { return get_static_field<"NAME_SOURCE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_STACK_MAP_TABLE() { return get_static_field<"NAME_STACK_MAP_TABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME_SYNTHETIC() { return get_static_field<"NAME_SYNTHETIC", jni::ref<java::lang::String>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> ANNOTATION_DEFAULT() { return get_static_field<"ANNOTATION_DEFAULT", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> BOOTSTRAP_METHODS() { return get_static_field<"BOOTSTRAP_METHODS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> CHARACTER_RANGE_TABLE() { return get_static_field<"CHARACTER_RANGE_TABLE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> CODE() { return get_static_field<"CODE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> COMPILATION_ID() { return get_static_field<"COMPILATION_ID", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> CONSTANT_VALUE() { return get_static_field<"CONSTANT_VALUE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> DEPRECATED() { return get_static_field<"DEPRECATED", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> ENCLOSING_METHOD() { return get_static_field<"ENCLOSING_METHOD", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> EXCEPTIONS() { return get_static_field<"EXCEPTIONS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> INNER_CLASSES() { return get_static_field<"INNER_CLASSES", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> LINE_NUMBER_TABLE() { return get_static_field<"LINE_NUMBER_TABLE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> LOCAL_VARIABLE_TABLE() { return get_static_field<"LOCAL_VARIABLE_TABLE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> LOCAL_VARIABLE_TYPE_TABLE() { return get_static_field<"LOCAL_VARIABLE_TYPE_TABLE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> METHOD_PARAMETERS() { return get_static_field<"METHOD_PARAMETERS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> MODULE() { return get_static_field<"MODULE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> MODULE_HASHES() { return get_static_field<"MODULE_HASHES", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> MODULE_MAIN_CLASS() { return get_static_field<"MODULE_MAIN_CLASS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> MODULE_PACKAGES() { return get_static_field<"MODULE_PACKAGES", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> MODULE_RESOLUTION() { return get_static_field<"MODULE_RESOLUTION", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> MODULE_TARGET() { return get_static_field<"MODULE_TARGET", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> NEST_HOST() { return get_static_field<"NEST_HOST", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> NEST_MEMBERS() { return get_static_field<"NEST_MEMBERS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> PERMITTED_SUBCLASSES() { return get_static_field<"PERMITTED_SUBCLASSES", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> RECORD() { return get_static_field<"RECORD", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> RUNTIME_INVISIBLE_ANNOTATIONS() { return get_static_field<"RUNTIME_INVISIBLE_ANNOTATIONS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS() { return get_static_field<"RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> RUNTIME_INVISIBLE_TYPE_ANNOTATIONS() { return get_static_field<"RUNTIME_INVISIBLE_TYPE_ANNOTATIONS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> RUNTIME_VISIBLE_ANNOTATIONS() { return get_static_field<"RUNTIME_VISIBLE_ANNOTATIONS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS() { return get_static_field<"RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> RUNTIME_VISIBLE_TYPE_ANNOTATIONS() { return get_static_field<"RUNTIME_VISIBLE_TYPE_ANNOTATIONS", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> SIGNATURE() { return get_static_field<"SIGNATURE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> SOURCE_DEBUG_EXTENSION() { return get_static_field<"SOURCE_DEBUG_EXTENSION", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> SOURCE_FILE() { return get_static_field<"SOURCE_FILE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> SOURCE_ID() { return get_static_field<"SOURCE_ID", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> STACK_MAP_TABLE() { return get_static_field<"STACK_MAP_TABLE", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<jdk::internal::classfile::AttributeMapper> SYNTHETIC() { return get_static_field<"SYNTHETIC", jni::ref<jdk::internal::classfile::AttributeMapper>>(); }
	static jni::ref<java::util::Set> PREDEFINED_ATTRIBUTES() { return get_static_field<"PREDEFINED_ATTRIBUTES", jni::ref<java::util::Set>>(); }

	static jni::ref<jdk::internal::classfile::AttributeMapper> standardAttribute(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name) { return call_static_method<"standardAttribute", jni::ref<jdk::internal::classfile::AttributeMapper>>(name); }

protected:

	Attributes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTES