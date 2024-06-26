// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/xml/sax/helpers/LocatorImpl.h>
#include <scapix/java_api/org/xml/sax/ext/Locator2.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_EXT_LOCATOR2IMPL_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_EXT_LOCATOR2IMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax::ext { class Locator2Impl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::ext::Locator2Impl>
{
	static constexpr fixed_string class_name = "org/xml/sax/ext/Locator2Impl";
	using base_classes = std::tuple<scapix::java_api::org::xml::sax::helpers::LocatorImpl, scapix::java_api::org::xml::sax::ext::Locator2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_EXT_LOCATOR2IMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_EXT_LOCATOR2IMPL)
#define SCAPIX_JAVA_API_ORG_XML_SAX_EXT_LOCATOR2IMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::ext::Locator2Impl : public jni::object_base<"org/xml/sax/ext/Locator2Impl",
	org::xml::sax::helpers::LocatorImpl,
	org::xml::sax::ext::Locator2>
{
public:

	static jni::ref<org::xml::sax::ext::Locator2Impl> new_object() { return base_::new_object(); }
	static jni::ref<org::xml::sax::ext::Locator2Impl> new_object(jni::ref<org::xml::sax::Locator> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getXMLVersion() { return call_method<"getXMLVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getEncoding() { return call_method<"getEncoding", jni::ref<java::lang::String>>(); }
	void setXMLVersion(jni::ref<java::lang::String> p1) { return call_method<"setXMLVersion", void>(p1); }
	void setEncoding(jni::ref<java::lang::String> p1) { return call_method<"setEncoding", void>(p1); }

protected:

	Locator2Impl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_EXT_LOCATOR2IMPL
