// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_FUNCTIONCALL_JAVATYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_FUNCTIONCALL_JAVATYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class FunctionCall_JavaType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall_JavaType>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall$JavaType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_FUNCTIONCALL_JAVATYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_FUNCTIONCALL_JAVATYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_FUNCTIONCALL_JAVATYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall_JavaType : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall$JavaType",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Class> type() { return get_field<"type", jni::ref<java::lang::Class>>(); }
	void type(jni::ref<java::lang::Class> v) { set_field<"type", jni::ref<java::lang::Class>>(v); }
	jint distance() { return get_field<"distance", jint>(); }
	void distance(jint v) { set_field<"distance", jint>(v); }

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall_JavaType> new_object(jni::ref<java::lang::Class> p1, jint p2) { return base_::new_object(p1, p2); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	FunctionCall_JavaType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_FUNCTIONCALL_JAVATYPE
