// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_ERRORMESSAGES_JA_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_ERRORMESSAGES_JA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util { class ErrorMessages_ja; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMessages_ja>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_ja";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_ERRORMESSAGES_JA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_ERRORMESSAGES_JA)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_ERRORMESSAGES_JA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMessages_ja : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_ja",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMessages_ja> new_object() { return base_::new_object(); }
	jni::ref<jni::array<jni::array<java::lang::Object>>> getContents() { return call_method<"getContents", jni::ref<jni::array<jni::array<java::lang::Object>>>>(); }

protected:

	ErrorMessages_ja(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_ERRORMESSAGES_JA