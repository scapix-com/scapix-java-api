// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRouter_RouteCategory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRouter_RouteCategory>
{
	static constexpr fixed_string class_name = "android/media/MediaRouter$RouteCategory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRouter_RouteCategory : public jni::object_base<"android/media/MediaRouter$RouteCategory",
	java::lang::Object>
{
public:

	jni::ref<java::lang::CharSequence> getName() { return call_method<"getName", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::CharSequence> getName(jni::ref<android::content::Context> context) { return call_method<"getName", jni::ref<java::lang::CharSequence>>(context); }
	jni::ref<java::util::List> getRoutes(jni::ref<java::util::List> out) { return call_method<"getRoutes", jni::ref<java::util::List>>(out); }
	jint getSupportedTypes() { return call_method<"getSupportedTypes", jint>(); }
	jboolean isGroupable() { return call_method<"isGroupable", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MediaRouter_RouteCategory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY
