// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_FWD
#define SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xmlpull::v1 { class XmlPullParserFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xmlpull::v1::XmlPullParserFactory>
{
	static constexpr fixed_string class_name = "org/xmlpull/v1/XmlPullParserFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY)
#define SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#include <scapix/java_api/org/xmlpull/v1/XmlSerializer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xmlpull::v1::XmlPullParserFactory : public jni::object_base<"org/xmlpull/v1/XmlPullParserFactory",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> PROPERTY_NAME() { return get_static_field<"PROPERTY_NAME", jni::ref<java::lang::String>>(); }

	void setFeature(jni::ref<java::lang::String> name, jboolean state) { return call_method<"setFeature", void>(name, state); }
	jboolean getFeature(jni::ref<java::lang::String> name) { return call_method<"getFeature", jboolean>(name); }
	void setNamespaceAware(jboolean awareness) { return call_method<"setNamespaceAware", void>(awareness); }
	jboolean isNamespaceAware() { return call_method<"isNamespaceAware", jboolean>(); }
	void setValidating(jboolean validating) { return call_method<"setValidating", void>(validating); }
	jboolean isValidating() { return call_method<"isValidating", jboolean>(); }
	jni::ref<org::xmlpull::v1::XmlPullParser> newPullParser() { return call_method<"newPullParser", jni::ref<org::xmlpull::v1::XmlPullParser>>(); }
	jni::ref<org::xmlpull::v1::XmlSerializer> newSerializer() { return call_method<"newSerializer", jni::ref<org::xmlpull::v1::XmlSerializer>>(); }
	static jni::ref<org::xmlpull::v1::XmlPullParserFactory> newInstance() { return call_static_method<"newInstance", jni::ref<org::xmlpull::v1::XmlPullParserFactory>>(); }
	static jni::ref<org::xmlpull::v1::XmlPullParserFactory> newInstance(jni::ref<java::lang::String> unused, jni::ref<java::lang::Class> unused2) { return call_static_method<"newInstance", jni::ref<org::xmlpull::v1::XmlPullParserFactory>>(unused, unused2); }

protected:

	XmlPullParserFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY
