// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_JAVASCRIPTINTERFACE_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_JAVASCRIPTINTERFACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class JavascriptInterface; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::JavascriptInterface>
{
	static constexpr fixed_string class_name = "android/webkit/JavascriptInterface";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_JAVASCRIPTINTERFACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_JAVASCRIPTINTERFACE)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_JAVASCRIPTINTERFACE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::JavascriptInterface : public jni::object_base<"android/webkit/JavascriptInterface",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	JavascriptInterface(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_JAVASCRIPTINTERFACE
