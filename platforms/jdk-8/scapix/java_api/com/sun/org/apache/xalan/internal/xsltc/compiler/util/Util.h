// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_UTIL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_UTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util { class Util; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_UTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_UTIL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_UTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Type.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> noExtName(jni::ref<java::lang::String> p1) { return call_static_method<"noExtName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> baseName(jni::ref<java::lang::String> p1) { return call_static_method<"baseName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> pathName(jni::ref<java::lang::String> p1) { return call_static_method<"pathName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> toJavaName(jni::ref<java::lang::String> p1) { return call_static_method<"toJavaName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Type> getJCRefType(jni::ref<java::lang::String> p1) { return call_static_method<"getJCRefType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(p1); }
	static jni::ref<java::lang::String> internalName(jni::ref<java::lang::String> p1) { return call_static_method<"internalName", jni::ref<java::lang::String>>(p1); }
	static void println(jni::ref<java::lang::String> p1) { return call_static_method<"println", void>(p1); }
	static void println(jchar p1) { return call_static_method<"println", void>(p1); }
	static void TRACE1() { return call_static_method<"TRACE1", void>(); }
	static void TRACE2() { return call_static_method<"TRACE2", void>(); }
	static void TRACE3() { return call_static_method<"TRACE3", void>(); }
	static jni::ref<java::lang::String> replace(jni::ref<java::lang::String> p1, jchar p2, jni::ref<java::lang::String> p3) { return call_static_method<"replace", jni::ref<java::lang::String>>(p1, p2, p3); }
	static jni::ref<java::lang::String> replace(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_static_method<"replace", jni::ref<java::lang::String>>(p1, p2, p3); }
	static jni::ref<java::lang::String> escape(jni::ref<java::lang::String> p1) { return call_static_method<"escape", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getLocalName(jni::ref<java::lang::String> p1) { return call_static_method<"getLocalName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getPrefix(jni::ref<java::lang::String> p1) { return call_static_method<"getPrefix", jni::ref<java::lang::String>>(p1); }
	static jboolean isLiteral(jni::ref<java::lang::String> p1) { return call_static_method<"isLiteral", jboolean>(p1); }
	static jboolean isValidQNames(jni::ref<java::lang::String> p1) { return call_static_method<"isValidQNames", jboolean>(p1); }

protected:

	Util(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_UTIL
