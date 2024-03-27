// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_CONTENTOBSERVER_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_CONTENTOBSERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database { class ContentObserver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::ContentObserver>
{
	static constexpr fixed_string class_name = "android/database/ContentObserver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_CONTENTOBSERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_CONTENTOBSERVER)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_CONTENTOBSERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::ContentObserver : public jni::object_base<"android/database/ContentObserver",
	java::lang::Object>
{
public:

	static jni::ref<android::database::ContentObserver> new_object(jni::ref<android::os::Handler> handler) { return base_::new_object(handler); }
	jboolean deliverSelfNotifications() { return call_method<"deliverSelfNotifications", jboolean>(); }
	void onChange(jboolean selfChange) { return call_method<"onChange", void>(selfChange); }
	void onChange(jboolean selfChange, jni::ref<android::net::Uri> uri) { return call_method<"onChange", void>(selfChange, uri); }
	void onChange(jboolean selfChange, jni::ref<android::net::Uri> uri, jint flags) { return call_method<"onChange", void>(selfChange, uri, flags); }
	void onChange(jboolean selfChange, jni::ref<java::util::Collection> uris, jint flags) { return call_method<"onChange", void>(selfChange, uris, flags); }
	void dispatchChange(jboolean selfChange) { return call_method<"dispatchChange", void>(selfChange); }
	void dispatchChange(jboolean selfChange, jni::ref<android::net::Uri> uri) { return call_method<"dispatchChange", void>(selfChange, uri); }
	void dispatchChange(jboolean selfChange, jni::ref<android::net::Uri> uri, jint flags) { return call_method<"dispatchChange", void>(selfChange, uri, flags); }
	void dispatchChange(jboolean selfChange, jni::ref<java::util::Collection> uris, jint flags) { return call_method<"dispatchChange", void>(selfChange, uris, flags); }

protected:

	ContentObserver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_CONTENTOBSERVER