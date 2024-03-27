// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::res { class XmlResourceParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::res::XmlResourceParser>
{
	static constexpr fixed_string class_name = "android/content/res/XmlResourceParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xmlpull::v1::XmlPullParser, scapix::java_api::android::util::AttributeSet, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_RES_XMLRESOURCEPARSER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_XMLRESOURCEPARSER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::res::XmlResourceParser : public jni::object_base<"android/content/res/XmlResourceParser",
	java::lang::Object,
	org::xmlpull::v1::XmlPullParser,
	android::util::AttributeSet,
	java::lang::AutoCloseable>
{
public:

	void close() { return call_method<"close", void>(); }

protected:

	XmlResourceParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_XMLRESOURCEPARSER
