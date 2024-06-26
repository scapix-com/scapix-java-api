// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHTYPE_FILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHTYPE_FILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig::spec { class XPathType_Filter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::spec::XPathType_Filter>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/spec/XPathType$Filter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHTYPE_FILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHTYPE_FILTER)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHTYPE_FILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::spec::XPathType_Filter : public jni::object_base<"javax/xml/crypto/dsig/spec/XPathType$Filter",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::crypto::dsig::spec::XPathType_Filter> INTERSECT() { return get_static_field<"INTERSECT", jni::ref<javax::xml::crypto::dsig::spec::XPathType_Filter>>(); }
	static jni::ref<javax::xml::crypto::dsig::spec::XPathType_Filter> SUBTRACT() { return get_static_field<"SUBTRACT", jni::ref<javax::xml::crypto::dsig::spec::XPathType_Filter>>(); }
	static jni::ref<javax::xml::crypto::dsig::spec::XPathType_Filter> UNION() { return get_static_field<"UNION", jni::ref<javax::xml::crypto::dsig::spec::XPathType_Filter>>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	XPathType_Filter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHTYPE_FILTER
