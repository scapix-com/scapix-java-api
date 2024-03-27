// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBBACKFORWARDLIST_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBBACKFORWARDLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebBackForwardList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebBackForwardList>
{
	static constexpr fixed_string class_name = "android/webkit/WebBackForwardList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBBACKFORWARDLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBBACKFORWARDLIST)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBBACKFORWARDLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/webkit/WebHistoryItem.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebBackForwardList : public jni::object_base<"android/webkit/WebBackForwardList",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<android::webkit::WebBackForwardList> new_object() { return base_::new_object(); }
	jni::ref<android::webkit::WebHistoryItem> getCurrentItem() { return call_method<"getCurrentItem", jni::ref<android::webkit::WebHistoryItem>>(); }
	jint getCurrentIndex() { return call_method<"getCurrentIndex", jint>(); }
	jni::ref<android::webkit::WebHistoryItem> getItemAtIndex(jint p1) { return call_method<"getItemAtIndex", jni::ref<android::webkit::WebHistoryItem>>(p1); }
	jint getSize() { return call_method<"getSize", jint>(); }

protected:

	WebBackForwardList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBBACKFORWARDLIST
