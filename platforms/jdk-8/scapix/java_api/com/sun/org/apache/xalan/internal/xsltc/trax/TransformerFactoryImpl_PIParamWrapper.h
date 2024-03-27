// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERFACTORYIMPL_PIPARAMWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERFACTORYIMPL_PIPARAMWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::trax { class TransformerFactoryImpl_PIParamWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl_PIParamWrapper>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl$PIParamWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERFACTORYIMPL_PIPARAMWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERFACTORYIMPL_PIPARAMWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERFACTORYIMPL_PIPARAMWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl_PIParamWrapper : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl$PIParamWrapper",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> _media() { return get_field<"_media", jni::ref<java::lang::String>>(); }
	void _media(jni::ref<java::lang::String> v) { set_field<"_media", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> _title() { return get_field<"_title", jni::ref<java::lang::String>>(); }
	void _title(jni::ref<java::lang::String> v) { set_field<"_title", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> _charset() { return get_field<"_charset", jni::ref<java::lang::String>>(); }
	void _charset(jni::ref<java::lang::String> v) { set_field<"_charset", jni::ref<java::lang::String>>(v); }

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl_PIParamWrapper> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }

protected:

	TransformerFactoryImpl_PIParamWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERFACTORYIMPL_PIPARAMWRAPPER