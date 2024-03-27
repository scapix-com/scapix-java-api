// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSTORAGE_QUOTAUPDATER_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSTORAGE_QUOTAUPDATER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebStorage_QuotaUpdater; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebStorage_QuotaUpdater>
{
	static constexpr fixed_string class_name = "android/webkit/WebStorage$QuotaUpdater";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSTORAGE_QUOTAUPDATER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSTORAGE_QUOTAUPDATER)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSTORAGE_QUOTAUPDATER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebStorage_QuotaUpdater : public jni::object_base<"android/webkit/WebStorage$QuotaUpdater",
	java::lang::Object>
{
public:

	void updateQuota(jlong p1) { return call_method<"updateQuota", void>(p1); }

protected:

	WebStorage_QuotaUpdater(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSTORAGE_QUOTAUPDATER
