// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_RES_OBBSCANNER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_OBBSCANNER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::res { class ObbScanner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::res::ObbScanner>
{
	static constexpr fixed_string class_name = "android/content/res/ObbScanner";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_OBBSCANNER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_RES_OBBSCANNER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_OBBSCANNER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/ObbInfo.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::res::ObbScanner : public jni::object_base<"android/content/res/ObbScanner",
	java::lang::Object>
{
public:

	static jni::ref<android::content::res::ObbInfo> getObbInfo(jni::ref<java::lang::String> filePath) { return call_static_method<"getObbInfo", jni::ref<android::content::res::ObbInfo>>(filePath); }

protected:

	ObbScanner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_OBBSCANNER