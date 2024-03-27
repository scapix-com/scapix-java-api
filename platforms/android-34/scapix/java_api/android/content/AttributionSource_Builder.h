// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_ATTRIBUTIONSOURCE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_ATTRIBUTIONSOURCE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class AttributionSource_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::AttributionSource_Builder>
{
	static constexpr fixed_string class_name = "android/content/AttributionSource$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_ATTRIBUTIONSOURCE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_ATTRIBUTIONSOURCE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_ATTRIBUTIONSOURCE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/AttributionSource.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::AttributionSource_Builder : public jni::object_base<"android/content/AttributionSource$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::content::AttributionSource_Builder> new_object(jint uid) { return base_::new_object(uid); }
	static jni::ref<android::content::AttributionSource_Builder> new_object(jni::ref<android::content::AttributionSource> current) { return base_::new_object(current); }
	jni::ref<android::content::AttributionSource_Builder> setPid(jint value) { return call_method<"setPid", jni::ref<android::content::AttributionSource_Builder>>(value); }
	jni::ref<android::content::AttributionSource_Builder> setPackageName(jni::ref<java::lang::String> value) { return call_method<"setPackageName", jni::ref<android::content::AttributionSource_Builder>>(value); }
	jni::ref<android::content::AttributionSource_Builder> setAttributionTag(jni::ref<java::lang::String> value) { return call_method<"setAttributionTag", jni::ref<android::content::AttributionSource_Builder>>(value); }
	jni::ref<android::content::AttributionSource_Builder> setNext(jni::ref<android::content::AttributionSource> value) { return call_method<"setNext", jni::ref<android::content::AttributionSource_Builder>>(value); }
	jni::ref<android::content::AttributionSource> build() { return call_method<"build", jni::ref<android::content::AttributionSource>>(); }

protected:

	AttributionSource_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_ATTRIBUTIONSOURCE_BUILDER
