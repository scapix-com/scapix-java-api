// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::contentcapture { class ContentCaptureContext_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::contentcapture::ContentCaptureContext_Builder>
{
	static constexpr fixed_string class_name = "android/view/contentcapture/ContentCaptureContext$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/LocusId.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/contentcapture/ContentCaptureContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::contentcapture::ContentCaptureContext_Builder : public jni::object_base<"android/view/contentcapture/ContentCaptureContext$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::contentcapture::ContentCaptureContext_Builder> new_object(jni::ref<android::content::LocusId> id) { return base_::new_object(id); }
	jni::ref<android::view::contentcapture::ContentCaptureContext_Builder> setExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setExtras", jni::ref<android::view::contentcapture::ContentCaptureContext_Builder>>(extras); }
	jni::ref<android::view::contentcapture::ContentCaptureContext> build() { return call_method<"build", jni::ref<android::view::contentcapture::ContentCaptureContext>>(); }

protected:

	ContentCaptureContext_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURECONTEXT_BUILDER
