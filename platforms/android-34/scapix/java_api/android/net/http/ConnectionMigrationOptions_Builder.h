// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_CONNECTIONMIGRATIONOPTIONS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_CONNECTIONMIGRATIONOPTIONS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class ConnectionMigrationOptions_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::ConnectionMigrationOptions_Builder>
{
	static constexpr fixed_string class_name = "android/net/http/ConnectionMigrationOptions$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_CONNECTIONMIGRATIONOPTIONS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_CONNECTIONMIGRATIONOPTIONS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_CONNECTIONMIGRATIONOPTIONS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/http/ConnectionMigrationOptions.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::ConnectionMigrationOptions_Builder : public jni::object_base<"android/net/http/ConnectionMigrationOptions$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::http::ConnectionMigrationOptions_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::http::ConnectionMigrationOptions_Builder> setDefaultNetworkMigration(jint state) { return call_method<"setDefaultNetworkMigration", jni::ref<android::net::http::ConnectionMigrationOptions_Builder>>(state); }
	jni::ref<android::net::http::ConnectionMigrationOptions_Builder> setPathDegradationMigration(jint state) { return call_method<"setPathDegradationMigration", jni::ref<android::net::http::ConnectionMigrationOptions_Builder>>(state); }
	jni::ref<android::net::http::ConnectionMigrationOptions_Builder> setAllowNonDefaultNetworkUsage(jint state) { return call_method<"setAllowNonDefaultNetworkUsage", jni::ref<android::net::http::ConnectionMigrationOptions_Builder>>(state); }
	jni::ref<android::net::http::ConnectionMigrationOptions> build() { return call_method<"build", jni::ref<android::net::http::ConnectionMigrationOptions>>(); }

protected:

	ConnectionMigrationOptions_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_CONNECTIONMIGRATIONOPTIONS_BUILDER
