// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/service/controls/templates/ControlTemplate.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_THUMBNAILTEMPLATE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_THUMBNAILTEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::controls::templates { class ThumbnailTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::controls::templates::ThumbnailTemplate>
{
	static constexpr fixed_string class_name = "android/service/controls/templates/ThumbnailTemplate";
	using base_classes = std::tuple<scapix::java_api::android::service::controls::templates::ControlTemplate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_THUMBNAILTEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_THUMBNAILTEMPLATE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_THUMBNAILTEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::controls::templates::ThumbnailTemplate : public jni::object_base<"android/service/controls/templates/ThumbnailTemplate",
	android::service::controls::templates::ControlTemplate>
{
public:

	static jni::ref<android::service::controls::templates::ThumbnailTemplate> new_object(jni::ref<java::lang::String> templateId, jboolean active, jni::ref<android::graphics::drawable::Icon> thumbnail, jni::ref<java::lang::CharSequence> contentDescription) { return base_::new_object(templateId, active, thumbnail, contentDescription); }
	jboolean isActive() { return call_method<"isActive", jboolean>(); }
	jni::ref<android::graphics::drawable::Icon> getThumbnail() { return call_method<"getThumbnail", jni::ref<android::graphics::drawable::Icon>>(); }
	jni::ref<java::lang::CharSequence> getContentDescription() { return call_method<"getContentDescription", jni::ref<java::lang::CharSequence>>(); }
	jint getTemplateType() { return call_method<"getTemplateType", jint>(); }

protected:

	ThumbnailTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_THUMBNAILTEMPLATE