// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_FUNCTIONTABLE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_FUNCTIONTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::compiler { class FunctionTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::compiler::FunctionTable>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/compiler/FunctionTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_FUNCTIONTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_FUNCTIONTABLE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_FUNCTIONTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::compiler::FunctionTable : public jni::object_base<"com/sun/org/apache/xpath/internal/compiler/FunctionTable",
	java::lang::Object>
{
public:

	static jint FUNC_CURRENT() { return get_static_field<"FUNC_CURRENT", jint>(); }
	static jint FUNC_LAST() { return get_static_field<"FUNC_LAST", jint>(); }
	static jint FUNC_POSITION() { return get_static_field<"FUNC_POSITION", jint>(); }
	static jint FUNC_COUNT() { return get_static_field<"FUNC_COUNT", jint>(); }
	static jint FUNC_ID() { return get_static_field<"FUNC_ID", jint>(); }
	static jint FUNC_KEY() { return get_static_field<"FUNC_KEY", jint>(); }
	static jint FUNC_LOCAL_PART() { return get_static_field<"FUNC_LOCAL_PART", jint>(); }
	static jint FUNC_NAMESPACE() { return get_static_field<"FUNC_NAMESPACE", jint>(); }
	static jint FUNC_QNAME() { return get_static_field<"FUNC_QNAME", jint>(); }
	static jint FUNC_GENERATE_ID() { return get_static_field<"FUNC_GENERATE_ID", jint>(); }
	static jint FUNC_NOT() { return get_static_field<"FUNC_NOT", jint>(); }
	static jint FUNC_TRUE() { return get_static_field<"FUNC_TRUE", jint>(); }
	static jint FUNC_FALSE() { return get_static_field<"FUNC_FALSE", jint>(); }
	static jint FUNC_BOOLEAN() { return get_static_field<"FUNC_BOOLEAN", jint>(); }
	static jint FUNC_NUMBER() { return get_static_field<"FUNC_NUMBER", jint>(); }
	static jint FUNC_FLOOR() { return get_static_field<"FUNC_FLOOR", jint>(); }
	static jint FUNC_CEILING() { return get_static_field<"FUNC_CEILING", jint>(); }
	static jint FUNC_ROUND() { return get_static_field<"FUNC_ROUND", jint>(); }
	static jint FUNC_SUM() { return get_static_field<"FUNC_SUM", jint>(); }
	static jint FUNC_STRING() { return get_static_field<"FUNC_STRING", jint>(); }
	static jint FUNC_STARTS_WITH() { return get_static_field<"FUNC_STARTS_WITH", jint>(); }
	static jint FUNC_CONTAINS() { return get_static_field<"FUNC_CONTAINS", jint>(); }
	static jint FUNC_SUBSTRING_BEFORE() { return get_static_field<"FUNC_SUBSTRING_BEFORE", jint>(); }
	static jint FUNC_SUBSTRING_AFTER() { return get_static_field<"FUNC_SUBSTRING_AFTER", jint>(); }
	static jint FUNC_NORMALIZE_SPACE() { return get_static_field<"FUNC_NORMALIZE_SPACE", jint>(); }
	static jint FUNC_TRANSLATE() { return get_static_field<"FUNC_TRANSLATE", jint>(); }
	static jint FUNC_CONCAT() { return get_static_field<"FUNC_CONCAT", jint>(); }
	static jint FUNC_SUBSTRING() { return get_static_field<"FUNC_SUBSTRING", jint>(); }
	static jint FUNC_STRING_LENGTH() { return get_static_field<"FUNC_STRING_LENGTH", jint>(); }
	static jint FUNC_SYSTEM_PROPERTY() { return get_static_field<"FUNC_SYSTEM_PROPERTY", jint>(); }
	static jint FUNC_LANG() { return get_static_field<"FUNC_LANG", jint>(); }
	static jint FUNC_EXT_FUNCTION_AVAILABLE() { return get_static_field<"FUNC_EXT_FUNCTION_AVAILABLE", jint>(); }
	static jint FUNC_EXT_ELEM_AVAILABLE() { return get_static_field<"FUNC_EXT_ELEM_AVAILABLE", jint>(); }
	static jint FUNC_UNPARSED_ENTITY_URI() { return get_static_field<"FUNC_UNPARSED_ENTITY_URI", jint>(); }
	static jint FUNC_DOCLOCATION() { return get_static_field<"FUNC_DOCLOCATION", jint>(); }

	static jni::ref<com::sun::org::apache::xpath::internal::compiler::FunctionTable> new_object() { return base_::new_object(); }
	jint installFunction(jni::ref<java::lang::String> p1, jni::ref<java::lang::Class> p2) { return call_method<"installFunction", jint>(p1, p2); }
	jboolean functionAvailable(jni::ref<java::lang::String> p1) { return call_method<"functionAvailable", jboolean>(p1); }

protected:

	FunctionTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_FUNCTIONTABLE