// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBHISTORYITEM_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBHISTORYITEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebHistoryItem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebHistoryItem>
{
	static constexpr fixed_string class_name = "android/webkit/WebHistoryItem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBHISTORYITEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBHISTORYITEM)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBHISTORYITEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebHistoryItem : public jni::object_base<"android/webkit/WebHistoryItem",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<android::webkit::WebHistoryItem> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getUrl() { return call_method<"getUrl", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getOriginalUrl() { return call_method<"getOriginalUrl", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getTitle() { return call_method<"getTitle", jni::ref<java::lang::String>>(); }
	jni::ref<android::graphics::Bitmap> getFavicon() { return call_method<"getFavicon", jni::ref<android::graphics::Bitmap>>(); }

protected:

	WebHistoryItem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBHISTORYITEM