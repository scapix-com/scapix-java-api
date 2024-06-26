// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_METHODTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_METHODTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util { class MethodType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_METHODTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_METHODTYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_METHODTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Type.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType",
	com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p3, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1, jni::ref<java::util::List> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toSignature() { return call_method<"toSignature", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toSignature(jni::ref<java::lang::String> p1) { return call_method<"toSignature", jni::ref<java::lang::String>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Type> toJCType() { return call_method<"toJCType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(); }
	jboolean identicalTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1) { return call_method<"identicalTo", jboolean>(p1); }
	jint distanceTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1) { return call_method<"distanceTo", jint>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> resultType() { return call_method<"resultType", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type>>(); }
	jni::ref<java::util::List> argsType() { return call_method<"argsType", jni::ref<java::util::List>>(); }
	jint argsCount() { return call_method<"argsCount", jint>(); }

protected:

	MethodType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_METHODTYPE
