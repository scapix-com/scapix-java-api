// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class RouteListingPreference_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::RouteListingPreference_Builder>
{
	static constexpr fixed_string class_name = "android/media/RouteListingPreference$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/media/RouteListingPreference.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::RouteListingPreference_Builder : public jni::object_base<"android/media/RouteListingPreference$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::RouteListingPreference_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::media::RouteListingPreference_Builder> setItems(jni::ref<java::util::List> items) { return call_method<"setItems", jni::ref<android::media::RouteListingPreference_Builder>>(items); }
	jni::ref<android::media::RouteListingPreference_Builder> setUseSystemOrdering(jboolean useSystemOrdering) { return call_method<"setUseSystemOrdering", jni::ref<android::media::RouteListingPreference_Builder>>(useSystemOrdering); }
	jni::ref<android::media::RouteListingPreference_Builder> setLinkedItemComponentName(jni::ref<android::content::ComponentName> linkedItemComponentName) { return call_method<"setLinkedItemComponentName", jni::ref<android::media::RouteListingPreference_Builder>>(linkedItemComponentName); }
	jni::ref<android::media::RouteListingPreference> build() { return call_method<"build", jni::ref<android::media::RouteListingPreference>>(); }

protected:

	RouteListingPreference_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_BUILDER
