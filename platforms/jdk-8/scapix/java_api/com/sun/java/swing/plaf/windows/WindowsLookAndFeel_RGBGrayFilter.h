// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/image/RGBImageFilter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_RGBGRAYFILTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_RGBGRAYFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsLookAndFeel_RGBGrayFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsLookAndFeel_RGBGrayFilter>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsLookAndFeel$RGBGrayFilter";
	using base_classes = std::tuple<scapix::java_api::java::awt::image::RGBImageFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_RGBGRAYFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_RGBGRAYFILTER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_RGBGRAYFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsLookAndFeel_RGBGrayFilter : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsLookAndFeel$RGBGrayFilter",
	java::awt::image::RGBImageFilter>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::WindowsLookAndFeel_RGBGrayFilter> new_object() { return base_::new_object(); }
	jint filterRGB(jint p1, jint p2, jint p3) { return call_method<"filterRGB", jint>(p1, p2, p3); }

protected:

	WindowsLookAndFeel_RGBGrayFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_RGBGRAYFILTER
