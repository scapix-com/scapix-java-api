// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_NODETEST_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_NODETEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class NodeTest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::NodeTest>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/NodeTest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_NODETEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_NODETEST)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_NODETEST

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::compiler::NodeTest : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/NodeTest",
	java::lang::Object>
{
public:

	static jint TEXT() { return get_static_field<"TEXT", jint>(); }
	static jint COMMENT() { return get_static_field<"COMMENT", jint>(); }
	static jint PI() { return get_static_field<"PI", jint>(); }
	static jint ROOT() { return get_static_field<"ROOT", jint>(); }
	static jint ELEMENT() { return get_static_field<"ELEMENT", jint>(); }
	static jint ATTRIBUTE() { return get_static_field<"ATTRIBUTE", jint>(); }
	static jint GTYPE() { return get_static_field<"GTYPE", jint>(); }
	static jint ANODE() { return get_static_field<"ANODE", jint>(); }


protected:

	NodeTest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_NODETEST
