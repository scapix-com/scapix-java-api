// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_FONTS_SYSTEMFONTS_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_FONTS_SYSTEMFONTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::fonts { class SystemFonts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::fonts::SystemFonts>
{
	static constexpr fixed_string class_name = "android/graphics/fonts/SystemFonts";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_FONTS_SYSTEMFONTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_FONTS_SYSTEMFONTS)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_FONTS_SYSTEMFONTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::fonts::SystemFonts : public jni::object_base<"android/graphics/fonts/SystemFonts",
	java::lang::Object>
{
public:

	static jni::ref<java::util::Set> getAvailableFonts() { return call_static_method<"getAvailableFonts", jni::ref<java::util::Set>>(); }

protected:

	SystemFonts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_FONTS_SYSTEMFONTS
