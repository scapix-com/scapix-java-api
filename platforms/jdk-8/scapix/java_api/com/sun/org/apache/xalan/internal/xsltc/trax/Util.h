// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_UTIL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_UTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::trax { class Util; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::trax::Util>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/trax/Util";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_UTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_UTIL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_UTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::trax::Util : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/trax/Util",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::trax::Util> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> baseName(jni::ref<java::lang::String> p1) { return call_static_method<"baseName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> noExtName(jni::ref<java::lang::String> p1) { return call_static_method<"noExtName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> toJavaName(jni::ref<java::lang::String> p1) { return call_static_method<"toJavaName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<org::xml::sax::InputSource> getInputSource(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC> p1, jni::ref<javax::xml::transform::Source> p2) { return call_static_method<"getInputSource", jni::ref<org::xml::sax::InputSource>>(p1, p2); }

protected:

	Util(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_UTIL
