// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/DrawFilter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class PaintFlagsDrawFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::PaintFlagsDrawFilter>
{
	static constexpr fixed_string class_name = "android/graphics/PaintFlagsDrawFilter";
	using base_classes = std::tuple<scapix::java_api::android::graphics::DrawFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::PaintFlagsDrawFilter : public jni::object_base<"android/graphics/PaintFlagsDrawFilter",
	android::graphics::DrawFilter>
{
public:

	static jni::ref<android::graphics::PaintFlagsDrawFilter> new_object(jint clearBits, jint setBits) { return base_::new_object(clearBits, setBits); }

protected:

	PaintFlagsDrawFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER
